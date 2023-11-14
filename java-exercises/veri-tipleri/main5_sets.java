// sets

import java.util.HashSet;

public class main5_sets {
	public static void main(String[] args) {
		HashSet<String> mySet = new HashSet<>();
		mySet.add("bugra");
		mySet.add("bugra");
		mySet.add("molla");
		System.out.println(mySet.size()); // sets are all unique
	}
}
