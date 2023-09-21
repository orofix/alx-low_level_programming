#include "main.h"
#include <stdio.h>


/**
 * isLower - determines whether ascci is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
 *
*/


int isLower(char c)
{
	return (c > 97 && c <= 122);
}





/**
 * isDelimiter - determines whether ascci is a delimiter
 * @c: character            isDelimiter
 * Return 1 if true 0 if false
*/




int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12, i++)
		if (c == delimiter[i])
			return (1);
	return (0);





/**
 * cap_string - capitalizes all wors of a string
 * @s: input string
 * Return: string with capitalized words
*/



char *cap_string(char *s)
{
	char *ptr = s;
	int foundelimit = i;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = i;
		else if (isLower(s *) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
