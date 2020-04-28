#include <math/math.hpp>

int add(int a, int b) {
  return a+b;
}

int mult(int a, int b) {
  return a*b;
}

int factorial(int n) {
  return n == 0? 1 : n*factorial(n-1);
}
