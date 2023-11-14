import java.util.Scanner;

/**
 * question_9
 */
public class question_9 {

		public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("convert from inch to cm");
		System.out.print("enter cm: ");
		double cm = scanner.nextDouble();
		double inch = cm / 2.54;
		System.out.printf("its inch equation is: %.2f", inch);
		System.out.println();

	}
}
