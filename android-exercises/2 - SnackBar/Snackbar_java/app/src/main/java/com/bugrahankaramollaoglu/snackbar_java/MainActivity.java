package com.bugrahankaramollaoglu.snackbar_java;

import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import android.content.Intent;
import android.os.Bundle;
import android.text.Layout;
import android.view.View;

import com.google.android.material.snackbar.Snackbar;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    
    public void snack(View view) {
        Snackbar snackbar = Snackbar.make(view, "deneme", Snackbar.LENGTH_INDEFINITE);
        snackbar.setAction("click",new Listener());
        snackbar.show();
    }

    public class Listener implements View.OnClickListener {

        @Override
        public void onClick(View v) {
           Intent intent = new Intent(MainActivity.this, MainActivity2.class);
           startActivity(intent);
        }
    }
}
