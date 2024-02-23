package com.bugrahankaramollaoglu.fragmentbottombar_kotlin

import android.opengl.Visibility
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Toast
import androidx.fragment.app.Fragment
import com.bugrahankaramollaoglu.fragmentbottombar_kotlin.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        launchFragment(HomeFragment())

        binding.bottomNav.setOnItemSelectedListener {
            when (it.itemId) {
                R.id.homeItem -> {

                    launchFragment(HomeFragment())
                    true
                }

                R.id.blockItem -> {

                    launchFragment(BlockFragment())
                    true
                }

                R.id.settingsItem -> {
                    launchFragment(SettingsFragment())
                    true
                }

                else -> {

                    true
                }

            }
        }


    }

    private fun launchFragment(newFragment: Fragment) {
        val fragmentTransaction = supportFragmentManager.beginTransaction()
        fragmentTransaction.replace(R.id.container, newFragment)
        fragmentTransaction.commit()
    }
}