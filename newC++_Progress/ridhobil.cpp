#include <iostream>
using namespace std;

int main() {
  int bil;
  int i = 1;
  int n;

  cout << "PROGRAM MENAMPILKAN DERET BILANGAN PRIMA" << endl;
  cout << "Masukan angka : ";
  cin >> n;

  while (i <= n) {
    bil = 0;
    int j = 1;
    while (j <= i) {
      if (i % j == 0) {
        bil = bil + 1;
      }
      j++;
    }
    if (bil == 2) {
      cout << i << " ";
    }
    i++;
  }
}