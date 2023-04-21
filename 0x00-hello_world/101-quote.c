#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Uses write to print out array of characters
(*
 * Description: program that prints exactly
 * and that piece of art is useful" - Dora Korpar, 2015-10-19
 * ,followed by a new line, to the standard error
(* stdio.h: Standard input and output
 * Return: 1
 */

int main(void)
{
	char Art[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, Art, sizeof(Art) - 1);

	return (1);
}
