#Projects : Pointers and Arrays

##Tasks : 

0. "98 Battery st." - Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
1. "Don't swap horses in crossing a stream" - Write a function that swaps the values of two integers
2. "This report, by its very length, defends itself against the risk of being read" - Write a function that returns the length of a string.
3. "I do not fear computers. I fear the lack of them" - Write a function that prints a string, followed by a new line, to stdout.
4. "I can only go one way. I've not got a reverse gear" - Write a function that prints a string, in reverse, followed by a new line.
5. "A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes"  Write a function that reverses a string.
6. "Half the lies they tell about me aren't true" - Write a function that prints every other character of a string, starting with the first character, followed by a new line.
7. "Winning is only half of it. Having fun is the other half" - Write a function that prints half of a string, followed by a new line.
### Find a way to determine length of half of a string
### - USe the _ strlen made for task 2.
### - Divide by 2
### Find a way to make it print only the second half 
### - Create an index int, make it equal to the string's length. In a while loop, decrement i by the value of the half of the string and print it each time. 
*Example : *
*str = _strlen(str);
int half = *str / 2;
int i = str
while (i != half);
{
	_putchar(str[i]);
	i -- 
}
prints every characters from null to half.
### - Add _putchar after while loop to print the newline too

8. "Arrays are not pointers" - Write a function that prints n elements of an array of integers, followed by a new line.
9. "strcpy" - Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
10. "Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers" - Write a function that convert a string to an integer.

