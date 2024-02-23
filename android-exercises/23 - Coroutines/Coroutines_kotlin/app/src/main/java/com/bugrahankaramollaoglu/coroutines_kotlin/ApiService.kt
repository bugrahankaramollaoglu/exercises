package com.bugrahankaramollaoglu.coroutines_kotlin

import kotlinx.coroutines.delay

// create a fake api service to use coroutines when fetching
class ApiService {

    suspend fun getUsers(): List<User> {
        // Simulate network delay
        delay(2000)

        // Simulate data fetching from a server
        return listOf(
            User(1, "ahmet 10"),
            User(2, "mehmet 20"),
            User(3, "ayse 30"),
            User(4, "bora 40")
        )
    }
}
