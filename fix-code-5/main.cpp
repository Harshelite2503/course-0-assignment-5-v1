#include <iostream>
#include <string>
using namespace std;

float Divide_Numbers(const float value1, const float value2) {
  return value1 / value2;
}

int main() {
  float val1;
  float val2;

  cout << "Enter a number: ";
  cin >> val1;
  cout << "Enter another number: ";
  cin >> val2;

  cout << "The value of the two numbers divided is: " << Divide_Numbers(val1, val2);
}
