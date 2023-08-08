#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>
/**
 *is_space - checks for spaces
 *@c: the spaces
 *Return:spaces
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 *count_words - counts the words in the string
 *@str:the string
 *Return: count
 */
int count_words(char *str)
{
	int word_count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]))
		{
			if (!in_word)
			{
				word_count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
	}

	return (word_count);
}
/**
 *strtow - splits string into words
 *@str: the string
 *
 * Return:the words
 */
char **strtow(char *str)
{
	int i, j;
	int num_words;
	int word_index;
	int word_start;
	int word_length;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);

	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	word_start = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]))
		{
			if (i == 0 || is_space(str[i - 1]))
			{
				word_start = i;
			}
		}
		else
		{
			if (i > 0 && !is_space(str[i - 1]))
			{
				word_length = i - word_start;
				words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
			strncpy(words[word_index], str + word_start, word_length);
			words[word_index][word_length] = '\0';
			word_index++;
			}
		}
	}

	if (!is_space(str[strlen(str) - 1]))
	{
		word_length = strlen(str) - word_start;
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j <= word_index; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[word_index], str + word_start, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}

	words[word_index] = NULL;

	return (words);
}
