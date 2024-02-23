package com.bugrahankaramollaoglu.retrofit_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.renderscript.ScriptGroup.Binding
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.bugrahankaramollaoglu.retrofit_kotlin.databinding.ActivityMainBinding
import com.google.gson.Gson
import java.io.BufferedReader
import java.io.InputStreamReader

class MainActivity : AppCompatActivity() {

    private lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val inputStream = resources.openRawResource(R.raw.crypto)
        val jsonString = BufferedReader(InputStreamReader(inputStream)).use { it.readText() }
        val cryptoCoins = Gson().fromJson(jsonString, Array<Crypto>::class.java).toList()

        val recyclerView: RecyclerView = findViewById(R.id.recyclerView)
        recyclerView.layoutManager = LinearLayoutManager(this)
        recyclerView.adapter = CryptoAdapter(cryptoCoins)
    }
}