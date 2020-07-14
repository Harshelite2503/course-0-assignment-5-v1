#include <iostream>
#include <string>
using namespace std;

int Input() {
    int x;
    cout << "Enter the number :";
    cin >> x;
    return x;
}
int Factorial(int x){
  if(x==0)
  return 1;

  else
  return x * Factorial(x-1);

}

int main() {
  int number = Input();
  //int factorial = Factorial(number);
  if(number >= 0)
  cout << Factorial(number);
  else
  cout << "Factorial doesn't exist";

  return 0;
}
