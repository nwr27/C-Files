#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;

class user {
public:
  string frontName;
  string lastName;
  int age;
  string email;
};

int main() {
  user user1;
  user1.frontName = "Nana";
  user1.lastName = "Wartana";
  user1.age = 22;
  user1.email = user1.frontName + user1.lastName + "27@gmail.com";

  transform(user1.email.begin(), user1.email.end(), user1.email.begin(), [](unsigned char c) { return tolower(c); });

  cout << "\nMy name is " + user1.frontName + " " + user1.lastName << endl;
  cout << "I am ";
  cout << user1.age;
  cout << " years old." << endl;
  cout << "Please contact me via " + user1.email << endl
       << endl;
  return 0;
}