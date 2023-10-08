// named arguments

fun introduce(name: String, age: Int) {
	println("${name} is ${age} years old.")
}

fun main() {
	introduce(age=22, name="bugra") // tersten verdik
}
