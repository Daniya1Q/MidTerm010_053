#include<iostream>
using namespace std;
int main() {
	char choice;
	do {
		int quantity, price, products;

		float taxrate;
		

		cout << "Enter quantity of product: ";
		cin >> quantity;
		cout << "Enter price of product: ";
		cin >> price;
		cout << "Enter Tax rate of product: ";
		cin >> taxrate;

		if (quantity >= 10) {
			price = price - (price * 0.10);

		}
		double totalcost = ((quantity * price) * taxrate);
		cout << "Total cost is: " << totalcost << endl;
		cout << "do you want to calculate total cost of multiple products (y/n): ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	return 0;
	

}