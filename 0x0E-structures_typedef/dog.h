#ifndef HEADER_FILE
#define HEADER_FILE dog.h

/**
 * struct dog - structure describes a dog : name, age and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: structure for dog informations
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
