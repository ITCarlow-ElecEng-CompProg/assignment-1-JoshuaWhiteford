/**
 *Joshua Whiteford
 *02/10/2017
 *main.c
 *Temp Converter from Celcius to Fahrenheit
 */

/**< preprocessor directives */
#include <iostream>

using namespace std;

/**< Starting the function */
int main()
{
    /**< Setting the DataTypes */
    double TempC, TempF;

    /**< Introducing the User & Asking them to input the Temperature they Wish to convert  */
    cout << "Enter the Celsius temperature:" << endl;

    /**< Setting the inputed Values to the Temp */
    cin >> TempC;

    /**< Doing the Necessary Equations to convert The Temp */
    TempF = TempC * 1.8 +32;

    /**< Displaying the Result */
    cout << TempC << " C = " << TempF << " F" << endl;

    return 0;
}
