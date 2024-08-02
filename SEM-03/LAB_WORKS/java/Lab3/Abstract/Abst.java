abstract class Building
{
	abstract void Style();
	abstract boolean haveBalcoony();
}

class WesternStyle extends Building
{
	//overRidding the abstract class
	void Style(){
		System.out.println("It has Floors");
	}

	boolean haveBalcoony()
	{
		return true;
	}
}

// Multilevel inheritance
class EasternStyle extends WesternStyle
{
	boolean haveBalcoony()
	{
		return false;
	}
}

class Abst
{
	public static void main(String[] args) {
		EasternStyle obj1 = new EasternStyle();
		obj1.Style();

			System.out.println("it has balcoony: " + obj1.haveBalcoony());

		WesternStyle obj = new WesternStyle();
		obj.Style();

			System.out.println("it has balcoony: " + obj.haveBalcoony());
	}
}