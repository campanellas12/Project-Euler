//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

int main() {
  bool done = false;
  int i;
  int count = 1;
  while (done == false){
    for (i = 1; i < 21; i++){
      if (count % i != 0){
        i = 21;
        count +=1;
      }
      if (i==20){
        std::cout<<count;
        done = true;
      }
    }
  }
}