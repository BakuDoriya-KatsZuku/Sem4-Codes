// Factorial with recursion
import java.util.*;

public class Factorialrec
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();

		System.out.println(fact(n));
	}

	public static int fact(int n)
	{
		if (n == 1)
		{
			return 1;
		}

		return (n * fact(n - 1));
	}
}