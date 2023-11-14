import java.util.Scanner;

/**
 * question_14
 */
public class question_14 {


	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("enter speed and acceleration: ");
		double speed, acceleration;
		speed = scanner.nextDouble();
		acceleration = scanner.nextDouble();
		double takeOff = Math.pow(speed, 2) / (2 * acceleration);
		System.out.printf("minimum runaway needed for take-off is: %.3f", takeOff);
	}
}
