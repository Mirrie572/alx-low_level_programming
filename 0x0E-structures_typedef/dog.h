#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * This is for dog basic information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new defined data type
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Represents a type alias for struct dog.
 */
typedef struct dog dog_t;

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a pointer to the newly created dog.
 */

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
