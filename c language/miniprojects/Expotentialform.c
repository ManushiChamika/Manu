#include <stdio.h>
int main() {
  double x = 12.0, result;
  result = exp(x);

  printf("Exponential of %.2lf = %.2lf", x, result);
  
  return 0;
}
