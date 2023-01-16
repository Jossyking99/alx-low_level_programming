#ifndef DOG_H
#define DOG_H

/*
 * struct dog - a dog's basic info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: A structure in C,named dog that stores some information
 * about any dog, consisting of; the name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
