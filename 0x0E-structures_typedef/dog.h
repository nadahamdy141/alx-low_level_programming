#ifndef DOG_H
#define DOG_H
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: first parameter
 * @name: second parameter
 * @age: third parameter
 * @owner: fourth parameter
 *
 * Description: function that initialize a variable of type struct dog
 * Return: Always(0) Success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
#endif
