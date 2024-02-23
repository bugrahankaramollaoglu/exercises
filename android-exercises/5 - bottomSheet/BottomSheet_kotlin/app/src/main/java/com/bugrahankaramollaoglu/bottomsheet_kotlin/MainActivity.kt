package com.bugrahankaramollaoglu.bottomsheet_kotlin

import android.app.Dialog
import android.graphics.Color
import android.graphics.drawable.ColorDrawable
import android.os.Bundle
import android.view.Gravity
import android.view.ViewGroup
import android.view.Window
import android.widget.Button
import android.widget.LinearLayout
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {

    private lateinit var bottomSheet: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        bottomSheet = findViewById(R.id.button)
        bottomSheet.setOnClickListener {
            showDialog()
        }
    }

    private fun showDialog() {
        var dialog: Dialog = Dialog(this)
        dialog.requestWindowFeature(Window.FEATURE_NO_TITLE)
        dialog.setContentView(R.layout.bottom_sheet_layout)
        var homelayout: LinearLayout = dialog.findViewById(R.id.layout_home)
        var bookmarklayout: LinearLayout = dialog.findViewById(R.id.layoutBookmark)
        var settingslayout: LinearLayout = dialog.findViewById(R.id.layoutSettings)

        homelayout.setOnClickListener {
            Toast.makeText(this@MainActivity, "clicked on home", Toast.LENGTH_SHORT).show()
        }

        bookmarklayout.setOnClickListener {
            Toast.makeText(this@MainActivity, "clicked on bookmark", Toast.LENGTH_SHORT).show()
        }

        settingslayout.setOnClickListener {
            Toast.makeText(this@MainActivity, "clicked on settings", Toast.LENGTH_SHORT).show()
        }

        dialog.show()
        dialog.window?.setLayout(
            ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT
        )
        dialog.window?.setBackgroundDrawable(ColorDrawable(Color.TRANSPARENT))
        dialog.window?.attributes?.windowAnimations = R.style.DialogAnimation
        dialog.window?.setGravity(Gravity.BOTTOM)
    }
}