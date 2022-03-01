//If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

#include <iostream>

int main() {
  int ones = 36;
  int tens = 70;
  int twenties = 36 + 60;
  int thirties = 36 + 60;
  int fourties = 36 + 50;
  int fifties = 36 + 50;
  int sixties = 36 + 50; 
  int seventies = 36 + 70;
  int eighties = 36 + 60;
  int nineties = 36 + 60;
  int oneToNinetynine = ones + tens + twenties + thirties + fourties + fifties + sixties + seventies + eighties + nineties;
  int oneHundreds = oneToNinetynine + 1300 -3;
  int twoHundreds = oneToNinetynine + 1300 -3;
  int threeHundreds = oneToNinetynine + 1500 -3;
  int fourHundreds = oneToNinetynine + 1400 -3;
  int fiveHundreds = oneToNinetynine + 1400 -3;
  int sixHundreds = oneToNinetynine + 1300 -3;
  int sevenHundreds = oneToNinetynine + 1500 -3;
  int eightHundreds = oneToNinetynine + 1500 -3;
  int nineHundreds = oneToNinetynine + 1400 -3;
  int oneThousand = 11;
  int allNums = oneToNinetynine + oneHundreds + twoHundreds + threeHundreds + fourHundreds + fiveHundreds + sixHundreds + sevenHundreds + eightHundreds + nineHundreds + oneThousand;
  std::cout<<allNums;
}