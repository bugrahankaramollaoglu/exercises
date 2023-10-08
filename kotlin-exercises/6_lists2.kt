// you can also convert a mutable into const by casting with List

fun main() {
	val names: MutableList<String> = mutableListOf("ahmet","mehmet")
	val namesLocked: List<String> = names
}
