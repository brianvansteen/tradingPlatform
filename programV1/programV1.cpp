// programV1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "programV1B.cpp"
#include <string>

void printHello();

enum class OrderBookType{bid, ask};

class OrderBookEntry // name of the class
{
public:

    // create constructor, preferred method

    OrderBookEntry(double _price,
        double _amount,
        std::string _timestamp,
        std::string _product,
        OrderBookType _ordertype) // constructor with input values from call

        // implementation of the constructor
        :price(_price),
        amount(_amount),
        timestamp(_timestamp),
        product(_product),
        ordertype{_ordertype}

    //OrderBookEntry(double price,
    //            double amount,
    //            std::string timestamp,
    //            std::string product,
    //            OrderBookType ordertype)
    {
        //this->price = price;
        //this->amount = amount;
        //this->timestamp = timestamp;
        //this->product = product;
        //this->ordertype = ordertype;
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

    std::vector<OrderBookEntry> orders;

    //OrderBookEntry order1{10302,
    //                0.0051824,
    //                "2020/03/17 17:04:02.2234",
    //                "BTC/USDT",
    //                OrderBookType::bid};

    // call the constructor directly, instead of a variable of a constructor
    orders.push_back(OrderBookEntry{ 10302,
        0.0051824,
        "2020/03/17 17:04:02.2234",
        "BTC/USDT",
        OrderBookType::bid });

    orders.push_back(OrderBookEntry{ 12302,
    0.0081824,
    "2020/03/17 17:08:02.2234",
    "BTC/USDT",
    OrderBookType::ask });

    //order1.price = 10000;
    //order1.amount = 0.003183;
    //order1.timestamp = "2020/03/17 17:04:02.2234";
    //order1.product = "BTC/USDT";
    //order1.ordertype = OrderBookType::bid;

    //std::cout << "The price is: " << order1.price << std::endl << std::endl;
    std::cout << "The price is: " << orders[0].price << std::endl << std::endl;
    std::cout << "The price is: " << orders[1].price << std::endl << std::endl;

    for (OrderBookEntry& order : orders) // call by reference
    {
    std::cout << "The first price is: " << order.price << std::endl << std::endl;
    }

    for (unsigned int i = 0; i < orders.size(); ++i)
    {
        std::cout << "The second price is: " << orders[i].price << std::endl << std::endl;
    }

    for (unsigned int i = 0; i < orders.size(); ++i)
    {
        std::cout << "The third price is: " << orders.at(i).price << std::endl << std::endl;
    }

    enum class Day{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    Day today{ Day::Saturday };
    std::cout << "Today is: " << static_cast<int>(today)<<std::endl<<std::endl;

    std::vector<long> various_numbers(3, 10L);
    std::cout <<"FIRST: "<< various_numbers[0] << std::endl;
    various_numbers.push_back(7);
    for (long i : various_numbers)
        std::cout << i << ' ' << std::endl;

    double sum{};
    unsigned count{};
    double temperatures[]{ 45,5, 5.1, 48.2, 100.9, 63.8, 22.0 };
    for (auto t : temperatures)
    {
        sum += t;
        ++count;
    };
    std::cout << "Temperature sum: " << sum << " Temperature count: " << count << std::endl<<std::endl;

    while (true) {

        printMenu();

        int userSelection = userInput();

        processUserInput(userSelection);

    };

    return 0;
}
