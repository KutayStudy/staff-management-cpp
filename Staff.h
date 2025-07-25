#pragma once
#include <iostream>
#include <string>

using namespace std;

class Staff{
private:
	int staffNo;
	string name;
	string position;
public:

	Staff(int staffNo, string name, string position);
	~Staff();
	void print() const;
	int getStaffNo() const;
	string getName() const ;
	string getPosition() const;


};

