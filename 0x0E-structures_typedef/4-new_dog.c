#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: first member
 * @age: swcond member
 * @owner: third member
 *
 * Description: function that creates a new dog
 * You have to store a copy of name and owner
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = malloc(sizeof(char) * (strlen(name) + 1));
	new_dog_ptr->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);

		return (NULL);
	}

	strcpy(new_dog_ptr->name, name);
	strcpy(new_dog_ptr->owner, owner);

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
