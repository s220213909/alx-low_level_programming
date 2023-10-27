#include "main.h"

/**
Return: 1 if success, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
  unsigned long int setbit;
 if (index > (sizeof(unsigned long int) * 8 - 1))
  return (-1);
 setbit = 1 << index;
 *n = *n | setbit;
 return (1);
}
