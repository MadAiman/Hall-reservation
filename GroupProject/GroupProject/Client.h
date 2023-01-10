#ifndef CLIENT_H;
#define CLIENT_H;

#include <iostream>
#include "Hall.h"
using namespace std;

class Client : public Hall{
private:
	int Id, Phone;
	string Name, Email;
	
public:

	Client();
	~Client();

	void setId(int id)
	{
		Id = id;
	}
	void setPhone(int phone)
	{
		Phone = phone;
	}
	void setName(string name)
	{
		Name = name;
	}
	void setEmail(string email)
	{
		Email = email;
	}

	int getId()
	{
		return Id;
	}
	int getPhone()
	{
		return Phone;
	}
	string getName()
	{
		return Name;
	}
	string getEmail()
	{
		return Email;
	}
};

#endif