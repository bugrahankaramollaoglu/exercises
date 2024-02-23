package com.bugrahankaramollaoglu.jetpackcompose

import android.os.Bundle
import android.text.style.BackgroundColorSpan
import android.widget.ImageView
import android.widget.Toast
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.Shape
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.bugrahankaramollaoglu.jetpackcompose.ui.theme.JetpackComposeTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            Column(modifier= Modifier.fillMaxSize()
                .background(Color.DarkGray),
                verticalArrangement = Arrangement.Center,
                horizontalAlignment = Alignment.CenterHorizontally) {
                MainScreen()
                MainScreen()
                MainScreen()
            }
        }
    }
}

@Composable
fun MainScreen() {

    Row {
        Text(
            modifier = Modifier
                .background(Color.Black)
                .padding(top = 15.dp, bottom = 15.dp, start = 15.dp, end = 15.dp)
                .border(width = 2.dp, color = Color.Red)
                .clickable {
                    // do that
                }
//                .width(300.dp)
//                .height(250.dp)

//                .fillMaxSize(),

,            text = "hello asd!",
            color = Color.Blue,
            fontSize = 25.sp,
            fontWeight = FontWeight.Bold,
            textAlign = TextAlign.Center,

        )

//        Text(
//            text = "hello android!",
//            color = Color.Blue,
//            fontSize = 25.sp,
//            fontWeight = FontWeight.Bold
//        )
    }
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    JetpackComposeTheme {
        MainScreen()
    }
}
