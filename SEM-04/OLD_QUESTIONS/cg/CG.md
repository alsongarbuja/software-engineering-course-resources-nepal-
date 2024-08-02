# Chapter - 1

## Introduction to computer graphics

- Computer graphics refers to the process of representing graphical objects in computer. By Graphical we refer to all the picture and arts form.
- The graphical objects are shown in the computer screen by controlling the smallest addressable screen element's called pixels(picture element) intensity and color.

## Advantage of computer graphics

1. It provides tool that help not only to represent real life object in computer screen but also of abstract and synthetic objects such as survey results, mathematical 4D surfaces.
2. It is able to produce moving objects hence animation is possible.
3. It also provide tools like motion dynamics, that enables to create graphical object move with respect to a stationary observer.
4. It helps to control the minor details of the animation hence providing the full control over a scene.

## Components of computer graphics

- Interactive computer graphics consist of three main components:-
    1. Digital memory buffer
    2. TV monitor
    3. Display controller

![image]()

### Digital Memory Buffer (Frame Buffer)

- It is the place where the image or picture is stored in an array (matrix of 0 and 1, 0 represent darkness and 1 represent image)
- Frame buffer is the (__V-RAM__)[Video RAM] used to hold or map the image to be displayed. The memory needed to hold the image depends upon the resolution of the image and color depth used per pixel.
- The formula is 
- $Memory(MB) = \frac{X-resolution*Y-resolution*Bits-per-pixel}{8*1024*1024}$
- Usually frame buffer is implemented using rotating random access semiconductor memory. However, frame buffer can also be implemented using shift register

### Tv monitor

- The monitor is used to view the image stored in the frame buffer.

### Display Controller

- It is an interface between Digital Memory Buffer and Tv monitor.
- The main function of this unit is to pass the contents of frame buffer to the monitor. It converts the successive 0's and 1's comming from frame buffer to the corresponding video signal to be displayed by Tv monitor.
- It is recognized as display card nowadays

## Application of Computer graphics

- Today computer graphics can be used in multiple fields as variety as common personal computers, mobiles to specialized military, industry, etc. Some of the uses are as follows:-
    1. Computer Aided Design (CAD)
        - One of the major field that uses computer graphics is in design process, particularly in engineering applications such as building and other sturctural design, mechanical, automobiles, etc. The CAD packages nowadays range from 2D vector based drafting system to 3D solid and surface modellers. Many of them also allows to rotate the design free in 3D space which allows to examine the desing throughly from every angle.
    2. Presentation graphics
    3. Entertainment
        - Computer graphics has been used in the field of entertainment today more than ever. Entertainment industries like games, movies, music videos, etc have incorporeted the power of computer graphics and made it more lively and fun to play, watch, etc.
    4. Computer Aided Learning (CAL)
    5. Graphical User Interface (GUI)
        - One cannot find a package in modern days that doesn't contain any graphical items to guide them in the program. They are used to guide the users of the program and make it eaiser to navigate and communicate with the program. Every one have a GUI (Graphical User Interface) nowadays in thier computer and mobiles to make thier interaction more easy and interactive.
    6. Medical Application
        - It has become a powerful tool in the field of medical industry. Many things are computerized like the x-ray, CT scan, MRI, etc all are produced by scaning the body using computer aided technologies like CAT(Computerized Axial Tomography), etc. Many interactive surgery simulations are also used to train new doctors and provide more practical knowledge.
    7. Internet 
        - Internet is the place field with computer graphics every where, they are the essence of the internet. We can listen to high-quality musics, watch movies, see pictures and have many other interactive computer graphics component.

# Chapter - 2

## Display devices

- The output device that is used to display the graphical components, images and videos are called display devices.
- Some of the display devices are:-

    1. ### Cathode-Ray Tubes
    
    ![image]('https://github.com/Alson33/Notes_Old_question_solutions/blob/master/4th-Semester/CRT-image-1.png')

## Techinques for color display
1. Beam Penitration
2. Shadow-masking Technique

## Simple raster graphics system
## Raster graphic system with a fixed portion of the system memory reserved for the frame buffer
## Random-Scan System
## Basic refresh operation of video controller

# Chapter - 3

## Random Scan Display (Monitors)

## Raster Scan Display

## Difference between Random Scan Display and Raster Scan Display

Random(Vector) Scan Display | Raster Scan Display
--|--
It only draws lines and characters | It has the ability to display areas filled with solid color or patterns
It doesn't use interlacing | It uses interlacing
Here the beam is moved between the end points of the graphics primitives | Here the beam is moved all over the screen one scan line at a time from top to bottom and back to top
High Resolution and more expensive | Low resolution and less expensive
Use monochrome or beam penitration type | Use monochrome or shadow mask type
Editing is easy | Editing is not easy

# Chapter - 4

## Basic Incremental Algorithm (DDA)

- ### Theory
    - We have $Slope(m) = \frac{\Delta y}{\Delta x}$, y = mx + b
    - $m = \frac{y_2-y_1}{x_2-x_1} = \frac{dy}{dx}$, $b = y_1 - m.x_1$
    - For (m < 1), inc x by 1, then $y_i = m.x_i+B$
    - For each $x_i$
    - $y_{i+1} = m.x_{i+1} + B$
    - $= m(x_i + \Delta x) + B$ (if $\Delta x = 1  \space then \space y_{i+1} = y_i + m)$
    - $= y_i + m\Delta x $ and if $x_{i+1} = x_i + 1 \space then \space y_{i+1} = y_i + m$
    - The values of  x < y are defined interms of their pervious value.
    - A unit change in x change y by m which is slope of line
    - If (m > 1) a step in x creates a step in y greater than 1 
    - So we reverse a role of x and y assigning unit step to y and increase x by $\Delta x$
    - $\Delta x = \frac{\Delta y}{m} = \frac{1}{m}$
    - increase $y_i$ by 1 then $x_i = \frac{1}{m}*y_i + B$
    - So, $x_{i+1} = \frac{1}{m}*y_{i+1} + B = \frac{1}{m}(y_i + \Delta y)+B = x_i + \frac{1}{m}*\Delta y$
    - If $\Delta y = 1$ then $x_{i+1} = x_i + \frac{1}{m}$

- ### Alogrithm
    1. Read the line end points $(x_1, y_1)$ and $(x_2, y_2)$
    2. Calculate $\Delta x = |x_2 - x_1|$, $\Delta y = |y_2 - y_1|$, $m = \frac{\Delta y}{\Delta x}$
    3. if (m < 1) then inc __x by 1 and y by m__
    4. Repeat step 3 from x = $x_0$ to $x <= x_1$
    5. If (m > 1) then inc y by 1 and x by $\frac{1}{m}$
    6. Repeat step 5 from y = $y_0$ to $y <= y_1$
    7. Stop 
- ### Example
    - Rasterized the point (0,0) and (6,4)
    - we have $\Delta x = x_2 - x_1 = 6-0 = 6$
    - $\Delta y = y_2 - y_1 = 4-0 = 4$
    - $m = \frac{\Delta y}{\Delta x} = \frac{4}{6} = 0.667$
    - Since (m < 1)
    - x = x +1 and y = y + m
    - The next points are (1, 1), (2,1), (3, 2), (4, 3), (5, 3), (6, 4)