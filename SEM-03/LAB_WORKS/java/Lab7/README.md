# GUI

In java we can use tools like AWT, SWING, etc to create GUI. AWT and SWING are the most popular tools to create GUI in java.

## AWT (Abstract Window Toolkit)

- AWT contains large numbers of classes and methods that allows you to create and manage graphical user interface(GUI)
  such as windows, buttons, scrollbars,textblocks ,etc.
- The awt was designed to provide a common set of tools for GUI design that could work on a variety of platforms.
- The tools provided by the awt are implemented using each platforms native GUI toolkit, hence preserving the look and feel of each platform. It is an advantage of awt. 
- But the disadvantage of such an approach is that GUI designed on one platform may look different when displayed on another platform.
- Awt is the foundation upon which swing is made.

## SWING / JFC (Java Foundation Class)

- SWING is a extended version of AWT. It contains all tge classes and methods as in AWT with additional classes
  and methods of its own.
- The declaration of the components are same as in AWT with a J infront of every classes.
- It needs `JavaX.swing;` package to run.

## Layout used

### Grid Layout

- It is used to arrange the components in rectangular grid.
- GridLayout class is used to achieve the grid layout
- GridLayout() takes `four` parameters , i.e Rows and Columns/ Hspace and Vspace
	- Example :- `GridLayout(2,2,20,30);` = 2 rows,2 columns,20 hspace,30 vspace

## Components

- The component is an abstract class that encapsulates all the attributes of a visual Components.
- Except for menus, all user interface elements that are displayed on the screen and that interact with the user of
  subclasses of Component.
- A Component object is responsible for remembering the current foreground and background colors and the currently
  selected text font. 

### Labels

- Labels are passive controls that do not support any interaction with the user i.e. no event handling.
- A label is an object of type ```Label``` and it contains a String, which it displays.
- Label defines the following constructors:  
i. ```Label() throws HeadLessException```  
ii. ```Label(String str) throws HeadLessException``` // The string is left justified.  
iii. ```Label(String str, int how) throws HeadLessException``` // label.LEFT, label.RIGHT  

### Button

 - The most widely used control is the push button. A push button is a ```Component``` that contains a label and that generates an event when it is pressed. Push buttons are objects of type button. ```Button``` defines these two constructors:

>Constructors
   1. ```public Button()```
   2. ```public Button(String buttonLabel) throws headless Exception;```

### TextField

  The ```TextField``` class implements a single line text entry area ususally called an edit control.

  ```TextField``` allow the user to enter strings and to edit the text using the arrow keys, cut and paste keys and mouse selection.

>Constructors 
  1. ```public TextField(String initialText, int columns)```
  - Construct a TextField instance with the given initial text string with the number of column

  2. ```public TextField(String strText);```
  - Set the text display text on this TextField instance

  3. ```public TextField(int columns);```
  - Construct s TextField instance with number of columns 

### TextArea
  
  > Sub class of ```TextComponent```

  - Sometimes a single line of text input is not enough for a given task. To handle this situation, the awt includes a simple multiline editor called ```TextArea```.

>Constructors
   1. ```TextArea() throws HeadlessException```
   2. ```TextArea(int numLines, int numChars) throws HeadlessException```
   3. ```TextArea(String str) throws HeadlessException```
   4. ```TextArea(Stirng str, int numLines, numChars) throws HeadlessException```
   5. ```TextArea(String str, int numLines,int numChars, int sBars) throws HeadlessException```

   > Here, numLines represents rows and numChars represents number of columns. sBars is Scroll Bar to use scrollbar in the TextArea.

### Checkbox

 - A ```Checkbox``` is a control that is used to turn an option on or off.
 - It consists of a small box tha can either contain a checkmark or not.
 - There is a ```Label``` associated with each check box that describes what option the box represents.
 - Can change the state of a ```Checkbox``` by clicking on it.

>Constructors:
  1. ```Checkbox() throws HeadlessException```
  2. ```Checkbox(String str) throws HeadlessException```
  3. ```Checkbox(String str, boolean on) throws HeadlessException```
  4. ```Checkbox(String str, boolean on, CheckboxGroup cbGroup) throws HeadlessException```
  5. ```Checkbox(String str, CheckboxGroup cbGroup, boolean on) throws HeadlessException```

### CheckboxGroup
 
 - It is possible to create a set if mutually exclusive check boxes in which one and only one checkbox in the group can be checked at any one time.
 - Also known as **radio button**.

>Constructors
 ```CheckboxGroup();```

### Choice

 `Same as Select in HTML`
 - The ```Choice``` class is used to create a pop-up list of items from which user may choose.
 - **Only one item can be chosen**.
 
>Constructors:
  ```Choice();```

### List 

 - The ``` List```  class provides a compact, multiple-choice scrolling selection list.

>Constructors
  1. ``` List() throws HeadlessException``` 
  2. ``` List(int numRows) throws HeadlessException``` 
  3. ``` List( int numRows, boolean multipleSelect) throws HeadlessException``` 
>numRows number of rows will be visible, if false, then only one item may be selected.
