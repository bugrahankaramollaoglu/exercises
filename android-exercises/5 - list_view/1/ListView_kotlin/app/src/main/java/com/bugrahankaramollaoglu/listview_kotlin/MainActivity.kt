package com.bugrahankaramollaoglu.listview_kotlin

import android.os.Bundle
import android.widget.ArrayAdapter
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.bugrahankaramollaoglu.listview_kotlin.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    private lateinit var myAdapter: ArrayAdapter<String>
    private var colors = listOf<String>()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        val view = binding.root
        setContentView(view)

        colors = listOf("red", "green", "blue", "purple", "pink")

        myAdapter = ArrayAdapter(this, android.R.layout.simple_list_item_1, colors)

        binding.listView.adapter = myAdapter

        binding.listView.setOnItemClickListener { parent, view, position, id ->
            val selectedItem = myAdapter.getItem(position)
            Toast.makeText(this, "you chose $selectedItem", Toast.LENGTH_SHORT).show()
        }
    }
}