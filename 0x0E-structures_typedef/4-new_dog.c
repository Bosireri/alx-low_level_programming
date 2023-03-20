#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/* Declarations */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);


/**
 * _strlen - calculate string length
 * @s: pointer variable to string
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}


/**
 * _strcpy - copy string from source to destination
 * @dest: destination pointer string
 * @src: source pointer string
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = _strlen(src);
	for (i = 0; i < l; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}



/**
 * dog_t *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_info;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_info = malloc(sizeof(dog_t));
	if (dog_info == NULL)
		return (NULL);

	dog_info->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_info->name == NULL)
	{
		free(dog_info);
		return (NULL);
	}

	dog_info->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_info->owner == NULL)
	{
		free(dog_info->name);
		free(dog_info);
		return (NULL);
	}

	dog_info->name = _strcpy(dog_info->name, name);
	dog_info->age = age;
	dog_info->owner = _strcpy(dog_info->owner, owner);

	return (dog_info);
}
