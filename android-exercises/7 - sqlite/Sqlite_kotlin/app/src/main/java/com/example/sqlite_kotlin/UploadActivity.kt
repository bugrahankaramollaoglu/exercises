package com.example.sqlite_kotlin

import android.content.Intent
import android.database.sqlite.SQLiteDatabase
import android.os.Bundle
import android.view.View
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.example.sqlite_kotlin.databinding.ActivityUploadBinding

class UploadActivity : AppCompatActivity() {

    private lateinit var binding: ActivityUploadBinding
    var database: SQLiteDatabase? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityUploadBinding.inflate(layoutInflater)
        val view: View = binding.root
        setContentView(view)

        database = this.openOrCreateDatabase("persons", MODE_PRIVATE, null)

        val intent = getIntent()
        val information: String? = intent.getStringExtra("info")
        val personName: String? = intent.getStringExtra("name")

        if (information.equals("new_log")) {
            binding.nameText.setText("")
            binding.nicknameText.setText("")
            binding.ageText.setText("")
            binding.saveButton.visibility = View.VISIBLE
			
        } else if (information.equals("old_log")) {

            binding.saveButton.visibility = View.INVISIBLE

            try {
                val cursor = database!!.rawQuery(
                    "SELECT * FROM persons WHERE name=?",
                    arrayOf(personName)
                )
                val name_indeks = cursor.getColumnIndex("name")
                val nickname_indeks = cursor.getColumnIndex("nickname")
                val age_indeks = cursor.getColumnIndex("age")
                while (cursor.moveToNext()) {
                    val name = cursor.getString(name_indeks)
                    val nickname = cursor.getString(nickname_indeks)
                    val age = cursor.getString(age_indeks)
                    binding.nameText.setText(cursor.getString(name_indeks))
                    binding.nicknameText.setText(cursor.getString(nickname_indeks))
                    binding.ageText.setText(cursor.getString(age_indeks))
                }
                cursor.close()
            } catch (e: Exception) {
                e.printStackTrace()
            }

        }

    }

    fun save(view: View) {

        val name = binding.nameText.text.toString()
        val nickname = binding.nicknameText.text.toString()
        val age = binding.ageText.text.toString()

        if (name.isEmpty() || nickname.isEmpty() || age.isEmpty()) {
            Toast.makeText(applicationContext, "CANNOT BE EMPTY", Toast.LENGTH_SHORT).show()
        } else {
            try {
                database = this.openOrCreateDatabase("persons", MODE_PRIVATE, null)
                database!!.execSQL("CREATE TABLE IF NOT EXISTS persons (id INTEGER PRIMARY KEY, name VARCHAR, nickname VARCHAR, age VARCHAR)")
                val sqlstring = "INSERT INTO persons (name, nickname, age) VALUES (?, ?, ?)"
                val sqLiteStatement = database!!.compileStatement(sqlstring)
                sqLiteStatement.bindString(1, name)
                sqLiteStatement.bindString(2, nickname)
                sqLiteStatement.bindString(3, age)
                sqLiteStatement.execute()
            } catch (e: java.lang.Exception) {
                e.printStackTrace()
            }
            val intent = Intent(this@UploadActivity, MainActivity::class.java)
            intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP)
            startActivity(intent)
        }

    }
}

