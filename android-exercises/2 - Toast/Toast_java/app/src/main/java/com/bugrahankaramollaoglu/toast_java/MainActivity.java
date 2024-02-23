package com.bugrahankaramollaoglu.toast_java;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button button1 = (Button) findViewById(R.id.button1);
        Button button2 = (Button) findViewById(R.id.button2);
        Button button3 = (Button) findViewById(R.id.button3);
    }

    public void button1(View view) {
        Toast.makeText(this, "button1 clicked", Toast.LENGTH_SHORT).show();
    }

    public void button2(View view) {
        Toast.makeText(this, "button2 clicked", Toast.LENGTH_SHORT).show();
    }

    public void button3(View view) {
        Toast.makeText(this, "button3 clicked", Toast.LENGTH_SHORT).show();
    }
}
