// Fibonacci with recursion
import java.util.*;

public class Fibonaccirec
{
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();

		for (int i = 0; i < n; i++)
		{
			System.out.println(fib(i));
		}

	}

	public static int fib(int n)
	{
		if (n <= 1)
		{
			return n;
		}

		return (fib(n - 1) + fib(n - 2));
	}
}