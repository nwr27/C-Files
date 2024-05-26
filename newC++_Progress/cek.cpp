#include <iostream>
#include <typeinfo>

using namespace std;
char cek;

int main() {
  cout << cek;
  cout << typeid(cek).name();
  cout << "NANA";
  return 0;
}