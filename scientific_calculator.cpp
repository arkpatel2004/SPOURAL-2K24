/*This program is prepared by : Ark Patel
                                Hiren Modhvadia
                                Harsh Modi
*/                                
#include <iostream>
#include <math.h> // Include math library for mathematical functions.
using namespace std;

// Function prototypes
void add();
void multi();
double Convert(double);
double Convert1(double);

int main()
{
    double degree, radian;
    float a, b, PI;
    int c;
    cout << endl;
    cout << "********************************** Calculator *******************************\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "Operations\t"
         << "\tTrigonometric Functions"
         << "\t\tLogarithmic Functions\n";
    cout << "-----------------------------------------------------------------------------\n";
    cout << "1: Division\t\t"
         << "7: Sin\t\t"
         << "\t\t13: Log" << endl;
    cout << "2: Multiplication\t"
         << "8: Cos\t\t"
         << "\t\t14: Log with base 10" << endl;
    cout << "3: Subtraction\t\t"
         << "9: Tan\t\t\t\t"
         << "15: Degree to Radian" << endl;
    cout << "4: Addition\t\t"
         << "10: Inverse of Sin\t\t"
         << "16: Radian to Degree" << endl;
    cout << "5: Exponent\t\t"
         << "11: Inverse of Cos" << endl;
    cout << "6: Square root\t\t"
         << "12: Inverse of Tan" << endl;
    cout << "Enter the function that you want to perform : ";
    cin >> c;
    PI = 3.14159265; 

    // Switch statement to perform different operations based on user input.
    switch (c)
    {
    case 1:
        cout << "Enter 1st number : ";
        cin >> a;
        cout << "Enter 2nd number : ";
        cin >> b;
        cout << "Division = " << a / b << endl; // Perform division and display the result.
        break;
    case 2:
        multi(); // Call the multi function to perform multiplication.
        break;
    case 3:
        cout << "Enter 1st number : ";
        cin >> a;
        cout << "Enter 2nd number : ";
        cin >> b;
        cout << "Subtraction = " << a - b << endl; // Perform subtraction and display the result.
        break;
    case 4:
        add(); // Call the add function to perform addition.
        break;
    case 5:
        cout << "Enter the number : ";
        cin >> a;
        cout << "Enter the exponent : ";
        cin >> b;
        cout << "Exponent = " << pow(a, b) << endl; // Perform exponentiation and display the result.
        break;
    case 6:
        cout << "Enter the number : ";
        cin >> a;
        cout << "Square Root = " << sqrt(a) << endl; // Perform square root and display the result.
        break;
    case 7:
        cout << "Enter the number in radian : ";
        cin >> a;
        cout << "Sin = " << sin(a) << endl; // Perform sin and display the result.
        break;
    case 8:
        cout << "Enter the number in radian : ";
        cin >> a;
        cout << "Cos = " << cos(a) << endl; // Perform cosine and display the result.
        break;
    case 9:
        cout << "Enter the number in radian : ";
        cin >> a;
        cout << "Tan = " << tan(a) << endl; // Perform tan and display the result.
        break;
    case 10:
        cout << "Enter the number in radian : ";
        cin >> a;
        cout << "Inverse of Sin = " << asin(a) * 180.0 / PI << endl; // Perform inverse of sin and display the result.
        break;
    case 11:
        cout << "Enter the number in radian : ";
        cin >> a;
        cout << "Inverse of Cos = " << acos(a) * 180.0 / PI << endl; // Perform inverse of cos and display the result.
        break;
    case 12:
        cout << "Enter the number in radian : ";
        cin >> a;
        cout << "Inverse of tan = " << atan(a) * 180.0 / PI << endl; // Perform inverse of tan and display the result.
        break;
    case 13:
        cout << "Enter the number : ";
        cin >> a;
        cout << "Log = " << log(a) << endl;// Perform log and display the result.
        break;
    case 14:
        cout << "Enter the number : ";
        cin >> a;
        cout << "Log with base 10 = " << log10(a) << endl; // Perform log with base 10 and display the result.
        break;
    case 15:
        cout << "Enter degree : ";
        cin >> degree;
        radian = Convert(degree); // Call the function to convert degrees into radian.
        cout << "Radian = " << radian;
        break;
    case 16:
        cout << "Enter radian : ";
        cin >> radian;
        degree = Convert1(radian); // Call the function to convert radian into degree.
        cout << "Degree = " << degree;
        break;

    default:
        cout << "Wrong Input" << endl; // default case
    }
}

void add() // function defination for addition 
{
    int n, sum = 0, i, number;
    cout << "How many numbers you want to add : ";
    cin >> n;
    cout << "Please enter the number one by one: \n";
    for (i = 1; i <= n; i++)
    {
        cin >> number;
        sum = sum + number;
    }
    cout << "\n Sum of the numbers = " << sum;
}

void multi() // function defination of multiplication
{
    int mul = 1, n, i, number;
    cout << "How many numbers you want to multiply : ";
    cin >> n;
    cout << "Please enter the number one by one: \n";
    for (i = 1; i <= n; i++)
    {
        cin >> number;
        mul = mul * number;
    }
    cout << "\nMultiplication of the numbers  = " << mul;
}

double Convert(double degree) // function defination degree to radian
{
    double pi = 3.14159265359;
    return (degree * (pi / 180));
}

double Convert1(double radian) // function defination radian to degree
{
    double pi = 3.14159;
    return (radian * (180 / pi));
}