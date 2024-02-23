package com.bugrahankaramollaoglu.intent_kotlin

import android.content.Intent
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {

    private lateinit var button: Button
    private lateinit var nameText: EditText
    private lateinit var ageText: EditText
    private lateinit var name: String
    private lateinit var age: String

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        button = findViewById<Button>(R.id.button)
        nameText = findViewById<EditText>(R.id.nameTextView)
        ageText = findViewById<EditText>(R.id.ageTextView)

        button.setOnClickListener {
            if (nameText.text.toString().isEmpty() || ageText.text.toString().isEmpty()) {
                Toast.makeText(this@MainActivity, "they cannot be empty", Toast.LENGTH_SHORT).show()
            } else {
                name = nameText.text.toString()
                age = ageText.text.toString()

                val intent: Intent = Intent(this@MainActivity, MainActivity2::class.java)
                intent.putExtra("namekey", name)
                intent.putExtra("agekey", age)
                startActivity(intent)
            }
        }
    }
}
