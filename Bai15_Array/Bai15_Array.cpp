#include<iostream>
using namespace std;
int main()
{
	// Create an array of strings
	string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla" };

	// Loop through strings
	cars[2] = "Vinfast";
	for (int i = 0; i < 5; i++)
	{
		cout << cars[i] << "\n";
	}
	return 0;
}