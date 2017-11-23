#include <stdio.h>

float quad_val(float n) { return n * n; }
void quad_ref(float *n) { *n = (*n) * (*n); }

int main() {
  printf("quad_val(6) = %f\n", quad_val(6));

  float n = 5;
  quad_ref(&n);
  printf("quad_ref(5) = %f\n", n);
  return 0;
}