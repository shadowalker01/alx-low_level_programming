#include <stdlib.h>
#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: Pointer to a decimal number
* @index: Index
*
* Return: Nothing (void).
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || index > 63)
return (-1);

*n = *n | 1 << index;
return (1);
}
