package com.bugrahankaramollaoglu.listview_java;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Toast;

import com.bugrahankaramollaoglu.listview_java.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        View view = binding.getRoot();
        setContentView(view);

        // 1. create list for items
        String[] colors = {"pink","red","green","blue"};

        // 2. adapter
        ArrayAdapter<String> adapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, colors);

        // 3. link adapter with widget
        binding.listView.setAdapter(adapter);

        // 4. create onClick for items
        binding.listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                String selectedItem = adapter.getItem(position);
                Toast.makeText(MainActivity.this, "you selected: " + selectedItem, Toast.LENGTH_SHORT).show();
            }
        });

        // 5. that's it
    }
}