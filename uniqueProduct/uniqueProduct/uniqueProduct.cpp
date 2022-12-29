#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include<Bits.h>
#include <unordered_map>

using namespace std;


std::string firstUniqueProduct(const std::vector<std::string>& products)
{
	map<string, int> mp;
	vector<string> result;
	
 	for (int i = 0; i < products.size(); i++)
	{
		mp[products[i]]++;
	}
	for (map<string, int>::iterator i = mp.begin();i!=mp.end();i++)
	{
		if (i->second == 1)
		{
			result.push_back(i->first);

		}
	}
	for (int i = 0; i < products.size(); i++)
	{
		for (int j = 0; j < result.size(); j++)
		{
			if (products[i] == result[j]) return result[j];
		}
	}
	return "";
}

#ifndef RunTests
int main()
{
    std::vector<std::string> products = { "Apple", "Computer", "Computer","Hoang","Hoang", "Apple", "Bag", "Car","Bin"};
    std::cout << firstUniqueProduct(products);
}
#endif
