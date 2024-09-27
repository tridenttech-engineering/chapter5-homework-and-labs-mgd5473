//hw5-12.cpp - displays the total owed
//Created/revised by <gracie dean> on <09/27/24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double itemPrice1 = 0.0;
	double itemPrice2 = 0.0;
	const double DISCOUNT = 0.5;
	double total = 0.0;

	cout << "Enter price of item 1: ";
	cin >> itemPrice1;
	cout << "Enter price of item 2: ";
	cin >> itemPrice2;

	if (itemPrice1 < itemPrice2){
		itemPrice1 = itemPrice1 - (itemPrice1 * DISCOUNT);
	}
else {
		itemPrice2 = itemPrice2 - (itemPrice2 * DISCOUNT);
	//end if
	}
	total = itemPrice1 + itemPrice2;
	
	cout << fixed << setprecision(2);
	cout << "Total: $" << total << endl;
	
	return 0;
}	//end of main function