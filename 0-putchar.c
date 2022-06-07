#include <unistd.h>
#include "_putchar"

/**
 * main - Check description
 * Description: It prints the word _PUTCHAR, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[8]="_putchar";
	int i;

	for (i=0; i<9; i++)
		_puchar(word[i]);
	-puchar('\n');

	return(0);
}
