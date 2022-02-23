//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <iostream>

int main() {
  int i = 1;
  int x = 2;
  int z;
  int y = 2;//sum
  while (i < 4000000){
    z = i + x;
    i = x;
    x = z;
    if (z % 2 == 0){
      y = y + z;
    }
  }
  std::cout<<y;
}