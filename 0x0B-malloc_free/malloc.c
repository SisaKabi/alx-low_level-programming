#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;

	p = malloc(sizeof(int));
	if (p != NULL) {
		printf("Memory created\n");
		return (0);
	}
}
