class VehicleClass
{
	public int tires;
	private String feature;

		AnimalClass(String f, double t)
		{
			tires = t;
			feature = f;
		}

		public void display()
		{
			System.out.println("Number of this vechile" + tires);
			System.out.println("Feature:  " + feature);
		}
}

