#include <stdio.h>

// Function declaration (prototype)
long long factorial(int n);

main() {
  int i;
  int num;

  printf("Enter a non-negative integer: ");
  scanf("%d", &num);

  // Function call
  if (num < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    long long fact = factorial(num);
    printf("Factorial of %d = %lld\n", num, fact);
  }

  return 0;
}

// Function definition
long long factorial(int n) {
  long long result = 1;
  for (i = 1; i <= n; i++) {
    result *= i;
  }
}


