#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  // Eine Variable vom Typ int.
  int x = 42;

  // ... float
  double y = 42.5;

  // ... char
  char c = 'a';

  // ... String
  string s = "Ich bin wichtig.";
  s += " Wirklich!";

  vector<int> v{42, 23, 38};
  v.push_back(103);

  cout << x << endl;
  cout << y << endl;
  cout << c << endl;
  cout << s << endl;

  for (size_t i = 0; i < v.size(); i++) {
    cout << v[i] + 3 << " ";
  }
  cout << endl;

  for (int el : v) {
    cout << el + 3 << " ";
  }
  cout << endl;

  return 0;
}
