// First Pattern
import java.util.*;

class Print
{
	int count = 1;

	void printfor()
	{
		for (int j = 1; j <= count; j++)
		{
			System.out.print(j + " ");
		}
		System.out.println();
		count++;
	}

	void printback()
	{
		for (int j = count; j >= 1; j--)
		{
			System.out.print(j + " ");
		}
		System.out.println();
		count++;
	}
}

public class Pattern
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();

		Print p = new Print();
		for (int i = 0; i < n / 2; i++)
		{
			p.printfor();
			p.printback();
		}

		if (n % 2 == 1)
		{
			p.printfor();
		}
	}
}