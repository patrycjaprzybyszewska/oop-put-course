/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
class Bag {
 public:
	string notebook;
	string pencilcase;
	int NumberOfCrayons;
	int NumberOfPens;
};
class Room{
 public:
	string computers;
	string chair;
	int NumberOfChairs;
	int NumberOfComputers;
};
int main()
{
	Room ten;
	cout << "give numbers of chairs in room 10" << endl;
 	cin >> ten.NumberOfChairs;
    ten.NumberOfComputers = ten.NumberOfChairs;
	//cout << ten.NumberOfComputers << endl;
	ten.computers = "lenovo";
	ten.chair = "wooden";
	cout <<"number of chairs:  "<< ten.NumberOfChairs << "  type of chairs:  "<<ten.chair<<endl;
	cout <<"number of computers:  "<< ten.NumberOfComputers << "  type of computers:  "<<ten.computers;
	Bag backpack;
	backpack.notebook = "red";
	backpack.pencilcase = "big";
	backpack.NumberOfCrayons = 10;
	backpack.NumberOfPens = 7;
	return 0;
}
