#include <iostream>
#include <string>
using namespace std;
string s;
string Add_Prefix(const string input) {
  return "pre" + input;
}

int main() {
  string s;
  cout << "Please type a word: ";
  cin >> s;
  cout << "Your word with pre added is: " << Add_Prefix(s);
}
