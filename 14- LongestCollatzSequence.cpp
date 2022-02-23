/*The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)
Which starting number, under one million, produces the longest chain?*/

#include <iostream>
#include <cmath>

int main() {
  int maxs = 0;
  int maxnum = 0;
  int chainCounter = 2; 
  for (long double i = 13; i < 1000000; i++){
    long double z = i;
    while (z !=1){
      if (std::fmod(z,2) == 0){
        z=z/2; 
      }
      else{
        z = (3 * z) + 1;
      }
      chainCounter+=1;
    }
    if (chainCounter > maxs){
      maxs = chainCounter;
      maxnum = i;
    }
    chainCounter = 2;
  }
  std::cout<<maxnum<<std::endl;
  return 0;
}
