// Compare 2 strings to check if they are equal or no
import java.util.*;

public class Strcmp
{
	public static void main(String args[])
	{
		Scanner scanner = new Scanner(System.in);

		String s1 = scanner.next();
		String s2 = scanner.next();

		boolean answer = s1.equals(s2);
		if (answer)
		{
			System.out.println("Yes");
		}
		else
		{
			System.out.println("No");
		}
		
		//boolean answer = s1.equalsIsIgnoreCase(s2);
	}
}