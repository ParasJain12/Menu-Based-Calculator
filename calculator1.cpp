/****************************MINOR PROJECT ON MENU BASED CALCULATION*******************************/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
#define new_cal 1
#define old_cal 0
class stand_calc
{
    public:
      static double addition(double,double);
      static double subtraction(double,double);
      static double multiplication(double,double);
      static double division(double,double*);
      static double modulus(double *,double *);
};
class scien_calc
{
    public:
      static double square(double);
      static double cube(double);
      static double power(double,double);
      static double sq_root(double);
      static double sin_fnc(double);
      static double cos_fnc(double);
      static double tan_fnc(double);
};
double stand_calc :: addition(double a,double b)
{
    return (a + b);
}
double stand_calc :: subtraction(double a,double b)
{
    return (a - b);
}
double stand_calc :: multiplication(double a,double b)
{
    return (a * b);
}
double stand_calc :: division(double a,double *b)
{
    while(*b == 0)
    {
        cout << "\nCannot divide by zero" << endl;
        cout << "Enter a second number again\n" << endl;
        cin >> *b;
    }
    return (a/(*b));
}
double stand_calc :: modulus(double *a,double *b)
{
    while(*b == 0)
    {
        cout << "\nCannot divide by zero" << endl;
        cout << "Enter a second number again\n" << endl;
        cin >> *b;
    }
    int x = (int)*a;
    int y = (int)*b;
    if((*a-x > 0) || (*b-y > 0))
    {
        cout << "\nConverting decimal number into integer value to perform modulus operation\n" << endl;
    }
    *a = x;
    *b = y;
    return (x % y);
}
double scien_calc :: square(double x)
{
    return (pow(x,2));
}
double scien_calc :: cube(double x)
{
    return (pow(x,3));
}
double scien_calc :: power(double x,double y)
{
    return (pow(x,y));
}
double scien_calc :: sq_root(double x)
{
    return (sqrt(x));
}
double scien_calc :: sin_fnc(double x)
{
    return (sin(x));
}
double scien_calc :: cos_fnc(double x)
{
    return (cos(x));
}
double scien_calc :: tan_fnc(double x)
{
    return (tan(x));
}
int main()
{
    double num1,num2,num3,temp;
    int choice1=0,choice2,flag;
    do
    {
        cout << "\n******************TYPES OF CALCULATOR*******************\n";
        cout <<"\n 1.Standard Calculator\n 2.Scientific Calculator\n 3. Quit\n";
        cout << "Choose the type of calculator\n";
        cin >> choice1;
        flag = new_cal;
        switch(choice1)
        {
            case 1:
            do
            {
                cout << "\n**********************Standard Calculator***********************\n";
                cout << "\n 1. Addition\n";
                cout << "\n 2. Subtraction\n";
                cout << "\n 3. Multiplication\n";
                cout << "\n 4. Division\n";
                cout << "\n 5. Modulus\n";
                cout << "\n 6. Return to previous menu\n";
                cout << "\n 7. Quit\n";
                if(flag == old_cal)
                {
                    cout << "\n 8. Clear memory\n";
                }
                cout << "\nChoose the type of calculation\n";
                cin >> choice2;
                switch(choice2)
                {
                    case 1: 
                    if(flag == new_cal)
                    {
                        cout << "Enter first number\n";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "First number is : " << num1 << endl;
                    }
                    cout << "Enter second number: " << endl;
                    cin >> num2;
                    num3 = stand_calc :: addition(num1,num2);
                    cout << "\nAddition of " << num1 << " and " << num2 << " is " << num3 << endl;
                    cout << "Press any key to continue\n";
                    
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 2: 
                    if(flag == new_cal)
                    {
                        cout << "Enter first number\n";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "First number is : " << num1 << endl;
                    }
                    cout << "Enter second number: " << endl;
                    cin >> num2;
                    num3 = stand_calc :: subtraction(num1,num2);
                    cout << "\nSubtraction of " << num1 << " and " << num2 << " is " << num3 << endl;
                    cout << "Press any key to continue\n";
                    
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 3: 
                    if(flag == new_cal)
                    {
                        cout << "Enter first number\n";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "First number is : " << num1 << endl;
                    }
                    cout << "Enter second number: " << endl;
                    cin >> num2;
                    num3 = stand_calc :: multiplication(num1,num2);
                    cout << "\nMultiplication of " << num1 << " and " << num2 << " is " << num3 << endl;
                    cout << "Press any key to continue\n";
                   
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 4: 
                    if(flag == new_cal)
                    {
                        cout << "Enter first number\n";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "First number is : " << num1 << endl;
                    }
                    cout << "Enter second number: " << endl;
                    cin >> num2;
                    num3 = stand_calc :: division(num1,&num2);
                    cout << "\nDivision of " << num1 << " and " << num2 << " is " << num3 << endl;
                    cout << "Press any key to continue\n";
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 5: 
                    if(flag == new_cal)
                    {
                        cout << "Enter first number\n";
                        cin >> num1;
                    }
                    else
                    {
                        num1 = temp;
                        cout << "First number is : " << num1 << endl;
                    }
                    cout << "Enter second number: " << endl;
                    cin >> num2;
                    num3 = stand_calc :: modulus(&num1,&num2);
                    cout << "\nModulus of " << num1 << " and " << num2 << " is " << num3 << endl;
                    cout << "Press any key to continue\n";
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 6:
                    cout << "Returning to previous menu\n";
                    cout << "Press any key to continue\n";
                    break;
                    case 7:
                    cout << "*************QUIT*************\n";
                    cout << "Press any key to continue\n";
                    exit(0);
                    case 8:
                    if(flag == new_cal)
                    {
                        cout << "\nInvalid choice\n";
                        cout << "Press any key to continue\n";
                    }
                    else{
                        temp = 0;
                        flag = new_cal;
                    }
                    break;
                    default: 
                    cout << "\nInvalid choice\n";
                    cout << "Press any key to continue\n";
                    break;
                }
            }while(choice2 != 6);
            break;
            case 2:
            do
            {
                cout << "\n**********************Scientific Calculator*********************\n";
                cout << "\n 1. Square\n";
                cout << "\n 2. Cube\n";
                cout << "\n 3. Power\n";
                cout << "\n 4. Square root\n";
                cout << "\n 5. Sin\n";
                cout << "\n 6. Cos\n";
                cout << "\n 7. Tan\n";
                cout << "\n 8. Return to previous menu\n";
                cout << "\n 9. Quit\n";
                if(flag == old_cal)
                {
                    cout << "\n 10. Clear memory\n";
                }
                cout << "Choose the type of calculation\n";
                cin >> choice2;
                switch(choice2)
                {
                    case 1:
                    if(flag == new_cal)
                    {
                        cout << "Enter number to find square: ";
                        cin >> num1;
                    }
                    else{
                        num1 = temp;
                        cout << "Number is : " << num1 << endl;
                    }
                    num3 = scien_calc :: square(num1);
                    cout << "\nSquare of " << num1 << " is" << num3 << endl;
                    cout << "\nPress any key to continue\n";
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 2:
                    if(flag == new_cal)
                    {
                        cout << "Enter number to find cube: ";
                        cin >> num1;
                    }
                    else{
                        num1 = temp;
                        cout << "Number is : " << num1 << endl;
                    }
                    num3 = scien_calc :: cube(num1);
                    cout << "\nCube of " << num1 << " is" << num3 << endl;
                    cout << "\nPress any key to continue\n";
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 3:
                    if(flag == new_cal)
                    {
                        cout << "Enter number to find power: ";
                        cin >> num1;
                    }
                    else{
                        num1 = temp;
                        cout << "Number is : " << num1 << endl;
                    }
                    cout << "Enter second number for power\n";
                    cin >> num2;
                    num3 = scien_calc :: power(num1,num2);
                    cout << "\nPower of " << num1 << " is" << num3 << endl;
                    cout << "\nPress any key to continue\n";
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 4:
                    if(flag == new_cal)
                    {
                        cout << "Enter number to find square root: ";
                        cin >> num1;
                    }
                    else{
                        num1 = temp;
                        cout << "Number is : " << num1 << endl;
                    }
                    num3 = scien_calc :: sq_root(num1);
                    cout << "\nSquare root of " << num1 << " is" << num3 << endl;
                    cout << "\nPress any key to continue\n";
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 5:
                    if(flag == new_cal)
                    {
                        cout << "Enter number to find sin: ";
                        cin >> num1;
                    }
                    else{
                        num1 = temp;
                        cout << "Number is : " << num1 << endl;
                    }
                    num3 = scien_calc :: sin_fnc(num1);
                    cout << "\nSin function of " << num1 << " is" << num3 << endl;
                    cout << "\nPress any key to continue\n";
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 6:
                    if(flag == new_cal)
                    {
                        cout << "Enter number to find cos: ";
                        cin >> num1;
                    }
                    else{
                        num1 = temp;
                        cout << "Number is : " << num1 << endl;
                    }
                    num3 = scien_calc :: cos_fnc(num1);
                    cout << "\nCos function of " << num1 << " is" << num3 << endl;
                    cout << "\nPress any key to continue\n";
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 7:
                    if(flag == new_cal)
                    {
                        cout << "Enter number to find tan: ";
                        cin >> num1;
                    }
                    else{
                        num1 = temp;
                        cout << "Number is : " << num1 << endl;
                    }
                    num3 = scien_calc :: tan_fnc(num1);
                    cout << "\nTan function of " << num1 << " is" << num3 << endl;
                    cout << "\nPress any key to continue\n";
                    temp = num3;
                    flag = old_cal;
                    break;
                    case 8:
                    cout << "\nReturning to previous menu\n";
                    cout << "\nPress any key to continue\n";
                    break;
                    case 9:
                    cout << "\n*************Quit*************\n";
                    cout << "\nPress any key to continue\n";
                    exit(0);
                    case 10:
                    if(flag == new_cal)
                    {
                        cout << "\nInvalid choice\n";
                        cout << "\nPress any key to continue\n";
                    }
                    else
                    {
                        temp = 0;
                        flag = new_cal;
                    }
                    break;
                    default:
                    cout << "\nInvalid choice\n";
                    cout << "\nPress any key to continue\n";
                    break;
                }
            }while(choice2 != 9);
            break;
            case 3:
            cout << "\n****************Quit****************\n";
            cout << "\n Press any key to continue\n";
            break;
            default:
            cout << "\nInvalid choice\n";
            cout << "\nPress any key to continue\n";
            break;
        }
    }while(choice1 != 3);
    return 0;
}