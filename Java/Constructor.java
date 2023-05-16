// Constructor
import java.util.*;

class Rectangle
{
	private int length;
	private int breadth;

	public Rectangle()
	{
		length = 1;
		breadth = 1;
	}

	public Rectangle(int side)
	{
		length = side;
		breadth = side;
	}

	public Rectangle(int length, int breadth)
	{
		this.length = length;
		this.breadth = breadth;
	}

	void printlb()
	{
		System.out.println(length + " " + breadth);
	}
}

public class Constructor
{
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);

		Rectangle r1 = new Rectangle();
		Rectangle r2 = new Rectangle(6);
		Rectangle r3 = new Rectangle(1, 2);

		r1.printlb();
		r2.printlb();
		r3.printlb();	
	}
}