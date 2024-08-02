# Exception Handling

An exception is an unwanted or unexpected event, which occurs during the execution of a program i.e at run time, that disrupts the normal flow of the program’s instructions.


![Exception heirarchy](https://www.tutorialspoint.com/groovy/images/hierarchy_exceptions.jpg)

- Specific exception must be catched first before general exception
	
	- unreachable code error is encountered if general exception is catched first

## Execption Blocks

>Try

- The codes which may cause exception are checked in this block

	- if the code do cause exception it throws the exception to catch blocks
	- if the code doesnot cause exception it does nothing

>catch

- The exception thrown by the try block is catched by this block and checks the exception type

>finally

- The code inside this block is executed no matter what, even when the method returns some values

>throw

- It throw's a specific exception manually

>throws

- It throw's multiple excpetions manually
- It is written besides the method defination
- If a method with throws exception is used inside another method then the method also must throw the exception 