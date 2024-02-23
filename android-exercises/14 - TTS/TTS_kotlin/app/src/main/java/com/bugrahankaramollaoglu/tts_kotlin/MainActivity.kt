package com.bugrahankaramollaoglu.tts_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.speech.tts.TextToSpeech
import android.widget.Button
import android.widget.TextView
import java.util.Locale

class MainActivity : AppCompatActivity(), TextToSpeech.OnInitListener {

    private lateinit var textToSpeech: TextToSpeech

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // Initialize TextToSpeech
        textToSpeech = TextToSpeech(this, this)

        val yourTextView = findViewById<TextView>(R.id.m_text)
        val readButton = findViewById<Button>(R.id.m_button)

        readButton.setOnClickListener {
            val textToRead = yourTextView.text.toString()
            speakText(textToRead)
        }
    }

    private fun speakText(text: String) {
        // Use TextToSpeech to read the text aloud
        textToSpeech.speak(text, TextToSpeech.QUEUE_FLUSH, null, null)
    }

    override fun onInit(status: Int) {
        if (status == TextToSpeech.SUCCESS) {
            // Set language for TextToSpeech
            val result = textToSpeech.setLanguage(Locale.getDefault())

            if (result == TextToSpeech.LANG_MISSING_DATA || result == TextToSpeech.LANG_NOT_SUPPORTED) {
                // Handle the case where the language is not supported.
                // You may want to inform the user or use a different language.
            }
        } else {
            // Initialization failed. Handle the error.
        }
    }

    override fun onDestroy() {
        // Shutdown TextToSpeech when the activity is destroyed
        if (::textToSpeech.isInitialized) {
            textToSpeech.stop()
            textToSpeech.shutdown()
        }
        super.onDestroy()
    }
}