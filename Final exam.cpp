#include <stdio.h>
#include <math.h>
int main() {
  // Declare variables
  int n, k, i, j, maxPrime;
  int isPrime(int n);
  // Prompt user to enter n
  printf("Enter n: ");
  scanf("%d", &n);

  // Check if n is valid
  if (n < 0 || n > 100) {
    printf("Invalid input. n must be between 0 and 100.\n");
    return 0;
  }

  // Declare array A
  int A[n];

  // Prompt user to enter the elements of array A
  for (i = 0; i < n; i++) {
    printf("Enter A[%d]: ", i);
    scanf("%d", &A[i]);
  }

  // Prompt user to enter k
  printf("Enter k: ");
  scanf("%d", &k);

  // Find the maximum prime number in array A that is less than k
  maxPrime = 0;
  for (i = 0; i < n; i++) {
    if (A[i] > 1 && isPrime(A[i])) {
      if (A[i] < k) {
        maxPrime = A[i];
      }
    }
  }

  // Print the maximum prime number
  if (maxPrime == 0) {
    printf("No prime number found.\n");
  } else {
    printf("The maximum prime number in array A that is less than k is %d.\n", maxPrime);
  }

  return 0;
}

// Function to check if a number is prime
int isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

