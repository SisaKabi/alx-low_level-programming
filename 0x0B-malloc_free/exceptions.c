#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char *exceptions(int l1, int l2)
{
	char *final;

	if (l1 == 0 && l2 == 0)
	{
		return (NULL);
	}
	else if (l1 > 0 && l2 > 0)
	{
		final = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	else if (l1 > 0 && l2 == 0)
	{
		final = malloc(sizeof(char) * (l1 + 1));
	}
	else
	{
		final = malloc(sizeof(char) * (l2 + 1));
	}

	return final;
}
