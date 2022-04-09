// programV1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    
    int userSelection;
    
    // 1 print help
    cout << "1: Print help:" << endl;

    // 2 print exchange statistics
    cout << "2: Print exchange statistics:" << endl;

    // 3 make a trade offer
    cout << "3: Make a trade offer: " << endl;

    // 4 make a trade bid
    cout << "4: Make a trade bid:" << endl;

    // 5 print wallet contents
    cout << "5: Print contents of wallet:" << endl;

    // 6 continue time line
    cout << "6: continue in timeline:" << endl << endl;

    cout << "=======================================" << endl;

    cout << "Make a selection from the options:" << endl;
    cin >> userSelection;
    cout << "You selected: " << userSelection << endl;


    return 0;
}

