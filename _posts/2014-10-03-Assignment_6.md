---
layout:     assignment
categories: assignment
title:      Assignment 6
subtitle:   oF + Arduino = heart
author:     bakercp
date:       2014-10-03 12:00:00
due:        2014-10-10 12:00:00
---

1. Read Chapter 5 of Programming Interactivity (Pay attention to object oriented programming section).
1. Do the std::vector tutorial [here](http://www.openframeworks.cc/tutorials/c++%20concepts/001_stl_vectors_basic.html).
1. Expand our in-class demonstration to animate the incoming potentiometer data.
	- Ideas: rotate the hands on a clock, rotate an image, etc.
1. Expand our in-class demonstration to send the state of 3 (or more) potentiometers from Arduino to openFrameworks.
	- Hints:  I recommend sending your values from Arduino in the following format:

	 	```c++
		VALUE_0,VALUE_1,VALUE_2\r\n
		```
		To do this you'll write:

		```c++
		Serial.print(VALUE_0);  
		Serial.print(",");
		Serial.print(VALUE_1);  
		Serial.print(",");
		Serial.println(VALUE_2); // Note that this is println()
		```
	Then on the openFrameworks side, everything will look the same but you will _split_ the string at the comma using `ofSplitString` (you will need to do the std::vector tutorial for this!) and extract the text of the two numbers, which you will then convert to integers using `ofToInt`.
	- Ideas: make an etch-a-sketch, manipulate the x/y/z rotation of an image, control frequency and pitch of a tone.
1. Draw a block of 256 vertical lines right next to each other using a `for` loop.
	1. Make all of the `odd` lines red and all of `even` lines yellow. (hint: use an `if` statement and the modulo operator `%`)
	1. Change the color of those lines to form a gradient, with the first line white and the last line black.
	1. (Bonus) Produce the same visual output (the gradient) without a `for` loop. (hint: Consider using `ofMesh`)
1. Be able to answer the following questions:
	- What is a `std::vector`?
	- What is does an `if` - `else` - statement do?
	- What does a `switch` statement do?
	- What does a `for` loop do and how does it differ from a `while` loop?
	- What is a modulo operator (`%`) and how do you use it?
	- In Arduino, what is the difference between `Serial.write()` and `Serial.print()`.
	- What is "Object-Oriented" Programming?
