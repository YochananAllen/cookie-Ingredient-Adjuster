// cookie Ingredient Adjuster.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Yochanan Allen
// Date 09/20/2024 
//  Write a program that asks the user how many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the specified number of cookies.
//

#include <iostream>
using namespace std;

int main()
{
    const double sugerfor48 = 1.5;
    const double butterfor48 = 1.0;
    const double flourfor48 = 2.75;
    const int cookiesmade = 48;

    int cookieswanted;
    cout << " Enter the amout of cookies you want to make " << endl;
    cin >> cookieswanted;
    
    double sugerneeded = (sugerfor48 / cookiesmade) * cookieswanted;
    double butterneeded = (butterfor48 / cookiesmade) * cookieswanted;
    double flourneeded = (flourfor48 / cookiesmade) * cookieswanted;

    cout << "ingredents for " << cookieswanted << "cookies, you will need "<< endl;
    cout << "cups of suger " << sugerneeded << endl;
    cout << "cups of butter " << butterneeded << endl;
    cout << "cups of flour " << flourneeded << endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
