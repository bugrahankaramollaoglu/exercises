package com.bugrahankaramollaoglu.intent_java;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    private EditText nameText;
    private EditText ageText;
    private Button changeButton;
    private String name;
    private String age;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        changeButton = (Button) findViewById(R.id.button);
        nameText = findViewById(R.id.nameText);
        ageText = findViewById(R.id.ageText);

        changeButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (nameText.getText().toString().isEmpty() || ageText.getText().toString().isEmpty()) {
                    Toast.makeText(MainActivity.this, "enter both", Toast.LENGTH_SHORT).show();
                } else {
                    name = nameText.getText().toString();
                    age = ageText.getText().toString();
                    Intent intent = new Intent(MainActivity.this, MainActivity2.class);
                    intent.putExtra("namekey", name);
                    intent.putExtra("agekey", age);
                    startActivity(intent);
                    finish(); // dersen önceki aktiviteleri kapatır, geri tuşuyla gidemezsin
                }
            }
        });
    }


/*  or you can set onClick as change and use this instead of setOnClickListener

    public void change(View view) {
        Intent intent = new Intent(this, MainActivity2.class);
        startActivity(intent);
    }   */
}