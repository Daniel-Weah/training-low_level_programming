#include <unistd.h>
#include <string.h>

int main (void)

{
	int length = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", length);

	return (1);

}
