import java.util.Scanner;

/**
 * question_10
 */
public class question_10 {

		public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		double gratuity_rate = .15;
		double sub_total = 0.0;

		System.out.print("enter subtotal: ");
		sub_total = scanner.nextDouble();

		System.out.println("your gratuity total is: " + sub_total*gratuity_rate);
	}
	
}
