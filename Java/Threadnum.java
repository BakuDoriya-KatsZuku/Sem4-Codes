public class Threadnum
{
	public static void main(String[] args)
	{
		Thread a = new Thread(new Runnable() {
			@Override
			public void run()
			{
				for (int i = 1; i <= 5; i++)
				{
					System.out.println(i);
				}
			}
		});

		Thread b = new Thread(new Runnable() {
			@Override
			public void run()
			{
				for (int i = 6; i <= 10; i++)
				{
					System.out.println(i);
				}
			}
		});

		a.start();
		b.start();
	}
}