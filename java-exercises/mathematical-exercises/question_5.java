import java.util.Scanner;

/**
 * question_5
 */
public class question_5 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("enter an integer up to which a sum will be printed: ");
		int userInput = scanner.nextInt();
		int sum = 0;

		for (int i = 0; i <= userInput; i++) {
			sum += i;
		}

		System.out.println("sum: " + sum);
		scanner.close();
	}
}
