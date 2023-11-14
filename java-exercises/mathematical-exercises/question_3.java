/**
 * question_3
 */
public class question_3 {

	public static void main(String[] args) {
		int i = 1;
		System.out.println("a\ta^2\ta^3");
		for (int j = 0; j < 4; j++) {
			System.out.println(i + "\t" + (int) Math.pow(i, 2) + '\t' + (int) Math.pow(i, 3));
			i++;
		}
	}
}
