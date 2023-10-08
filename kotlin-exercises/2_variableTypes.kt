// two types of variables:
// read-only variables with -> val
// modifiable variables with -> var

fun main() {
    var name = "bugra"
    val age = 22

	name = "ahmet" // vars can be changed, while vals cannot
	println(name)
	println(age)
}

// try to favor vals as much as possible
