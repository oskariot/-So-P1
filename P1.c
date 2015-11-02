#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * print_hello(void * args)
{
  printf("Hello world, from the 2nd thread!\n");
}

int main()
{
  pthread_t HelloWorld;
  int tret;

  return 0;
}
