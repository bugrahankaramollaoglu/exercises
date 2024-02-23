package com.bugrahankaramollaoglu.bottombar_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.fragment.app.Fragment
import com.google.android.material.bottomnavigation.BottomNavigationView

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val homeFrag = HomeFragment()
        val bookmarkFrag = BookmarksFragment()
        val setFrag = SettingsFragment()

        val bottomNavigation = findViewById<BottomNavigationView>(R.id.bottomNavigation)

        bottomNavigation.setOnItemSelectedListener {

            when (it.itemId) {
                R.id.homeItem -> {
                    launcherFragment(HomeFragment())
                }

                R.id.bookmarksItem -> {
                    launcherFragment(BookmarksFragment())
                }

                R.id.settingsItem -> {
                    launcherFragment(SettingsFragment())
                }

            }

            true
        }

    }

    private fun launcherFragment(fragmentSwitch: Fragment) {
        supportFragmentManager.beginTransaction().apply {
            replace(R.id.fragmentContainer, fragmentSwitch).commit()
        }
    }
}