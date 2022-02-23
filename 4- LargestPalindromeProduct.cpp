//Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <vector>

int main() {
  float digit = 0.1;
  int num;
  int digCount = 0;
  int max = 0;
  bool isPal = true;
  std::vector< int > arr;
  std::vector< int > forward;
  std::vector< int > backward;
  for (int i = 100; i < 1000; i++){
    for(int x = i; x < 1000; x++){
      arr.push_back(i * x);
    }
  }
  for (long double q = 0; q < 405450; q++){
    num = arr.at(q);
    while (num != 0){
      digit = num % 10;
      backward.push_back (digit);
      num = num / 10;
      digCount +=1;
    }
    for (int g = (backward.size() - 1); g >= 0; g--){
      forward.push_back(backward.at(g));
    }
    for (int j = 0; j < digCount; j++){
      if (forward.at(j) != backward.at(j)){
        isPal = false;
        j = digCount;
      }
    }
    if ((isPal == true) && (arr.at(q) > max)){
      max = arr.at(q);
    }
    forward.clear();
    backward.clear();
    digCount = 0;
    isPal = true;
  }
  std::cout<<max;
  return 0;
}
