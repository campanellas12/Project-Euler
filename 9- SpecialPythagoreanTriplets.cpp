//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

#include <iostream>
#include <cmath>
#include <math.h>

int main() {
  for (int a = 5; a < 1001; a++){
    for (int b = 5; b < 1001; b++){
      int c = pow(a,2) + pow(b,2);
      float z = sqrt(c);
      if ((a + b + z) == 1000){
        int product = a * b * z;
        std::cout<<product;
        a = 1001;
      }
    }
  }
}