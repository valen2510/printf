<center>
	<img src="https://tctechcrunch2011.files.wordpress.com/2015/11/holberton-logo-horizontal.jpg" width="450" height="250">
	     <h1> Printf project
	     	  	 <h1>
					</center>
							<p>
										<h3> Description</h3>
printf is a weel known function used in C programming to do formated printing. Usually it only takes the standard library 
       	    	 <stdio.h> to call it into a c program, and using it for simple strings or formatted specifiers that allow us to print diferent types of data. This time we are presenting a printf project made from scratch in most of its features in order to understand the complexity of a powerful tool. You can see man 3 of printf to understand how _printf works.
		 	      	   </p>
							<h3> Compilation</h3>


$ gcc -Wall -Werror -Wextra -pedantic *.c



			<h3> Prototype</h3>

int _printf(const char *format, ...)



				<h3>Return</h3>
If everything is succesful the function returns the number of characteres printed.


   	      	 	   <h3> Formats</h3>
						<table>
										<tr>
															<th>Specifications</th>
															     <th>Description</th>
															         </tr>
																     <tr>
																          <td>%c</td>
																	       <td>Print the single character</td>
																	       		     	     </tr>
																				         <tr>
																					      <td>%s</td>
																					           <td >Print the string of characteres</td>
																						       	      	  	 </tr>
																									     <tr>
																									          <td>%d</td>
																										       <td >Print the decimal number</td>
																										       	   	      	      </tr>
																													          <tr>
																														       <td>%i</td>
																														            <td >Print an integer</td>
																															    	       	   </tr>
																																	      </tr>
																																	        </table>
																																		  <h3> Project files</h3>
																																		       	       <table>
																																			          <tr>
																																				      <th>Specifications</th>
																																				          <th>Description</th>
																																					     </tr>
																																					        <tr>
																																						    <td>
																																						         <a href="[https://github.com/valen2510/printf/blob/master/holberton.h](https://github.com/valen2510/printf/blob/master/holberton.h)">holberton.h</a>
																																							       </td>
																																							           <td>
																																								        <b>Header file</b>
																																										      <br>Include all  function prototypes 
    
						<br> inlcude structure of specifiers
											</td>
															 </tr>
															      <tr>
															            <td>
																           <a href="[https://github.com/valen2510/printf/blob/master/printf.c](https://github.com/valen2510/printf/blob/master/printf.c)">printf.c</a>
																	           </td>
																		         <td >
																			           <b> Project function: _printf</b>
																				       	       		     <br> Start the variadic list.
    
								<br> Iterates string  format  of entry and check for a moldule symbol (%) . If  the symbol is found then check if the next char match with one of the valid specifiers in the structure using the auxiliar function to comapare ( comp), in that case the respective function of these format is called. 
    
									<br> For the characters that doesn't match any of the formats the function ignores the module symbole and print it  as a string.
    
										<br> In case that  the module symbole is not found, print the each character normally.
    
										</td>
															    </tr>
															             <tr>
																               <td>
																	                  <a href="[https://github.com/valen2510/printf/blob/master/printf_functions.c](https://github.com/valen2510/printf/blob/master/printf_functions.c)">printf_functions.c</a>
																			              </td>
																				                <td >
																						              <b>
																							                  <Auxiliar functions
																									  	                <b/>
																												             <br> _putchar: using write function, prints a character
    
														<br> printc: print character using list variable
    
															<br> print_string: pint strings, if  string is null it pirnts (null)
    
															 <br> print_n: print numbers base 10.
															      	       	     	     	             </td>
																				                    </tr>
																						                  </table>
																								                <h3> Contributors</h3>
																										                  <p> Muricio Garcia -  
																												      	      	     	           <a href="https://twitter.com/cmaurog">@cmaurog</a>
																																                    <br> Valentina Jaramillo -  
																																		    	 	   	     	            <a href="https://twitter.com/DaftVal">@DaftVal</a>
																																							                     </p>This project is about create a printf function.