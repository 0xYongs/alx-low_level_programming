#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog with the following elements
 *
 * @name: first member
 * @age: 2nd member
 * @owner: last member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * dog_t - typedef for struct dog
 * @d: pointer to struct
 * @name: 1st member
 * @age: dog's age
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif /*dog.h*/
