#include <iostream>

using namespace std;

// block comment is select what you want, then crtl + / 
// / is the ? button

// || is called a pipe

int main(void) {
  bool answer;
  int value;
  cout << "Enter a value: ";
  cin >> value;
  // I could add a ton of () but it may make the code less clear

  answer = (value >= 0 && value < 10) || ((value * 2) < 20 && (value - 2) > -2) || ((value - 1) > 1 && (value / 2) < 10) || (value == 111);

  cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
  return 0;
}