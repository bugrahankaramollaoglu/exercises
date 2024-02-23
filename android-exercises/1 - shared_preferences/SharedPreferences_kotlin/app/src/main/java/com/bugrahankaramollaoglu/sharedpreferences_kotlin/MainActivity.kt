package com.bugrahankaramollaoglu.sharedpreferences_kotlin

import android.content.Context
import android.content.SharedPreferences
import android.os.Bundle
import android.view.View
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.bugrahankaramollaoglu.sharedpreferences_kotlin.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    private lateinit var sharedPreferences: SharedPreferences

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        val view = binding.root
        setContentView(view)

        sharedPreferences = this.getSharedPreferences(
            "com.bugrahankaramollaoglu.sharedpreferences_kotlin",
            Context.MODE_PRIVATE
        )

        val nameStored: String = this.sharedPreferences.getString("namekey", "").toString()
        if (nameStored != "") {
            binding.textView.text = "Your name: ${nameStored}"
        } else {
            binding.textView.text = "Your name: "
        }
    }

    fun saveData(view: View) {
        if (binding.editText.text.isEmpty()) {
            Toast.makeText(this@MainActivity, "Cannot be empty", Toast.LENGTH_SHORT).show()
        } else {
            val name: String = binding.editText.text.toString()
            binding.textView.text = name

            // save to sharedPref
            this.sharedPreferences.edit().putString("namekey", name).apply()
            
        }
    }

    fun deleteData(view: View) {
        sharedPreferences.edit().remove("namekey").apply()
        textView.setText("your age: ")
    }
}
