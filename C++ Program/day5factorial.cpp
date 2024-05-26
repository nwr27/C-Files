include<iostream> using namespace std;

int factorial(int k) {
  if (k > 0) {
    return k * factorial(k - 1);
  } else if (k == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int k;
  cout << "Masukkan bilangan yang mau difaktorialkan: ";
  cin >> k;
  int hasil = factorial(k);
  if (hasil != 0) {
    cout << "\n***counting***\n\nFaktorial dari " << k << " adalah " << hasil;
  } else {
    cout << "\n***counting***\n\nFaktorial dari " << k << " tidak ada";
  }
  return 0;
}
