package com.example.sqlite_java;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteStatement;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Toast;

import com.example.sqlite_java.databinding.ActivityUploadBinding;

public class UploadActivity extends AppCompatActivity {

    private ActivityUploadBinding binding;
    SQLiteDatabase database;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityUploadBinding.inflate(getLayoutInflater());
        View view = binding.getRoot();
        setContentView(view);

        database = this.openOrCreateDatabase("persons", MODE_PRIVATE, null);

        Intent intent = getIntent();
        String information = intent.getStringExtra("info");
        String personName = intent.getStringExtra("name");
        
        if (information.matches("new_log")) {
            binding.nameText.setText("");
            binding.nicknameText.setText("");
            binding.ageText.setText("");
            binding.saveButton.setVisibility(View.VISIBLE);


        } else if (information.matches("old_log")) {

            binding.saveButton.setVisibility(View.INVISIBLE);

            try {
                Cursor cursor = database.rawQuery("SELECT * FROM persons WHERE name=?", new String[]{personName});

                int name_indeks = cursor.getColumnIndex("name");
                int nickname_indeks = cursor.getColumnIndex("nickname");
                int age_indeks = cursor.getColumnIndex("age");

                while (cursor.moveToNext()) {

                    String name = cursor.getString(name_indeks);
                    String nickname = cursor.getString(nickname_indeks);
                    String age = cursor.getString(age_indeks);

                    binding.nameText.setText(cursor.getString(name_indeks));
                    binding.nicknameText.setText(cursor.getString(nickname_indeks));
                    binding.ageText.setText(cursor.getString(age_indeks));
                }

                cursor.close();

            } catch (Exception e) {
                e.printStackTrace();
            }

        }


    }

    public void save(View view) {
        String name = binding.nameText.getText().toString();
        String nickname = binding.nicknameText.getText().toString();
        String age = binding.ageText.getText().toString();

        if (name.isEmpty() || nickname.isEmpty() || age.isEmpty()) {
            Toast.makeText(getApplicationContext(), "CANNOT BE EMPTY", Toast.LENGTH_SHORT).show();
        } else {

            try {

                database = this.openOrCreateDatabase("persons", MODE_PRIVATE, null);

                database.execSQL("CREATE TABLE IF NOT EXISTS persons (id INTEGER PRIMARY KEY, name VARCHAR, nickname VARCHAR, age VARCHAR)");
                String sqlstring = "INSERT INTO persons (name, nickname, age) VALUES (?, ?, ?)";
                SQLiteStatement sqLiteStatement = database.compileStatement(sqlstring);

                sqLiteStatement.bindString(1, name);
                sqLiteStatement.bindString(2, nickname);
                sqLiteStatement.bindString(3, age);
                sqLiteStatement.execute();


            } catch (Exception e) {
                e.printStackTrace();
            }

            Intent intent = new Intent(UploadActivity.this, MainActivity.class);
            intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
            startActivity(intent);

        }
    }
}