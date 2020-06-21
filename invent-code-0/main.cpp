#include <iostream>
#include <string>
using namespace std;
int Input(int y){
  cin >> y;
  return y;
}
int factorial(int x){
  x=x*factorial(x-1);
  return x;
}

int main() {
  int y;
  int number = Input(y);
  int Factorial = factorial(number);

  cout << "The factorial of " << number << " is " << Factorial << endl;

  return 0;
}
