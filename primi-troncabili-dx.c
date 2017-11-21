#include <stdio.h>

int is_prime(n) {
  for (int i = n / 2; i > 1; i--) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int check_prime_right(int n) {
  for (; n > 0; n /= 10) {
    if (!is_prime(n)) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  while (1) {
    scanf(" %d", &n);
    if (n == -1)
      return 0;

    if (check_prime_right(n)) {
      printf("E' primo a dx\n");
    } else {
      printf("Non e' primo a dx\n");
    }
  }
  return 0;
}