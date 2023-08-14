#ifndef DOG_H
#define DOG_H
/**
 * struct dog - first structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: first structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
