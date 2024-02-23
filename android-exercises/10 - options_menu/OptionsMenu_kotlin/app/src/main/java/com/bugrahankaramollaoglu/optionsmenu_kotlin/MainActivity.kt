package com.bugrahankaramollaoglu.optionsmenu_kotlin

import android.content.Intent
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)


    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        val menuInflater = menuInflater

        menuInflater.inflate(R.menu.options_menu, menu)

        return super.onCreateOptionsMenu(menu)
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {

        if (item.itemId == R.id.options_item2) {
            val intent: Intent = Intent(this@MainActivity, MainActivity2::class.java)
            startActivity(intent)
        } else if (item.itemId == R.id.options_item3) {
            val intent: Intent = Intent(this@MainActivity, MainActivity3::class.java)
            startActivity(intent)
        } else if (item.itemId == R.id.other1) {

        } else if (item.itemId == R.id.other2) {
            Toast.makeText(this@MainActivity, "aaa", Toast.LENGTH_SHORT).show()
        }

        return super.onOptionsItemSelected(item)
    }
}