#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  //Enter Value
  char * Celsiusstring = readline("Enter temperature in Celsius: ");
  double celsius = atof(Celsiusstring);
  double fahrenheit = ((9.0/5.0)*celsius)+32;
  printf ("%f° in Celsius is equivalent to %f° Fahrenheit.\n", celsius, fahrenheit);
  return 0;
} 
