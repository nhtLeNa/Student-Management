#include "Course.h"



Course::Course(string code, unsigned int year, unsigned int semester, string name, string lec_username, date st_date, date ed_date, time st_time, time ed_time, DoW day) {
	this->Course_code = code;
	this->year = year;
	this->semester = semester;
	this->name = name;
	this->Lecturer_username = lec_username;
	this->start_date = st_date;
	this->end_date = ed_date;
	this->start_time = st_time;
	this->end_time = ed_time;
	this->dow = day;
}


Course::~Course()
{
	this->Course_code.clear();
	this->name.clear();
	this->Lecturer_username.clear();
}
