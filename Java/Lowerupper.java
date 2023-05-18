// Convert string to lowercase and uppercase
import java.util.*;

public class Lowerupper
{
	public static void main(String args[])
	{
		Scanner scanner = new Scanner(System.in);

		String str = scanner.next();

		String lower = str.toLowerCase();
		String upper = str.toUpperCase();

		System.out.println("lowercase: " + lower);
		System.out.println("UPPERCASE: " + upper);
	}
}