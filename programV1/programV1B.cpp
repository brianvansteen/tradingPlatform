#include <iostream>
#include <string>
#include <vector>

void printHello()
{
	std::cout << "Hello from other file!" << std::endl <<std::endl;
	char c = 0;
	std::cout << "char: " << sizeof(char) << std::endl << std::endl;
	signed int i = 0;
	std::cout << "signed int: " << sizeof(int) << std::endl << std::endl;
	float f = 0.0f;
	std::cout << "float: " << sizeof(float) << std::endl << std::endl;
	long double ld = 0.0;
	std::cout << "long double: " << sizeof(ld) << std::endl << std::endl;


	//double price = 5319.450228;
	//double amount = 0.00020075;
	//std::string timeStamp{ "2020/03/17 17:01:24" };
	//std:string product{ "BTC/USDT" };
	//std::string orderType{ "bid" };

	std::string s = "Astring";

	enum class OrderTypes { bid, ask };
	//OrderBookType orderType = OrderBookType::bid;

	std::vector<double> prices;
	std::vector<double> amounts;
	std::vector<std::string> timestamps;
	std::vector<std::string> products;
	std::vector<OrderTypes> orderTypes;

	prices.push_back(5319.450228);
	amounts.push_back(0.00020075);
	timestamps.push_back("2020/03/17 17:01:24");
	products.push_back("BTC/USDT");
	orderTypes.push_back(OrderTypes::bid);


	prices.push_back(5303.450228);
	amounts.push_back(0.00020075);
	timestamps.push_back("2020/03/17 17:01:28");
	products.push_back("BTC/USDT");
	orderTypes.push_back(OrderTypes::ask);

	std::cout << "Price 1: " << prices[0] << std::endl << std::endl;
	std::cout << "Price 2: " << prices[1] << std::endl << std::endl;



}