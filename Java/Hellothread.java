public class Hellothread
{
	public static void main(String[] args)
	{
		Thread a = new Thread(new Runnable() {
			@Override
			public void run() {
    			for (int i = 0; i < 100; i++)
    			{
    				System.out.println("Hello from thread A");
    			}
			}
		});

		Thread b = new Thread(new Runnable() {
			@Override
			public void run() {
    			for (int i = 0; i < 10; i++)
    			{
    				System.out.println("Hello from thread B");
    			}
			}
		});

		a.start();
		b.start();
	}
}