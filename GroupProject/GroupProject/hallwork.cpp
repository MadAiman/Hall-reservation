#include <iostream>
#include "Hall.h"
using namespace std;


Hall::Hall(){}
Hall::~Hall(){}

void Hall::setType(int type)
{
	Type = type;
}
void Hall::setStart(double start)
{
	Start = start;
}
void Hall::setEnd(double end)
{
	End = end;
}
void Hall::setPreference(string preference)
{
	Preference = preference;
}
void Hall::setRequest(string request)
{
	Request = request;
}


int Hall::getType()
{
	return Type;
}
double Hall::getStart()
{
	return Start;
}
double Hall::getEnd()
{
	return End;
}
string Hall::getPreference()
{
	return Preference;
}
string Hall::getRequest()
{
	return Request;
}