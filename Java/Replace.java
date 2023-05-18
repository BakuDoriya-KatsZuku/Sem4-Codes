// Replace
import java.util.*;

public class Replace
{
	public static void main(String args[])
	{
		Scanner scanner = new Scanner(System.in);

		String s = scanner.nextLine();

		char n = scanner.next().charAt(0);
		char replace = scanner.next().charAt(0);

		s = s.replace(replace, n);

		System.out.println(s);
	}
}