#ifndef MY_STRUCT_H
#define MY_STRUCT_H

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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* MY_STRUCT_H */
