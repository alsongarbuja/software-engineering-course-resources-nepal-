class Employee {
	int id;
	String name, post;
	float salary;

	Employee(int id, String name, String post, float salary){
		this.id = id;
        	this.name = name;
        	this.post = post;
        	this.salary = salary;
	}

    	public void toString(){
        	System.out.println("ID: " + id);
        	System.out.println("Name: " + name);
       		System.out.println("Post: " + post);
        	System.out.println("Salary: " + salary);
    	}

    public static void main(String[] args) {
        Employee obj = new Employee(1, "Alson", "Developer", 50000.00);
        
            obj.toString();
    } 

}
