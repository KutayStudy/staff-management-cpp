#include "Staff.h"


Staff::Staff(int staffNo, string name, string position) {
	this->staffNo = staffNo;
	this->name = name;
	this->position = position;
};

Staff::~Staff() {

}

void Staff::print() const {
	cout << "Staff No: " << staffNo << endl << "Name: " << name << endl << "Position: " << position << endl;
};

int Staff::getStaffNo() const{
	return staffNo;
}

string Staff::getName() const{
	return name;
}

string Staff::getPosition() const{
	return position;
}