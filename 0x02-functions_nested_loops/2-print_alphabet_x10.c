#include "main.h"

void print_alphabet_x10(void) {

	int count = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	while (count < 10)
	{
		i = 0;
		while (letters[i] != '\0') {
			_putchar(letters[i]);
			i++;
		}

		_putchar('\n');

		count++;
	}
}
