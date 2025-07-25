#include <iostream>
#include <vector>
#include "Staff.h"

using namespace std;

void addStaff(vector<Staff>& v,int _no, string _name, string _position) {
	cout << endl;
	Staff s1(_no, _name, _position);
	v.push_back(s1);
	cout << "Adding Staff is successful\n";
}

void deleteStaff(vector<Staff>& v, int _no) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getStaffNo() == _no) {
			cout << endl << v[i].getName() << " is deleted\n";
			v.erase(v.begin() + i);
			break;
		}
	}
}

void listStaff(vector<Staff>& v) {
	
	cout << endl << "--- Staffs ---";
	for (const Staff& staff : v) {
		cout << endl;
		staff.print();
	}
	cout << endl;
}

void searchStaff(vector<Staff>& v, int _no) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getStaffNo() == _no) {
			cout << endl << v[i].getName() << " found\n";
			v[i].print();
			cout << endl;
			break;
		}
		cout << _no << " is not found ";
	}
}

int main() {
	vector<Staff> vStaff;
	bool boolean = true;
	int number, staffNo;
	string name, position;
	do {
		cout << "\n---- Staff Management System ----\n" << "1. Add Staff\n" << "2. List Staff\n" << 
			"3. Search Staff\n" << "4. Delete Staff\n" << "5. Exit\n" << "Make your choose:";
		cin >> number;
		while (cin.fail()) {
			cout << "Enter the integer: " << endl;
			cin.clear();            
			cin.ignore(1000, '\n'); 
			cin >> number;
		}
		switch(number){
		case 1:
			cout << "Enter staffNo:";
			cin >> staffNo;
			while (cin.fail()) {
				cout << "Enter the integer: " << endl;
				cin.clear();
				cin.ignore(1000, '\n');
				cin >> staffNo;
			}
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter position: ";
			cin >> position;
			addStaff(vStaff, staffNo, name, position);
			break;
		case 2:
			listStaff(vStaff);
			break;
		case 3:
			cout << "Enter staffNo:";
			cin >> staffNo;
			while (cin.fail()) {
				cout << "Enter the integer: " << endl;
				cin.clear();
				cin.ignore(1000, '\n');
				cin >> staffNo;
			}
			searchStaff(vStaff, staffNo);
			break;
		case 4:
			cout << "Enter staffNo:";
			cin >> staffNo;
			while (cin.fail()) {
				cout << "Enter the integer: " << endl;
				cin.clear();
				cin.ignore(1000, '\n');
				cin >> staffNo;
			}
			deleteStaff(vStaff, staffNo);
			break;
		case 5:
			boolean = false;
			break;
		default:
			cout << endl << "Enter valid option!!!" << endl;
		}

	} while (boolean == true);

	return 0;
}