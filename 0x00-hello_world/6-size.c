#include <stdio.h>
/**
 * Description: Prints the size of various data types.
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\nSize of an int: %lu byte(s)\n",
	       sizeof(char), sizeof(int));
	printf("Size of a long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\n",
	       sizeof(long int), sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
