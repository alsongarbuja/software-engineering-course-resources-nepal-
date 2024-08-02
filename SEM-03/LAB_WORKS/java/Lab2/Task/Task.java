class Task
{
	String name;
	boolean isComplete;

	Task(String name)
	{
		this.name = name;
	}

		void markAsComplete()
		{
			isComplete = true;
		}

		void markAsInComplete()
		{
			isComplete = false;
		}


		public static void main(String[] args) {
			Task obj = new Task("Java");

				obj.markAsInComplete();
			System.out.println("Name of subject: " + obj.name);
			System.out.println("status: " + obj.isComplete);

				obj.markAsComplete();
			System.out.println("Name of subject: " + obj.name);
			System.out.println("status: " + obj.isComplete);
		}
}