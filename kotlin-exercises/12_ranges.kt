// ways to create ranges in kotlin
// 1..4 means 1 2 3 4.
// 1 until 4 means 1 2 3.
// 4 downTo 1 means 4 3 2 1
// 1..7 step 2 means 1 3 5 7
// 'a' .. 'e'' means 'a','b','c','d','e' ...

fun main() {
    val myRange = 1..5
    val myRange2 = 1 until 5
    val myRange3 = 1 downTo 5
    val myRange4 = 1..5 step 2
    // println(myRange) // yanlış kullanım örneği. 1..5 yazdırır
    for (numb in myRange) {
        println(numb)
    }
}
