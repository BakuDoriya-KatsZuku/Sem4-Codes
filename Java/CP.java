// CP
import java.util.*;

public class CP
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();
		int[] a = new int[n];
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			a[i] = scanner.nextInt();
			sum = sum + a[i];
		}

		for (int i = 0; i < n; i++)
		{
			System.out.print(sum - a[i] + " ");
		}
	}
}