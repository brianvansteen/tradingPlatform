// programV1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


/* print the user menu */
void printMenu()
{
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
    cout << "6: continue in timeline:" << endl;

    // 7 exit
    cout << "7: exiting!" << endl << endl;

    cout << "=======================================" << endl;
}

void printHelp() // menu 1
{
    cout << "This is a trading platform." << endl << endl;
}

void exchangeStats() // menu 2
{
    cout << "Market is volatile." << endl << endl;
}

void makeOffer() // menu 3
{
    cout << "Make an offer." << endl << endl;
}

void makeBid() // menu 4
{
    cout << "Make a bid." << endl << endl;
}

void printWallet() // menu 5
{
    cout << "Your wallet is FULL!" << endl << endl;
}

void continueTrade() // menu 6
{
    cout << "Going to next time frame." << endl << endl;
}

int userInput()
{
    int userSelection;
    cout << "Make a selection from the options:" << endl;
    cin >> userSelection;
    cout << "You selected: " << userSelection << endl;
    return userSelection;
}

void processUserInput(int userSelection)
{
    if (userSelection < 1) // not valid selection
    {
        cout << "This is not a valid selection. Please select a value from the menu." << endl;
    }
    else if (userSelection == 1)
    {
        printHelp();
    }
    else if (userSelection == 2)
    {
        exchangeStats();
    }
    else if (userSelection == 3)
    {
        makeOffer();
    }
    else if (userSelection == 4)
    {
        makeBid();
    }
    else if (userSelection == 5)
    {
        printWallet();
    }
    else if (userSelection == 6)
    {
        continueTrade();
    }
    else if (userSelection > 7) // not valid selection
    {
        cout << "This is not a valid selection. Please select a value from the menu." << endl << endl;
    }
}

int main()
{

    while (true) {

        printMenu();

        int userSelection = userInput();

        processUserInput(userSelection);

    };

    return 0;
}

