#ifndef HALL_H;
#define HALL_H;

#include <iostream>
using namespace std;
const int x = 10;

class Hall {
private:
	int Id, type, date, start, end;
	string name[x], preference, request[x];

public:
	Hall();
	~Hall();
	void setId(int Id);
	void setType(int type);
	void setDate(int date);
	void setStart(int start);
	void setEnd(int end);
	void setName(string name[]);
	void setPreference(string preference);
	void setRequest(string request[]);

	int getId();
	int getType();
	int getDate();
	int getStart();
	int getEnd();
	string getName();
	string getPreference();
	string getRequest();

};

#endif HALL_H;
