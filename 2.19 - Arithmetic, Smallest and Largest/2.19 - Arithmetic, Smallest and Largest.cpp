/* 2.19.) Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers. The screen dialog should appear as follows:
        Input three different integers: 13 27 14
        Sum is 54
        Average is 18
        Product is 4914
        Smallest is 13
        Largest is 27
        Programmer: Anna Le */

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    double num1;
    double num2;
    double num3;

    //Assigning values to variables
    cout << "User Values:" << endl;
    cout << "Integer 1: ";
    cin >> num1;
    cout << "Integer 2: ";
    cin >> num2;
    cout << "Integer 3: ";
    cin >> num3;

    cout << "\nArtithmetic Values:" << endl;
    
    //Sum of integers
    cout << "Sum: " << num1 + num2 << endl;

    //Average
    cout << "Average: " << (num1 + num2 + num3) / 3 << endl;

    //Product
    cout << "Product: " << num1 * num2 * num3 << endl;

    //Smallest
    cout << "Smallest Number: ";
    if ((num1 < num2) && (num1 < num3)) {
        cout << num1 << endl;
    }
    else if ((num2 < num1) && (num2 < num3)) {
        cout << num2 << endl;
    }
    else {
        cout << num3 << endl;
    }

    //Largest
    cout << "Largest Number: ";
    if ((num1 > num2) && (num1 > num3)) {
        cout << num1 << endl;
    }
    else if ((num2 > num1) && (num2 > num3)) {
        cout << num2 << endl;
    }
    else {
        cout << num3 << endl;
    }

    //Checking that the program runs right
    return 0;
}