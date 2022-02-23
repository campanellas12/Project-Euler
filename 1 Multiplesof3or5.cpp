//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

int main() {
  int z = 0;
  for (int i = 0; i < 1000; i++){
    if ((i % 3 == 0) || (i % 5 == 0)){
      z=z+i;
    }
  }
  std::cout<< z;
  return 0;
}
