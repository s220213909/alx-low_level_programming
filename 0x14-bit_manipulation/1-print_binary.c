#include "main.h"

unsigned long int _pow(unsigned int base, unsigned int power)
{
  unsigned long int num;
  unsigned int a;
  num = 1;
  for (a = 1; a <= power; a++)
    num *= base;
  return (num);
}

void print_binary(unsigned long int n)
{
  unsigned long int divisor, check;
  char var;
  var = 0;
  divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
  while (divisor != 0)
    {
      check = n & divisor;
      if (check == divisor)
	{
	  var = 1;
	  _putchar('1');
	}
      else if (var == 1 || divisor == 1)
	{
	  _putchar('0');
	}
      divisor >>= 1;
    }
}
