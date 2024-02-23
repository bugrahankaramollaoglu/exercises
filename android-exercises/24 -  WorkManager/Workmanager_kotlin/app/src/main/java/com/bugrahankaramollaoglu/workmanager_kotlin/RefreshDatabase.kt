package com.bugrahankaramollaoglu.workmanager_kotlin

import android.content.Context
import android.content.SharedPreferences
import androidx.work.Worker
import androidx.work.WorkerParameters

class RefreshDatabase(val context: Context, workerParams: WorkerParameters) : Worker(
    context, workerParams
) {
    override fun doWork(): Result {
        val getData = inputData
        val data_got = getData.getInt("key2", 0)
        refreshDatabase(data_got)
        return Result.success()
    }

    private fun refreshDatabase(incrementNb: Int) {
        val sharedPreferences = context.getSharedPreferences(
            "com.bugrahankaramollaoglu.workmanager_kotlin", Context.MODE_PRIVATE
        )

        var myNumber = sharedPreferences.getInt("my-key", 0)
        myNumber += incrementNb
        println("my num: " + myNumber)
        sharedPreferences.edit().putInt("my-key", myNumber).apply()
    }
}