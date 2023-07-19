#ifndef MY_STRUCT_H
11;rgb:0000/0000/0000#define MY_STRUCT_H

/**
 * struct dog - entry point
 * @name: pointer char
 * @age: pointer float
 * @owner: pointer char
 * Description: declare dog struct
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MY_STRUCT_H */
