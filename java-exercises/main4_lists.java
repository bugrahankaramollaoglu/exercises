// listeler

import java.util.ArrayList;

public class main4_lists {
	public static void main(String[] args) {
		// listeler arrayler gibidir ama daha esnektir
		// int[] intAr = new int[3]; // yerine
		// boyut vermesek de olur
		ArrayList<String> myList = new ArrayList<String>();
		myList.add(0, "bugra");
		myList.add("kara");
		System.out.println(myList.get(0));
		System.out.println(myList.size());
	}
}
