// Factorial without recrusion
import java.util.*;

public class Factorial
{
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();

		int answer = 1;
		for (int i = 1; i <= n; i++)
		{
			answer = answer * i;
		}

		System.out.println(answer);
	}
}