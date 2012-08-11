#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (int argc, char *argv[]) {

  time_t t1;
  (void) time(&t1);
  srand48((long) t1);

  long int n = (lrand48() % 15) + 5;
  long int categories[n];

  int i;
  for (i = 0; i < n; i++) {
    categories[i] = lrand48();
  }

  long int el;
  while (1) {
    el = lrand48() % n;
    printf("%X\t%f\n", categories[el], drand48() * 1000);
  }
}