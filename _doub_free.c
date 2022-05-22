#include "monty.h"
/**
 * _free_doub - tokenize and return an array of tokens
 *@line: the file to cut
 *
 * Return: array of tokens.
 */
void _free_doub(char **args)
{
	free(args[0]);
	free(args);
}
