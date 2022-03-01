#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

//returns a vector of divisors of an int
std::vector <int> divisors(int x) {
  std::vector <int> divisors;
  for (int i = 1; i < sqrt(x); i++){
    if (x % i == 0){
      divisors.push_back(i);
      divisors.push_back(x/i);
    }
  }
  return divisors;
}

//returns a vector of prime numbers for an int
std::vector<int> Sieve(int n) {
  int isFive = 2;
  bool isPrime = true;
  std::vector<int> primes {2,3,5,7};
  std::vector<int> primeTesters {3,7,9};
  for (int i = 11; i < n; i+=2){
    for (int z = 0; z < primeTesters.size(); z++){
      if ((i % primeTesters[z]) == 0){
        isPrime = false;
        z = primeTesters.size();
      }
    }
    if (isPrime == true){
      primes.push_back(i);
      primeTesters.push_back(i);
    }
    isFive += 1;
    if (isFive == 4){
      isFive = 0;
      i += 2;
    }
    isPrime = true;
  }
  return primes;
}

//returns an int digitcount of an int
int digitCount(int x){
  int z = floor(log10(x)) + 1;
  return z;
}

//returns a rotation of digits as a new int
int digRotation(int x){
  std::vector <int> number;
  std::vector <int>::iterator it;
  int rotate;
  while (x != 0){
    int r = x % 10;
    number.push_back(r);
    x /= 10;
  }
  std::reverse(number.begin(),number.end());
  for (int b = 0; b < number.size(); b++){
    int permute = number.back();
    number.pop_back();
    auto it = number.insert(number.begin(), 1, permute);
    for (int k = 0; k < number.size(); k++){
      rotate += number[k] * pow(10,(number.size()- k - 1));
    }
  }
  return rotate;
}

//returns a vector of digits from an int 
std::vector<int> intVec(int x){
  std::vector <int> number;
  while (x != 0){
    int r = x % 10;
    number.push_back(r);
    x /= 10;
  }
  std::reverse (number.begin(), number.end());
  return number;
}

//returns a vector of digits from a long double
std::vector<int> intVec(long double x){
  std::vector <int> number;
  while (x != 0){
    int r = std::fmod(x,10);
    number.push_back(r);
    x = floor(x/10);
  }
  std::reverse (number.begin(), number.end());
  return number;
}

//checks if an int is in a vector of ints
bool contains (std::vector <int> vector, int x){
  bool contains = false;
  for (int i = 0; i < vector.size(); i++){
    if (vector[i] == x){
      contains = true;
      i = vector.size();
    }
  }
  return contains;
}

//checks if a string is in a vector of strings
bool contains (std::vector <std::string> vector, std::string x){
  bool contains = false;
  for (int i = 0; i < vector.size(); i++){
    if (vector[i] == x){
      contains = true;
      i = vector.size();
    }
  }
  return contains;
}

//returns factorial of an int
int factorial (int x){
  int fact = 1;
  for (int y = 1; y <= x; y++){
    fact *= y;
  }
  return fact;
}

//returns if an int is prime
bool isPrime(int x){
  bool prime = true;
   if (x == 1){
    prime = false;
    return prime;
  }
  if (x == 2){
    prime = true;
    return prime;
  }
  for (int z = 2; z < sqrt(x) + 1; z++){
    if (x % z == 0){
      prime = false;
      z = x;
    }
  }
  return prime;
}

//returns if an int is a palindrome
bool isPal(int x){
  std::vector <int> forward, backward;
  int digit;
  int digCount = 0;
  bool isPal = true;
  while (x != 0){
      digit = x % 10;
      backward.push_back(digit);
      x = x / 10;
      digCount +=1;
    }
    for (int goo = (backward.size() - 1); goo >= 0; goo--){
      forward.push_back(backward.at(goo));
    }
    for (int j = 0; j < digCount; j++){
      if (forward.at(j) != backward.at(j)){
        isPal = false;
        j = digCount;
      }
    }
    return isPal;
}

//returns an int from a vec of digits
int vectoInt(std::vector <int> x){
  int integer = 0;
  std::reverse(x.begin(), x.end());
  for (int s = 0; s < x.size(); s++){
    integer += x[s] * pow(10,(x.size()- s - 1));
  }
  return integer;
}

//returns a double from a vec of digits
double vectoDoub(std::vector <int> x){
  double double2 = 0;
  std::reverse(x.begin(), x.end());
  std::reverse(x.begin(), x.end());
  for (int s = 0; s < x.size(); s++){
    double2 += x[s] * pow(10,(x.size()- s - 1));
  }
  return double2;
}

//returns if an integer is pandigital
bool isPandigital(std::vector <int> vec){
  bool add = true;
  for (int r = 1; r < 10; r++){
    int counter = std::count(vec.begin(), vec.end(), r);
    if (counter != 1){
      add = false;
      r = 10;
    }
  }
  return add;
}

bool isPal(long double x){
  std::vector <int> forward, backward;
  int digit;
  int digCount = 0;
  bool isPal = true;
  while (x != 0){
      digit = fmod(x,10);
      backward.push_back(digit);
      x = floor(x / 10);
      digCount +=1;
    }
    for (int goo = (backward.size() - 1); goo >= 0; goo--){
      forward.push_back(backward.at(goo));
    }
    for (int j = 0; j < digCount; j++){
      if (forward.at(j) != backward.at(j)){
        isPal = false;
        j = digCount;
      }
    }
    return isPal;
}

bool isTriangular(double number) {
  double triTest = (sqrt(1 + 8 * number) - 1.0) / 2.0;
  return triTest == ((int)triTest);
}

bool isSquare(double number){
  double squareTest = sqrt(number);
  return squareTest = ((int)squareTest);

}
bool isPentagonal(double number) {
  double penTest = (sqrt(1 + 24 * number) + 1.0) / 6.0;
  return penTest == ((int)penTest);
}

bool isHexagonal(double number){
  double hexTest = (sqrt(1 + 8 * number) + 1.0) / 4.0;
  return hexTest == ((int)hexTest);
}

bool isHeptagonal(double number){
  double hepTest = (sqrt(9 + (40 * number)) + 3.0) / 10.0;
  return hepTest == (int(hepTest));
}

bool isOctagonal(double number){
  double octTest = (sqrt(1 +(3 * number)) + 1.0) / 3.0;
  return octTest == (int(octTest));
}

bool isPolygonal(double number){
  if (!isTriangular(number) && !isSquare(number) && !isPentagonal(number) && !isHexagonal(number) && !isHeptagonal(number) && !isOctagonal(number)){
    return false;
  } else {
    return true;
  }
}