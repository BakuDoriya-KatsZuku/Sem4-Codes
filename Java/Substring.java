// Substring
import java.util.*;

public class Substring
{
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);

		String s = scanner.nextLine();
		int start = scanner.nextInt();
		int end = scanner.nextInt();

		if (start >= 0 && end < s.length() && start <= end)
		{
			System.out.println(s.substring(start, end + 1));
		}
		else
		{
			System.out.println("Invalid Indices");
		}
	}
}