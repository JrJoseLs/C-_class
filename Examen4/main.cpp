
#include <iostream>    //  Si  Number = 10

#include <cmath>


using namespace std;

int main()

{

    double number, squareRoot;

    cout << "Enter a number: ";
    cin >> number;

    // sqrt() is a library function to calculate square root
    squareRoot = sqrt(number);
    cout << "Square root of " << number << " = " << squareRoot;

    return 0;

}
