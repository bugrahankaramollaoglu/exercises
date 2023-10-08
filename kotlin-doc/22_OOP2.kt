class Deneme(val id: Int, val name: String) {
    fun printName() {
        println(name)
    }
}

fun main() {
    var deneme = Deneme(1, "bugra")
    deneme.printName()
}
