// programV1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "programV1B.cpp"
#include <string>

void printHello();

enum class OrderBookType{bid, ask};

class OrderBookEntry
{
    public:

    // create constructor
    OrderBookEntry(double price,
                double amount,
                std::string timestamp,
                std::string product,
                OrderBookType ordertype)
    {
        this->price = price;
        this->amount = amount;
        this->timestamp = timestamp;
        this->product = product;
        this->ordertype = ordertype;
    }

        double price;
        double amount;
        std::string timestamp;
        std::string product;
        OrderBookType ordertype;
};

/* print the user menu */
void printMenu()
{
    // 1 print help
    std::cout << "1: Print help:" << std::endl;

    // 2 print exchange statistics
    std::cout << "2: Print exchange statistics:" << std::endl;

    // 3 make a trade offer
    std::cout << "3: Make a trade offer: " << std::endl;

    // 4 make a trade bid
    std::cout << "4: Make a trade bid:" << std::endl;

    // 5 print wallet contents
    std::cout << "5: Print contents of wallet:" << std::endl;

    // 6 continue time line
    std::cout << "6: continue in timeline:" << std::endl;

    // 7 exit
    std::cout << "7: exiting!" << std::endl << std::endl;

    std::cout << "=======================================" << std::endl;
}

void printHelp() // menu 1
{
    std::cout << "This is a trading platform." << std::endl << std::endl;
}

void exchangeStats() // menu 2
{
    std::cout << "Market is volatile." << std::endl << std::endl;
}

void makeOffer() // menu 3
{
    std::cout << "Make an offer." << std::endl << std::endl;
}

void makeBid() // menu 4
{
    std::cout << "Make a bid." << std::endl << std::endl;
}

void printWallet() // menu 5
{
    std::cout << "Your wallet is FULL!" << std::endl << std::endl;
}

void continueTrade() // menu 6
{
    std::cout << "Going to next time frame." << std::endl << std::endl;
}

int userInput()
{
    int userSelection;
    std::cout << "Make a selection from the options:" << std::endl;
    std::cin >> userSelection;
    std::cout << "You selected: " << userSelection << std::endl;
    return userSelection;
}

void processUserInput(int userSelection)
{
    if (userSelection < 1) // not valid selection
    {
        std::cout << "This is not a valid selection. Please select a value from the menu." << std::endl;
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
        std::cout << "This is not a valid selection. Please select a value from the menu." << std::endl << std::endl;
    }
}

int main()
{
    printHello();

    OrderBookEntry order1{10302,
                    0.0051824,
                    "2020/03/17 17:04:02.2234",
                    "BTC/USDT",
                    OrderBookType::bid};

    //order1.price = 10000;
    //order1.amount = 0.003183;
    //order1.timestamp = "2020/03/17 17:04:02.2234";
    //order1.product = "BTC/USDT";
    //order1.ordertype = OrderBookType::bid;

    std::cout << "The price is: " << order1.price << std::endl << std::endl;

    while (true) {

        printMenu();

        int userSelection = userInput();

        processUserInput(userSelection);

    };

    return 0;
}
