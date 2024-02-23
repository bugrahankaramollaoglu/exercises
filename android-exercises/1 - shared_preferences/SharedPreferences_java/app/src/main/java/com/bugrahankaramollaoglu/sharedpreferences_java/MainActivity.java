package com.bugrahankaramollaoglu.sharedpreferences_java;

import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    TextView textView;
    EditText editText;
    Button saveButton;
    Button deleteButton;
    SharedPreferences sharedPreferences;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        textView = findViewById(R.id.textView);
        editText = findViewById(R.id.editText);
        saveButton = findViewById(R.id.saveButton);
        deleteButton = findViewById(R.id.deleteButton);
        
        sharedPreferences = getPreferences(MODE_PRIVATE);
        String nameStored = sharedPreferences.getString("namekey","");
        textView.setText("Your name: " + nameStored);
        
    }

    public void saveData(View view) {

        if (editText.getText().toString().isEmpty()) {
            Toast.makeText(MainActivity.this, "Cannot be empty", Toast.LENGTH_SHORT).show();
        } else {
            String name = editText.getText().toString();
            textView.setText("Your name: " + name);
            
            // save the name to sharedPref
            SharedPreferences.Editor editor = sharedPreferences.edit();
            editor.putString("namekey", name);
            editor.apply();          
            
        }
    }

    public void deleteData(View view) {
        SharedPreferences.Editor editor = sharedPreferences.edit();
        editor.remove("namekey");
        editor.apply();
        textView.setText("Your name: ");
    }
}
