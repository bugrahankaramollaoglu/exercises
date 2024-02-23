package com.bugrahankaramollaoglu.permissions_java;

import static android.app.ProgressDialog.show;

import androidx.activity.result.ActivityResult;
import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultLauncher;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import android.Manifest;
import android.app.Activity;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.ImageDecoder;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.provider.MediaStore;
import android.view.View;
import android.widget.Toast;
import com.bugrahankaramollaoglu.permissions_java.databinding.ActivityMainBinding;
import com.google.android.material.snackbar.Snackbar;
import java.io.IOException;

public class MainActivity extends AppCompatActivity {

	private ActivityMainBinding binding;
	private ActivityResultLauncher<Intent> activityResultLauncher;
	private ActivityResultLauncher<String> permissionLauncher;
	Bitmap selectedBitmap;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		binding = ActivityMainBinding.inflate(getLayoutInflater());
		View view = binding.getRoot();
		setContentView(view);

		registerLauncher();
	}

	public void registerLauncher() {

		activityResultLauncher = registerForActivityResult(new ActivityResultContracts.StartActivityForResult(),
				new ActivityResultCallback<ActivityResult>() {
					@Override
					public void onActivityResult(ActivityResult result) {
						if (result.getResultCode() == Activity.RESULT_OK) {
							Intent intentFromResult = result.getData();
							if (intentFromResult != null) {
								// UniformResourceIdentifier is a reference to the location of photo
								Uri imageData = intentFromResult.getData();
								try {
									selectedBitmap = MediaStore.Images.Media
											.getBitmap(MainActivity.this.getContentResolver(), imageData);
									binding.photoChosen.setImageBitmap(selectedBitmap);
								} catch (IOException e) {
									e.printStackTrace();
								}
							}
						}
					}
				});

		permissionLauncher = registerForActivityResult(new ActivityResultContracts.RequestPermission(),
				new ActivityResultCallback<Boolean>() {
					@Override
					public void onActivityResult(Boolean result) {
						if (result) {
							Intent intentToGallery = new Intent(Intent.ACTION_PICK,
									MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
							activityResultLauncher.launch(intentToGallery);
						} else {
							Toast.makeText(MainActivity.this, "Permission needed!", Toast.LENGTH_LONG).show();
						}

					}
				});
	}

	public void selectImage(View view) {
		if (ContextCompat.checkSelfPermission(this,
				Manifest.permission.READ_EXTERNAL_STORAGE) != PackageManager.PERMISSION_GRANTED) {
			if (ActivityCompat.shouldShowRequestPermissionRationale(this, Manifest.permission.READ_EXTERNAL_STORAGE)) {
				Snackbar.make(view, "permission needed to access gallery", Snackbar.LENGTH_INDEFINITE)
						.setAction("allow permission", new View.OnClickListener() {
							@Override
							public void onClick(View v) {
								permissionLauncher.launch(Manifest.permission.READ_EXTERNAL_STORAGE);
							}
						}).show();
			} else {
				permissionLauncher.launch(Manifest.permission.READ_EXTERNAL_STORAGE);
			}
		} else {
			Intent intentToGallery = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
			activityResultLauncher.launch(intentToGallery);
		}

	}
}
