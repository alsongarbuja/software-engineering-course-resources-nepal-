# Graphics

In java we can use different methods to create objects or graphics.
java.awt.Graphics class provides many methods for graphics programming.

## Commonly used methods

- public abstract void drawString(String str, int x, int y): is used to draw the specified string.
- public void drawRect(int x, int y, int width, int height): draws a rectangle with the specified width and height.
- public abstract void fillRect(int x, int y, int width, int height): is used to fill rectangle with the default color and specified width and height.
- public abstract void drawOval(int x, int y, int width, int height): is used to draw oval with the specified width and height.
- public abstract void fillOval(int x, int y, int width, int height): is used to fill oval with the default color and specified width and height.
- public abstract void drawLine(int x1, int y1, int x2, int y2): is used to draw line between the points(x1, y1) and (x2, y2).
- public abstract boolean drawImage(Image img, int x, int y, ImageObserver observer): is used draw the specified image.
- public abstract void drawArc(int x, int y, int width, int height, int startAngle, int arcAngle): is used draw a circular or elliptical arc.
- public abstract void fillArc(int x, int y, int width, int height, int startAngle, int arcAngle): is used to fill a circular or elliptical arc.
- public abstract void setColor(Color c): is used to set the graphics current color to the specified color.
- public abstract void setFont(Font font): is used to set the graphics current font to the specified font.

## image displaying methods

- Image class
	- Image class is used to store the image.
	- `drawImage()` method is used to draw(or add) the image inside the frame.

- ToolKit class
	- `getDefaultToolKit()` method used to get the default toolkit.
	- `getImage()` method is used to get the image.