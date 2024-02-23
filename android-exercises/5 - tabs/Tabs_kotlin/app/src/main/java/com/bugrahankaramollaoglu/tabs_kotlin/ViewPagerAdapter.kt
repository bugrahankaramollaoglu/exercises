package com.bugrahankaramollaoglu.tabs_kotlin

import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentManager
import androidx.fragment.app.FragmentStatePagerAdapter

class ViewPagerAdapter(supportFragmentManager: FragmentManager) :
    FragmentStatePagerAdapter(supportFragmentManager) {

    private val myFragmentList = ArrayList<Fragment>()
    private val myFragmentTitles = ArrayList<String>()


    override fun getCount(): Int {
        return myFragmentList.size
    }

    override fun getItem(position: Int): Fragment {
        return myFragmentList[position]
    }

    override fun getPageTitle(position: Int): CharSequence {
        // return title of the tab
        return myFragmentTitles[position]
    }

    fun addFragment(fragment: Fragment, title: String) {
        // add each fragment and its title to the array list
        myFragmentList.add(fragment)
        myFragmentTitles.add(title)
    }
}