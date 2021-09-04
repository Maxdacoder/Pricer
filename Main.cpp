#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

ofstream P_L;

int Main() {
string thing;

P_L.open("Price.txt");

vector<int> Prices;

cout << "Enter the prices of something and you will get the output...\n" <<
 "Enter the name of the object: ";
cin >> thing;
P_L << thing;

Prices.push_back(1);
Prices(0) = 13;
cout << Prices(0);



}
