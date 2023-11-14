import java.util.Scanner;

/**
 * question_11
 */
public class question_11 {

		public static int digitSummer(int nb) {
		int sum = 0;
		while (nb > 0) {
			sum += nb % 10;
			nb = nb / 10;
		}
		return sum;
	}

	public static void main(String[] args) {
		int number;
		int sum;
		Scanner scanner = new Scanner(System.in);
		System.out.print("enter a number between to see the sum of its digits: ");
		number = scanner.nextInt();
		sum = digitSummer(number);
		System.out.println("sum of its digits: " + sum);
	}
}
