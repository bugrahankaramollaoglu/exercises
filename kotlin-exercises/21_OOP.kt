// you can also give default values for your class parameters
class Person(val age: Int, var name: String = "") {
    val phoneNumber: String = "0513 353 32 53"
}

/* We recommend that you declare properties as read-only (val)
unless they need to be changed after an instance of the class is created.
You can declare properties without val or var within parentheses
bhut these properties are not accessible after an instance has been created. */

fun main() {
    val p1 = Person(22, "bugra")
    println(p1.age)
	p1.name = "gobineau"
    println(p1.name)
}
