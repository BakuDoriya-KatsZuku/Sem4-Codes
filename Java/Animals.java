// Q9
import java.util.*;

class Animal
{
	String name;
	int age;

	public Animal(String name, int age)
	{
		this.name = name;
		this.age = age;
	}

	public void setName(String name)
	{
		this.name = name;
	}

	public void setAge(int age)
	{
		this.age = age;
	}

	public void printdet()
	{
		System.out.println("Name: " + name);
		System.out.println("Age: " + age);
	}
}

class Dog extends Animal
{
	private String breed;

	public Dog(String name, int age, String breed)
	{
		super(name, age);
		this.breed = breed;
	}

	public void setBreed(String breed)
	{
		this.breed = breed;
	}

	@Override
	public void printdet()
	{
		System.out.println("Name: " + name);
		System.out.println("Age: " + age);
		System.out.println("Breed: " + breed);
	}
}

public class Animals
{
	public static void main(String[] args) 
	{
		Animal a = new Animal("Vishakha", 10);
		a.printdet();
		Dog b = new Dog("Shekhokar", 20, "Linked List");
		b.printdet();
		b.setAge(25);
		b.printdet();
	}
}