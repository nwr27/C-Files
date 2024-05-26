// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>
#include <limits>

using namespace std;
float calculatorAritmatika(float a, float b, char opr);

int main() {
    // Write C++ code here
    float inputA, inputB, result;
    char inputOperator;
    
    while(1){
    cout << "BATRAI XVII CALCULATOR\n";
    cin >> ("%f", inputA);
    cout << (" ");
    cin >> ("%c", inputOperator);
    cout << (" ");
    
    cin >> ("%f", inputB);
    
    
    result = calculatorAritmatika(inputA, inputB, inputOperator);
    cout << " = " <<(result);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << ("\n\n");
    }
    return 0;
}

float calculatorAritmatika(float a, float b, char opr)
{
    float Result;
    while (opr =='+'){
        Result = a + b;
        break;
    }
    while (opr =='-'){
        Result = a - b;
        break;
    }
    while (opr =='*'){
        Result = a * b;
        break;
    }
    while (opr =='/'){
        Result = a / b;
        break;
    }
    return Result;
}
