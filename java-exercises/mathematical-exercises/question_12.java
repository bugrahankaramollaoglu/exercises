import java.util.Scanner;

/**
 * question_12
 */
public class question_12 {

		public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("enter minutes to convert to years and days: ");
		long minutes = scanner.nextLong();
		long birYildakiDakikaSayisi = 365 * 24 * 60;
		int years = (int)(minutes / birYildakiDakikaSayisi);
		minutes = minutes % birYildakiDakikaSayisi;
		int days = (int) (minutes / (24 * 60));
		System.out.println("Equivalent to " + years + " years and " + days + " days.");
	}
}
