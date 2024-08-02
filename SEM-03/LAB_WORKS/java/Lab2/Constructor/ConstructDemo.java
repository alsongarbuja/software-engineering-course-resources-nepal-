class Const
{
	int roll;
	String name;
	char grade;

// Default constructor
	Const()
	{
		roll = 1;
		grade = 'A';
	}

// parameterized constructor
	Const(String name, char grade)
	{
		this.name = name;
		this.grade = grade;
	}

// object constructor
	Const(Const ob)
	{
		ob.roll = roll;
		ob.grade = grade;
	}

	void displayName()
	{
		System.out.println("Name: " + name);
	}

	void displayRoll()
	{
		System.out.println("Roll: " + roll);
		System.out.println("Grade: " + grade);
	}
}

class ConstructDemo
{
	public static void main(String[] args)
	{
		Const obj = new Const();
		Const ob = new Const("Alson", 'B');
			ob.displayName();
		Const ob1 = new Const(obj);
			ob1.displayRoll();
	} 
}