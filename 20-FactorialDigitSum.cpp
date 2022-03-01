//Find the sum of the digits in the number 100!

#include <iostream>
#include <cmath>

int main() {
  long double factorial = 1.0;
  int sum = 0;
  for(int i = 2; i <= 100; ++i) {
    factorial *= i;
  }
  while (factorial > 1){
    sum += int(fmod(factorial, 10));
    factorial = factorial / 10;
  }
  std::cout<<sum;
}