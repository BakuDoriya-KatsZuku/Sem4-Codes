// Fibonacci without recursion
import java.util.*;

public class Fibaonacci
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		int n = scanner.nextInt();
		
		int a = 0;
		int b = 1;
		if (n == 1)
		{
		    System.out.println(0);
		}
		else
		{
		    System.out.println(a);
		    System.out.println(b);
		    n = n - 2;
		    while (n > 0)
		    {
		        int c = a + b;
		        System.out.println(c);
		        a = b;
		        b = c;
		        n = n - 1;
		    }
		}
	}
}
