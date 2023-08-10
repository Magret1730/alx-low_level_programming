#include <stdio.h>

#define CAPACITY 50000 // Size of the HashTable.

unsigned long hash_function(char* str)
{
	unsigned long i = 0;

	for (int j = 0; str[j]; j++)
	i += str[j];
	return (i % CAPACITY);
}

int main()
{
	char input[100];

	printf("Enter a string: ");
	scanf("%s", input);

	unsigned long hashValue = hash_function(input);

	printf("Hash value: %lu\n", hashValue);
	return (0);
}
