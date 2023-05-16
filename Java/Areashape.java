// Find area of shapes using abstract class
import java.util.*;

abstract class Shape
{
	abstract double area();
}

class Circle extends Shape
{
	private int radius;

	public Circle(int radius)
	{
		this.radius = radius;
	}

	@Override
	double area()
	{
		return (Math.PI * radius * radius);
	}
}

class Rectangle extends Shape
{
	private int length;
	private int breadth;

	public Rectangle(int length, int breadth)
	{
		this.length = length;
		this.breadth = breadth;
	}

	@Override
	double area()
	{
		return (length * breadth);
	}
}

class Triangle extends Shape
{
	private int base;
	private int height;

	public Triangle(int base, int height)
	{
		this.height = height;
		this.base = base;
	}

	@Override
	double area()
	{
		return (0.5 * base * height);
	}
}

public class Areashape
{
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);

		Circle circle = new Circle(5);
		Rectangle rectangle = new Rectangle(5, 6);
		Triangle triangle = new Triangle(5, 6);

		System.out.println("Circle: " + circle.area());
		System.out.println("Rectangle: " + rectangle.area());
		System.out.println("Triangle: " + triangle.area());
	}
}