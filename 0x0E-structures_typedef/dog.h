#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: param
 * @age: param
 * @owner: param
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
