package com.example.sqlite_java;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;

import android.content.DialogInterface;
import android.content.Intent;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteStatement;
import android.os.Bundle;

import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.widget.Toast;

import com.example.sqlite_java.databinding.ActivityMainBinding;

import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

    private ActivityMainBinding binding;
    ArrayList<Person> personList;
    PersonAdapter personAdapter;
    SQLiteDatabase database;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        View view = binding.getRoot();
        setContentView(view);

        personList = new ArrayList<Person>();

        personAdapter = new PersonAdapter(personList);
        binding.recyclerView.setAdapter(personAdapter);
        binding.recyclerView.setLayoutManager(new LinearLayoutManager(this));

        getData();

    }

    public void getData() {
        try {

            SQLiteDatabase database = this.openOrCreateDatabase("persons", MODE_PRIVATE, null);

            Cursor cursor = database.rawQuery("SELECT * FROM persons", null);
            int name_indeks = cursor.getColumnIndex("name");
            int nickname_indeks = cursor.getColumnIndex("nickname");
            int age_indeks = cursor.getColumnIndex("age");

            while (cursor.moveToNext()) {
                String nameRetrieved = cursor.getString(name_indeks);
                String nicknameRetrieved = cursor.getString(nickname_indeks);
                String ageRetrieved = cursor.getString(age_indeks);

                Person p = new Person(nameRetrieved, nicknameRetrieved, ageRetrieved);
                personList.add(p);
            }

            personAdapter.notifyDataSetChanged();
            cursor.close();


        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void deletedb() {
        try {

            AlertDialog.Builder builder = new AlertDialog.Builder(this);
            builder.setTitle("WARNING");
            builder.setMessage("Are you sure?");

            // +
            builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    database = getApplication().openOrCreateDatabase("persons", MODE_PRIVATE, null);
                    database.execSQL("DELETE FROM persons");
                    personList.clear();
                    personAdapter.notifyDataSetChanged();
                    Toast.makeText(getApplicationContext(), "All data deleted", Toast.LENGTH_SHORT).show();
                }
            });

            // -
            builder.setNegativeButton("No", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    Toast.makeText(getApplicationContext(), "You said no", Toast.LENGTH_SHORT).show();
                }
            });

            AlertDialog dialog = builder.create();
            dialog.show();

        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        MenuInflater menuInflater = getMenuInflater();
        menuInflater.inflate(R.menu.options_menu, menu);
        return super.onCreateOptionsMenu(menu);
    }

    @Override
    public boolean onOptionsItemSelected(@NonNull MenuItem item) {
        if (item.getItemId() == R.id.addPersonItem) {
            Intent intent = new Intent(MainActivity.this, UploadActivity.class);
            intent.putExtra("info", "new_log");
            startActivity(intent);
        } else if (item.getItemId() == R.id.deleteDbItem) {
            deletedb();
        }
        return super.onOptionsItemSelected(item);
    }
}