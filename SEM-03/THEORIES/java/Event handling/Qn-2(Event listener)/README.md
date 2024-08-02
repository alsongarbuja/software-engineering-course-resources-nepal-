# Explain commonly used event listener interface, with its methods and examples?

## Event Listener
	

## Commonly used Event Listener

>ActionListener

- The Java ActionListener is notified whenever you click on the button or menu item.
- It has 1 method:
	- `public abstract void actionPerformed(ActionEvent e);`
- [Example](https://github.com/Alson33/JavaAssignment/blob/master/Event%20handling/Qn-2(Event%20listener)/ActionListenerDemo.java)

>MouseListener

- The Java MouseListener is notified whenever you change the state of mouse.
- It has 5 methods:
	- `public abstract void mouseClicked(MouseEvent e);`  
	- `public abstract void mouseEntered(MouseEvent e);`  
	- `public abstract void mouseExited(MouseEvent e);`  
	- `public abstract void mousePressed(MouseEvent e);`  
	- `public abstract void mouseReleased(MouseEvent e);`   
- [Example](https://github.com/Alson33/JavaAssignment/blob/master/Event%20handling/Qn-2(Event%20listener)/MouseListenerDemo.java)

>MouseMotionListener

- The Java MouseMotionListener is notified whenever you move or drag mouse.
- It has 2 methods:
	- `public abstract void mouseDragged(MouseEvent e);`
	- `public abstract void mouseMoved(MouseEvent e);`
- [Example](https://github.com/Alson33/JavaAssignment/blob/master/Event%20handling/Qn-2(Event%20listener)/MouseMotionListenerDemo.java)

>KeyListener

- The Java KeyListener is notified whenever you change the state of key.
- It has 3 methods:
	- `public abstract void keyPressed(KeyEvent e);`  
	- `public abstract void keyReleased(KeyEvent e);`  
	- `public abstract void keyTyped(KeyEvent e);`  
- [Example](https://github.com/Alson33/JavaAssignment/blob/master/Event%20handling/Qn-2(Event%20listener)/KeyListenerDemo.java)

>ItemListener

- The Java ItemListener is notified whenever you click on the checkbox.
- It has 1 method:
	- `public abstract void itemStateChanged(ItemEvent e);`
- [Example](https://github.com/Alson33/JavaAssignment/blob/master/Event%20handling/Qn-2(Event%20listener)/ItemListenerDemo.java)

>WindowListener

- The Java WindowListener is notified whenever you change the state of window.
- It has 7 methods:
	- `public abstract void windowActivated(WindowEvent e);`  
	- `public abstract void windowClosing(WindowEvent e);`  
	- `public abstract void windowClosed(WindowEvent e);`  
	- `public abstract void windowDeactivated(WindowEvent e);`  
	- `public abstract void windowDeiconified(WindowEvent e);`  
	- `public abstract void windowIconified(WindowEvent e);`  
	- `public abstract void windowOpened(WindowEvent e);`  
- [Example](https://github.com/Alson33/JavaAssignment/blob/master/Event%20handling/Qn-2(Event%20listener)/WindowListenerDemo.java)