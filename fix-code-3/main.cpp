#include <iostream>
#include <string>
using namespace std;
string s;
string addprefix(const string input) {
  return "pre" +  s;
}

int main() {
  string s;
  cout << "Please type a word: ";
  cin >> s;
  cout << "Your word with pre added is: " << addprefix(s);
}
