package com.bugrahankaramollaoglu.recyclerview_java;

import android.os.Bundle;
import android.view.View;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;

import com.bugrahankaramollaoglu.recyclerview_java.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        View view = binding.getRoot();
        setContentView(view);

        String[] colors = {"purple", "pink", "green", "red","yellow","cyan","crimson","black"};

        ColorAdapter colorAdapter = new ColorAdapter(colors);
        binding.recyclerView.setAdapter(colorAdapter);
        binding.recyclerView.setLayoutManager(new LinearLayoutManager((this)));

    }
}