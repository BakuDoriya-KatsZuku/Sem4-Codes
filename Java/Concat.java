// Concatenate
import java.util.*;

public class Concat
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		String s1 = scanner.nextLine();
		System.out.println(s1.length());
		String s2 = scanner.nextLine();
		s1 = s1.concat(s2);
		System.out.println(s1);
		System.out.println(s1.length());
	}
}