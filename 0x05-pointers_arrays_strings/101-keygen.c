#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH

/*Function to generate a random password*/

void generatePassword(char *pswd, int len)
{
	int i;

	static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	for (i = 0; i < len; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		pswd[i] = charset[index];
	}
	pswd[len] = '\0';
}
int main()
{
	srand((unsigned int)time(NULL));
	int passwordLength = 10;
	char pswd[MAX_PASSWORD_LENGTH + 1];

	generatePassword(pswd, passwordLength);
	printf("Random Password is: %s\n", pswd);
	return (0);
}
