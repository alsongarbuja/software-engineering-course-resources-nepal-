# File Handling

File handling in java can be done by Java I/O API. The Java.io packgae contains all the required classes for input and output opertions.

>Input Output Classes

- FileWriter Class
	- It is used to write character-oriented data to a file.
	- Some of the methods are :-

	| Methods   |    Description  |
	| ----------|-----------------|
	| write(String text) | It is used to write string into FileWriter |
	| write(char c) | It is used to write the char into FileWriter |
	| flush() | It is used to flushes the data of FileWriter |
	| close() | It is used to close the FileWriter |

- FileReader Class
	- It is used to read data from the file.
	- Some of the methods are :-

	| Methods   |    Description  |
	| ----------|-----------------|
	| int read() | It is used to return a character in ASCII form. It returns -1 at the end of file. |
	| close() | It is used to close the FileReader |

- BufferedWriter Class
	- It is used to provide buffering for Writer instances.
	- Some of the methods are :-

	| Methods   |    Description  |
	| ----------|-----------------|
	| write(String s, int off, in len) | It is used to write a portion of a string |
	| newLine() | It is used to add a new line by writing a line separator. |
	| write(int c) | It is used to write a single character |
	| flush() | It is used to flushes the input stream |
	| close() | It is used to close the input stream |

- BufferedReader Class
	- It is used to read the text from a character-based input stream.
	- Some of the methods are :-

	| Methods   |    Description  |
	| ----------|-----------------|
	| int read(char[] cbuf, int off, int len) | It is used for reading characters into a portion of an array.|
	| int read() | It is used for reading a single character. |
	| String readLine()	 | It is used for reading a line of text. |
	| void reset() | 	It repositions the stream at a position the mark method was last called on this input stream. |
	| close() | It closes the input stream and releases any of the system resources associated with the stream.|