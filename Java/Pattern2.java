// Pattern 2
import java.util.*;

public class Pattern2
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		String s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		int n = scanner.nextInt();
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < n - i; j++)
			{
				System.out.print(" ");
			}
			for (int j = count; j >= count - i; j--)
			{
				int x = (j % 26);
				System.out.print(s.charAt(x));
			}
			count += (i + 2);
			System.out.println();
		}
	}
}