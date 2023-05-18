// Palindrome
import java.util.*;

public class Palindrome
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		String s = scanner.nextLine();
		int n = s.length();

		int flag = 0;
		for (int i = 0; i < n / 2; i++)
		{
			if (s.charAt(i) != s.charAt(n - i - 1))
			{
				flag = 1;
			}
		}

		if (flag == 1)
		{
			System.out.println("Not a Palindrome");
		}
		else
		{
			System.out.println("Palindrome");
		}
	}
}