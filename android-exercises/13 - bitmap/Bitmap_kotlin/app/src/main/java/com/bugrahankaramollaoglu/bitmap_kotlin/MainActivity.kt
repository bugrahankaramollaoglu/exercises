package com.bugrahankaramollaoglu.bitmap_kotlin

import android.graphics.drawable.BitmapDrawable
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.bugrahankaramollaoglu.bitmap_kotlin.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.button.setOnClickListener {
            val drawable = binding.image1.drawable as BitmapDrawable
            val bitmap = drawable.bitmap
            binding.image2.setImageBitmap(bitmap)
        }
    }
}