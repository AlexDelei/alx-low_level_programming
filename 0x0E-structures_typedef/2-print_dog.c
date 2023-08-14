#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: dog
 *
 *
 */
void print_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "{nil)");
}
