// Password Generator
import java.util.*;

public class Passwordgen
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();

		System.out.println(generate(n));
	}

	static String generate(int n)
	{
		String lower = "abcdefghijklmnopqrstuvwxyz";
		String upper = lower.toUpperCase();
		String number = "0123456789";
		String special = "`~!@#$%^&*()-_=+|{}[]:;?/<>.,";

		String all = lower + upper + number + special;
		int len = all.length();

		Random random = new Random();
		StringBuilder password = new StringBuilder();

		for (int i = 0; i < n; i++)
		{
			password.append(all.charAt(random.nextInt(len)));
		}

		return password.toString();
	}
}