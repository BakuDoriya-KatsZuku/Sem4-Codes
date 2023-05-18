public class Exceptions
{
	public static void main(String[] args)
	{
		try
		{
			String s = "BAC";
			int n = Integer.parseInt(s);
			System.out.println(n);
		}
		catch(NumberFormatException e)
		{
			System.out.println(e);
		}

		try
		{
			int[] a = new int[3];
			a[0] = 0;
			a[1] = 1;
			a[2] = 2;
			a[3] = 3;
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println(e);
		}

		try
		{
			int a = 0;
			int b = 10;
			int c = b / a;
		}
		catch(ArithmeticException e)
		{
			System.out.println(e);
		}
	}
}