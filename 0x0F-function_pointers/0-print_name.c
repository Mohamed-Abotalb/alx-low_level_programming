#include <function_pointers.h>

/**
 * print_name - it prints a struct dog.
 *
 * @name: checks the input to function
 * @f: checks the input to function
 *
 * Return - void.
 *
*/

void print_name(char *name, void (*f)(char *))
{

if (name && f)
{
f(name);
}

}
