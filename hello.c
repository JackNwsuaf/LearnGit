#include<stdio.h>
#include "sayHello.h"
int main(int argc, char const *argv[]) {
  printf("What's your name?\n" );
  char name[16];
  scanf("%s", name);
  sayHello(name);
  return 0;
}
