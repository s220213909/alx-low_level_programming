#include "main.h"
#include <stdlib.h>

/**
* Return: 1 if success, -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
  if (index > sizeof(n) * 8)
  return (-1);
 *n &= ~(1 << index);
 return (1);
}
