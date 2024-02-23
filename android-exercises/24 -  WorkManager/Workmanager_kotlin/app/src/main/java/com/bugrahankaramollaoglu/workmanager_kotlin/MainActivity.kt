package com.bugrahankaramollaoglu.workmanager_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.text.format.Time
import androidx.lifecycle.Observer
import androidx.work.Constraints
import androidx.work.Data
import androidx.work.NetworkType
import androidx.work.OneTimeWorkRequest
import androidx.work.OneTimeWorkRequestBuilder
import androidx.work.PeriodicWorkRequest
import androidx.work.PeriodicWorkRequestBuilder
import androidx.work.WorkInfo
import androidx.work.WorkManager
import androidx.work.WorkRequest
import java.util.concurrent.TimeUnit

// dokümantasyondan build.gradle dependencyleri ekle

// workManager ile telefon kapansa ya da restart atılsa da
// arka planda işlemler yapabiliyoruz. constraintler veriyoruz vs.

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Data'yı alırken androidx.work'ten almalısın
        val data = Data.Builder().putInt("key2", 1).build()

        // telefonun çalışması için constraintler belirliyoruz
        val constraints = Constraints.Builder()
            .setRequiredNetworkType(NetworkType.CONNECTED)
            .setRequiresCharging(true)
            .setRequiresCharging(false)
            .build()

        // her çalıştırılışında yapsın
//        val myWorkRequest: WorkRequest = OneTimeWorkRequestBuilder<RefreshDatabase>()
//            .setConstraints(constraints)
//            .setInputData(data)
////            .setInitialDelay(5, TimeUnit.MINUTES) // app works retardedly
//            .build()
//
//        WorkManager.getInstance(this).enqueue(myWorkRequest)

        // kaç zamanda bir yapsın
        val myWorkRequest: PeriodicWorkRequest = PeriodicWorkRequestBuilder<RefreshDatabase>(
            15, TimeUnit.MINUTES
        )
            .setConstraints(constraints)
            .setInputData(data)
            .setInitialDelay(3, TimeUnit.SECONDS) // 3sn sonra başlasın
            .build()

        WorkManager.getInstance(this).enqueue(myWorkRequest)
        WorkManager.getInstance(this).getWorkInfoByIdLiveData(myWorkRequest.id)
            .observe(this, Observer {
                if (it.state == WorkInfo.State.RUNNING) {
                    println("running")
                } else if (it.state == WorkInfo.State.FAILED)
                    println("failed")
            })

//         işlemleri iptal etmek için
//        WorkManager.getInstance(this).cancelAllWork()

        // chaining (only oneTimeRequests are chainable unlike periodics)
        val oneTimeRequest: OneTimeWorkRequest = OneTimeWorkRequestBuilder<RefreshDatabase>()
            .setConstraints(constraints)
            .setInputData(data)
            .build()

        WorkManager.getInstance(this).beginWith(oneTimeRequest)
            .then(oneTimeRequest)
            .then(oneTimeRequest)
            .then(oneTimeRequest)
            .enqueue()

    }
}
