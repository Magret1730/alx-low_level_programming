#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Define a new type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Define a new type struct dog with the following
 * elements:name, type = char *
 * age, type = float
 * owner, type = char *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
