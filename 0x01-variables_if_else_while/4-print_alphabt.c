#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		if (alph[i] != "e" && alph[i] != "q")
		{
			putchar(alph[i]);
		}
	}
	putchar("\n");
	return (0);

}
