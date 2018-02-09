#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  time_t startp, endp;
  time_t startw, endw;
  double diff;
  int i;

  startp = time(NULL);
  for (i = 0; i < 10000000; i++) {
    printf(" ");
  }
  endp = time(NULL);
  diff = difftime(endp, startp);

  printf("%lf\n", diff);

  startw = time(NULL);
  for (i = 0; i < 10000000; i++) {
    write(" ");
  }
  endw = time(NULL);
  diff = difftime(endw, startw);
  printf("%lf\n", diff);
  return 0;
}