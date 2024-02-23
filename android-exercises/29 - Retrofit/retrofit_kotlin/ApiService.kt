package com.bugrahankaramollaoglu.retrofit_kotlin

import retrofit2.Call
import retrofit2.http.GET

data class ApiResponse(val sentences: List<Sentence>)

interface ApiService {
    @GET("sentence.json")
    fun getSentences(): Call<ApiResponse>
}