#include <iostream>
#include <string>
using namespace std;

float Get_Temperature(int input) {
  return input * 1;
}

float get_temperature(float input) {
  return input * 100;
}

int main() {
  cout << "the temperature should be 6: " << Get_Temperature(6);
}
