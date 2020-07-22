<p align="center">
<img src="https://tctechcrunch2011.files.wordpress.com/2015/11/holberton-logo-horizontal.jpg" width="450" height="250">	
<h1> Printf project</h1></p>

<h3> Description</h3>
<p>printf is a weel known function used in C programming to do formated printing. Usually it only takes the standard library 
<stdio.h> to call it into a c program, and using it for simple strings or formatted specifiers that allow us to print diferent types of data. This time we are presenting a printf project made from scratch in most of its features in order to understand the complexity of a powerful tool. You can see man 3 of printf to understand how _printf works.</p>

<h3> Compilation</h3>

```$ gcc -Wall -Werror -Wextra -pedantic *.c```


<h3> Prototype</h3>

```int _printf(const char *format, ...)```


<h3>Return</h3>
If everything is succesful the function returns the number of characteres printed.

<h3>Formats</h3>

| Specifiers      | Description |
| ----------- | ----------- |
| %c  | Print single character |
| %s  | Print string of characteres |
| %d  | Print decimal numbers|
| %i  | Print integers |

<h3>Project files</h3>

 File        | Description |
| ----------- | ----------- |
| [holberton.h](https://github.com/valen2510/printf/blob/master/holberton.h) | **Header file**
<br>Include all  function prototypes
<br> inlcude structure of specifiers|
| [printf.c](https://github.com/valen2510/printf/blob/master/printf.c) | **Project function: _printf**
    <br> Start the variadic list.
        <br> Iterates string  format  of entry and check for a moldule symbol (%) . If  the symbol is found then check if the next char match with one of the valid specifiers in the structure using the auxiliar function to comapare ( comp), in that case the respective function of these format is called.
	    <br> For the characters that doesn't match any of the formats the function ignores the module symbole and print it  as a string.
	        <br> In case that  the module symbole is not found, print the each character normally.|
| [printf_functions.c](https://github.com/valen2510/printf/blob/master/printf_functions.c)  | **Auxiliar functions**
    <br> _putchar: using write function, prints a character
        <br> printc: print character using list variable
	    <br> print_string: pint strings, if  string is null it pirnts (null)
	        <br> print_n: print numbers base 10.|

<h3>Contributors</h3>

Mauricio Garcia - [@camagar](https://github.com/camagar)<br>
Valentina Jaramillo - [@valen2510](https://github.com/valen2510)<br>


	