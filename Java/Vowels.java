// Vowels
import java.util.*;

public class Vowels
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		String s = scanner.nextLine();
		int n = s.length();

		int a = 0;
		int e = 0;
		int j = 0;
		int o = 0;
		int u = 0;

		for (int i = 0; i < n; i++)
		{
			if (s.charAt(i) == 'a' || s.charAt(i) == 'A')
			{
				a++;
			}
			else if (s.charAt(i) == 'e' || s.charAt(i) == 'E')
			{
				e++;
			}
			if (s.charAt(i) == 'i' || s.charAt(i) == 'i')
			{
				j++;
			}
			if (s.charAt(i) == 'o' || s.charAt(i) == 'O')
			{
				o++;
			}
			if (s.charAt(i) == 'u' || s.charAt(i) == 'U')
			{
				u++;
			}
		}

		System.out.print("A: " + a + "\nE: " + e + "\nI: " + j + "\nO: " + o + "\nU: " + u);
	}
}