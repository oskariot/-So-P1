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

  if (tret = pthread_create(&HelloWorld, NULL, print_hello, NULL))
  {
    fprintf(stderr,"Error from pthread_create(). Returned %i instead of 0.", tret);
    exit(EXIT_FAILURE);
  }

  if (tret = pthread_join(HelloWorld, NULL))
  {
    fprintf(stderr, "Error from pthread_join(). Returned %i instead of 0.", tret);
    exit(EXIT_FAILURE);
  }

  return 0;
}
