/*
  main.c Source Code
  Written by @onelifehack
  <@SPFck> <@SPNytan>
*/

#include <stdio.h>

int main() {
  char name;
  printf("Insert your name: ");
  scanf("%s", &name);
  printf("Hi %s, welcome to our organization!\n", &name);

  return 0;
}