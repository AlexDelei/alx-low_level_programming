#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *leet - encodes a string
 * @input:string to be encoded
 *
 * Return:the result
 */
char *leet(char *input)
{
	char original[] = "aeotlAEOTL";
	char leet_replace[] = "43071";

	int i, j;
	size_t len = strlen(input);

	/* Create a new string to store the leet encoded text*/
	char *encoded = (char *)malloc((len + 1) * sizeof(char));

	/*if (encoded == NULL)*/
	/*{*/
		/*perror("Memory allocation failed");*/
		/*exit(EXIT_FAILURE);*/
	/*}*/

	/*Initialize encoded string with input string*/
	strcpy(encoded, input);

	/*First loop: Iterate through the original characters*/
	for (i = 0; original[i]; i++)
	{
	/* Second loop: Iterate through the encoded string*/
		for (j = 0; encoded[j]; j++)
		{
			/*If a character matches one of the original letters, replace it with the corresponding leet character*/
			if (encoded[j] == original[i])
			{
				encoded[j] = leet_replace[i / 2];
			}
		}
	}

	return (encoded);
}
