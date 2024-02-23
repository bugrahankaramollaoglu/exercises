package com.bugrahankaramollaoglu.intent_kotlin


import android.content.Intent
import android.os.Bundle
import android.widget.Button
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity

class MainActivity2 : AppCompatActivity() {

    private lateinit var intent: Intent
    private lateinit var changeBack: Button
    private lateinit var nameView: TextView
    private lateinit var ageView: TextView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main2)

        changeBack = findViewById<Button>(R.id.changeBackButton)
        nameView = findViewById<TextView>(R.id.nameTextView)
        ageView = findViewById<TextView>(R.id.ageTextView)

        intent = getIntent()

        val name: String? = intent.getStringExtra("namekey")
        val age: String? = intent.getStringExtra("agekey")

        nameView.text = "your name: ${name}"
        ageView.text = "your name: ${age}"



        changeBack.setOnClickListener {
            val intent = Intent(this@MainActivity2, MainActivity::class.java)
            startActivity(intent)
        }
    }


}

