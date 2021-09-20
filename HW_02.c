#include <stdio.h>

int main() {

  printf("Good News Everyone! %d more! \n", 6);

  int x = 12;
  char n = 'p';
  short s = 100000;
  unsigned int y = 11;
  double d = 12.593204824502964051987;

  printf("here is a variable test: %d\n", x);
  printf("here is another: %c\n", n);
  printf("here is an unsigned: %d\n", y);
  printf("short out of bounds test: %d\n", s);
  printf("double time: %lf\n", d);
  printf("double time with 15 sigfigs: %0.15lf\n", d);
  printf("double time with more sigfigs than explicit digits: %0.1500lf\n", d);
  

  return 0;
}
