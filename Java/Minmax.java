// Min and Max
import java.util.*;

public class Minmax
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();
		int[] a = new int[n];

		int min = Integer.MAX_VALUE;
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			a[i] = scanner.nextInt();
			if (a[i] < min)
			{
				min = a[i];
			}
			if (a[i] > max)
			{
				max = a[i];
			}
		}

		System.out.print("Max: " + max + "\nMin: " + min);
	}
}