/**
 * question_7
 *
 * ■ One birth every 7 seconds
 *
 * ■ One death every 13 seconds
 *
 * ■ One new immigrant every 45 seconds
 *
 * Write a program to display the population for the 4th year next
 * Assume the current population is 312,032,486 and one year has 365 days.
 *
 */
public class question_7 {

	public static void main(String[] args) {

		int currentPop = 312032486;

		int numberOfDays = 365 * 4;

		long numberOfTotalSeconds = numberOfDays * 86400;

		long numOfBirths = (int) numberOfTotalSeconds / 7;
		long numOfDeaths = (int) numberOfTotalSeconds / 13;
		long numOfSyrians = (int) numberOfTotalSeconds / 45;

		long newPop = currentPop + numOfBirths - numOfDeaths + numOfSyrians;

		System.out.println(newPop);

	}
}
