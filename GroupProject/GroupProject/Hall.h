#ifndef HALL_H;
#define HALL_H;

#include <iostream>
using namespace std;
const int x = 10;

class Hall {
private:
	int Id[x], Type;
	double Start, End;
	string Name[x] = { "Dewan A" , "Dewan B" , "Dewan C", "Dewan D" , "Dewan E"};
	string Preference, Request;

public:
	Hall();
	~Hall();
	void setId(int Id[x]);
	void setType(int type);
	void setDate(int date);
	void setStart(double start);
	void setEnd(double end);
	void setName(string name);
	void setPreference(string preference);
	void setRequest(string request);

	int getId();
	int getType();
	int getDate();
	double getStart();
	double getEnd();
	string getName();
	string getPreference();
	string getRequest();
};
#endif HALL_H;
