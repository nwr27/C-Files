#include <iostream>
using namespace std;

int main() {
  int tall;
  cout << "How is tall : ";
  cin >> tall;
  for (int i = 1; i <= tall; ++i) {
    for (int j = 1; j <= i; ++j) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}