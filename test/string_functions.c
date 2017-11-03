#include <stdio.h>
#include <stdlib.h>
#include "string_functions.h"

<<<<<<< HEAD
//Strlen
=======
>>>>>>> 05592fb9e376e5063832f0cf58811cf06b37cce1
int mystrlen(char *str) {
  unsigned int i = 0;
  while (*str++) {
    i++;
  }

  return i;
}
<<<<<<< HEAD
//Strncpy
char *mystrncpy(char *dest, char *source, int n){
  unsigned int i = 0;
  char meme[] = "";
  while(source[i] || n){
    meme[i] = source[i];
    i++;
    n--;
  }
  dest = meme;
  return dest;
}


int main() {
  char *strings[] = {"hello world", "hi polymer", "polypropylene", "lenovo", "intel inside"};
  const unsigned char numstrings = sizeof(strings) / sizeof(strings[0]);
  unsigned int i;
  for (i = 0; i < numstrings; i++) {
    printf("length of %s: %d\n", strings[i], mystrlen(strings[i]));
  }

  char first[] = "";
  char second[] = "world";
  mystrncpy(first, second, 10);
  printf("%s \n", first);
}
=======
>>>>>>> 05592fb9e376e5063832f0cf58811cf06b37cce1

