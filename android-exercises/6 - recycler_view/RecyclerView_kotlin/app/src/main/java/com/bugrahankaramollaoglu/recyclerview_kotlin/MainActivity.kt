package com.bugrahankaramollaoglu.recyclerview_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.recyclerview.widget.LinearLayoutManager
import com.bugrahankaramollaoglu.recyclerview_kotlin.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        val view = binding.root
        setContentView(view)

        val colorList = ArrayList<String>()
        colorList.add("purple")
        colorList.add("blue")
        colorList.add("yellow")
        colorList.add("green")
        colorList.add("red")

        val colorAdapter = ColorAdapter(colorList)
        binding.recycleView.layoutManager = LinearLayoutManager(this)
        binding.recycleView.adapter = colorAdapter
    }
}