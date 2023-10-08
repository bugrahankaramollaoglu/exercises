/* kotlinde main fonksiyonu void main() {} şeklinde çağrılır.
kotlin functions are a bit different from C functions.

fun funcName(param1: param1_type, param2: param2_type): returnType {
	// code blog
}

*/

fun myFunc(x: Int, y: String): String {
    return "${y} is ${x} years old."
}

fun main() {
    println(myFunc(22, "bugra"))
}
