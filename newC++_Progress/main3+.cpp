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

  user() {
    frontName = "N/A";
    // lastName = "N/A";
    age = 0;
    email = "N/A";
  }
  user(string fname, string lname, int years) {
    frontName = fname;
    lastName = lname;
    age = years;
  }
};

void getInfo(user u) {
  transform(u.email.begin(), u.email.end(), u.email.begin(), [](unsigned char c) { return tolower(c); });
  cout << "\nMy name is " + u.frontName + " " + u.lastName << endl;
  cout << "I am ";
  cout << u.age;
  cout << " years old." << endl;
  cout << "Please contact me via " + u.email << endl
       << endl;
}

int main() {
  user user1("Nana", "Wartana", 22);
  user user2;
  getInfo(user1);
  getInfo(user2);
  return 0;
}