#include <iostream>
using namespace std;
int const product = 5, day = 7;
int dailySales[day][product];
void registerSales() {
	for (int i = 0; i < day; i++)
	{
		cout << "Dia: " << i + 1 << endl;
		for (int j = 0; j < product; j++)
		{
			cout << "Producto " << j + 1 << " ingrese el total de ventas: ";
			cin >> dailySales[i][j];
		}
		cout<<endl;
	}
}

void registerSalescalculateTotalSales() {
	int count = 0;
	for (int i = 0; i < day; i++)
	{
		for (int j = 0; j < product; j++)
		{
			count += dailySales[i][j];
		}
		cout << "Total de ventas del dia " << i + 1 << " : " << count << endl;
		count = 0;
	}
}
int main()
{
	registerSales();
	registerSalescalculateTotalSales();
}