#include <iostream>

using namespace std;

/// Gibt x Zeilen mit jeweils x Sternen aus.
void print_square(int x);

int main() {
  cout << "Wie breit soll das Quadrat sein" << endl;
  cout << "Gib eine Zahl ein: ";

  int x;
  cin >> x;

  print_square(x);
  return 0;
}

void print_square(int x) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
