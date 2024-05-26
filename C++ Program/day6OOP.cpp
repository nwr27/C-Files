#include <iostream>
using namespace std;

class myClass{          //Class
public:                 //Specifier
    string myString;    //Attribute
    int myNum;          //Attribute
};

int main(){
    myClass myObj;      //Objek (bisa lebih dari satu)
    myObj.myString = "Nana Wartana";
    myObj.myNum = 20;

    cout << "Hai, namaku " << myObj.myString << ". Aku berumur " << myObj.myNum << " tahun.\n";
}
