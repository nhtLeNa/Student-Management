#include "Presence.h"
#include <iostream>


Presence::Presence(string code, int year, int semester, string ID, int week)
{
	this->Course_code = code;
	this->year = year;
	this->semester = semester;
	this->ID = ID;
	this->week = week;
}


Presence::~Presence()
{
	this->Course_code.clear();
	this->ID.clear();
}

void Presence::print_check_in_info() {
	cout << "Course code: " << this->Course_code << endl << "Year: " << this->year << endl << "Semester: " << this->semester << endl << "ID: " << this->ID << endl << "Presence week: " << this->week << endl;
}