import java.io.*;  

class exceptionThrowDemo{

  void message()throws IOException
  {  
    throw new IOException("Error...");//checked exception  
  }

  void next_message()throws IOException
  {  
    message();  
  }

  void exception_check()
  {
    try
    {  
      next_message();  
    }
    catch(Exception e)
    {
      System.out.println("exception is handled");
    }  
  }  
  
      public static void main(String args[])
      {  
        exceptionThrowDemo obj = new exceptionThrowDemo();  
        obj.exception_check();  
        System.out.println("Done...");  
      }  
}  