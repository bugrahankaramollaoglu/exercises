package com.example.sqlite_kotlin

import android.content.Intent
import android.database.sqlite.SQLiteDatabase
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.Toast
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import androidx.recyclerview.widget.LinearLayoutManager
import com.example.sqlite_kotlin.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    private lateinit var personList: ArrayList<Person>
    var database: SQLiteDatabase? = null
    var personAdapter: PersonAdapter? = null


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        val view: View = binding.root
        setContentView(view)

        personList = ArrayList<Person>()

        personAdapter = PersonAdapter(personList)
        binding.recyclerView.adapter = personAdapter
        binding.recyclerView.layoutManager = LinearLayoutManager(this)

        getData()

    }

    fun getData() {

        try {
            val database = this.openOrCreateDatabase("persons", MODE_PRIVATE, null)
            val cursor = database.rawQuery("SELECT * FROM persons", null)
            val name_indeks = cursor.getColumnIndex("name")
            val nickname_indeks = cursor.getColumnIndex("nickname")
            val age_indeks = cursor.getColumnIndex("age")
            while (cursor.moveToNext()) {
                val nameRetrieved = cursor.getString(name_indeks)
                val nicknameRetrieved = cursor.getString(nickname_indeks)
                val ageRetrieved = cursor.getString(age_indeks)
                val p = Person(nameRetrieved, nicknameRetrieved, ageRetrieved)
                personList.add(p)
            }
            personAdapter!!.notifyDataSetChanged()
            cursor.close()
        } catch (e: Exception) {
            e.printStackTrace()
        }

    }

    fun deletedb() {
        try {
            val builder = AlertDialog.Builder(this)
            builder.setTitle("WARNING")
            builder.setMessage("Are you sure?")

            // +
            builder.setPositiveButton(
                "Yes"
            ) { dialog, which ->
                database = application.openOrCreateDatabase(
                    "persons",
                    MODE_PRIVATE,
                    null
                )
                database!!.execSQL("DELETE FROM persons")
                personList.clear()
                personAdapter!!.notifyDataSetChanged()
                Toast.makeText(applicationContext, "All data deleted", Toast.LENGTH_SHORT).show()
            }

            // -
            builder.setNegativeButton(
                "No"
            ) { dialog, which ->
                Toast.makeText(applicationContext, "You said no", Toast.LENGTH_SHORT).show()
            }
            val dialog = builder.create()
            dialog.show()
        } catch (e: java.lang.Exception) {
            e.printStackTrace()
        }
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        val menuInflater = menuInflater
        menuInflater.inflate(R.menu.options_menu, menu)
        return super.onCreateOptionsMenu(menu)
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if (item.itemId == R.id.addPersonItem) {
            val intent: Intent = Intent(this@MainActivity, UploadActivity::class.java)
            intent.putExtra("info", "new_log")
            startActivity(intent)
        } else if (item.itemId == R.id.deleteDbItem) {
            deletedb()
        }
        return super.onOptionsItemSelected(item)
    }
}
