#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

<<<<<<< HEAD
=======

>>>>>>> e62f9ffed9f4412da5c9f5eeb3cea8b9d970d7e6
	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}


