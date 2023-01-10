#include <iostream>
#include <String>
#include <iomanip>
#include "Hall.h"
using namespace std;

void main()
{
	Hall hall;
	int id, type, date, start, end;
	string name = "Dewan makan";
	string preference, request;

	cout << "Welcome to Beban Hall \n\t\t\twhere we provide all type of hall for all type of occasion";
	cout << "Take a glimpse at our hall";
	cout << hall.getName();
	cout << "Start date of the rent";
	cin >> date;
}