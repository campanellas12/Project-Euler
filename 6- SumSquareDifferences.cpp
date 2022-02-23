//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
#include <cmath>

int main() {
  int sum = 0;
  int square = 0;
  int diff = 0;
  for(int i = 1; i < 101; i++){
    sum = sum + pow(i,2);
  }
  for(int i = 1; i < 101; i++){
    square = square + i;
  }
  square = pow(square, 2);
  diff = square - sum;
  std::cout << diff;
}

