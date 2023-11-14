import java.util.Scanner;

/**
 * question_8
 */
public class question_8 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.print("enter a value: ");

		double celc = scanner.nextDouble();

		double fahr = (9.0 / 5.0) * celc + 32;
		System.out.println("fahrenheit equation is: " + fahr);

	}
}
