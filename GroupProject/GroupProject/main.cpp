#include <iostream>
#include <String>
#include <iomanip>
#include "Hall.h"
#include "Client.h"

using namespace std;

void main()
{
	Hall hall;
	int id, type;
	double start, end;
	string name = "Dewan makan";
	string preference, request;

	cout << "\t\tWelcome to Beban Hall \n\t\t\twhere we provide all type of hall for all type of occasion" << endl;
	cout << "Take a glimpse at our hall";
	cout << hall.getName();
	
	cout << "\nStart date of the rent(dd.mm): ";
	cin >> start;
	hall.setStart(start);

	cout << "\nEnd date of the rent(dd.mm): ";
	cin >> end;
	hall.setEnd(end);




}