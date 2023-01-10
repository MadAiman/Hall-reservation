#include <iostream>
#include "Hall.h"
using namespace std;


Hall::Hall(){}
Hall::~Hall(){}
void Hall::setId(int id)
{
	Id = id;
}
void Hall::setType(int type)
{
	Type = type;
}
void Hall::setDate(int date)
{
	Date = date;
}
void Hall::setStart(int start)
{
	Start = start;
}
void Hall::setEnd(int end)
{
	End = end;
}
void Hall::setName(string name)
{
	Name = name;
}
void Hall::setPreference(string preference)
{
	Preference = preference;
}
void Hall::setRequest(string request)
{
	Request = request;
}


int Hall::getId()
{
	return Id;
}
int Hall::getType()
{
	return Type;
}
int Hall::getDate()
{
	return Date;
}
int Hall::getStart()
{
	return Start;
}
int Hall::getEnd()
{
	return End;
}
string Hall::getName()
{
	return Name;
}
string Hall::getPreference()
{
	return Preference;
}
string Hall::getRequest()
{
	return Request;
}