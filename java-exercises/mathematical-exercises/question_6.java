import java.util.Scanner;

/**
 * question_6
 */

public class question_6 {

	public static void main(String[] args) {

		final double PI = 3.14;

		Scanner scanner = new Scanner(System.in);
		System.out.print("enter a radius (r) to calculate area and perimeter: ");
		int radius = scanner.nextInt();
		double area = PI * Math.pow(radius, 2);
		double perimeter = 2 * PI * radius;

		System.out.println("area: " + area);
		System.out.printf("perimeter: %.2f", perimeter);
		System.err.println();

	}
}
