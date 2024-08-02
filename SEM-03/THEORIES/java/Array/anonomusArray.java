
class anonomusArray
{

// function that takes a integer array as parameter
	void show_array(int[] arr)
	{

// for-each loop
		for(int i: arr){
			System.out.println(i);
		}
	}

    public static void main(String[] args) {
        anonomusArray obj = new anonomusArray();
        // passing a anonomus array as argument
        	obj.show_array(new int[] {1,2,3});
    }
}

// it doesnot have any name
// it is mostly used for one time purpose such as passing as argument