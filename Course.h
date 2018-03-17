#pragma once
#include <string>

using namespace std;

struct date {
	int day, month, year;
};

struct time {
	int hour, minute;
};

//Date of week
enum DoW {
	VOID_DOW,
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

class Course
{
	string Course_code;
	unsigned int year;
	unsigned int semester;
	string name;
	string Lecturer_username;
	date start_date;
	date end_date;
	time start_time;
	time end_time;
	DoW dow;
public:
	Course(string code, unsigned int year, unsigned int semester, string name, string lec_username, date st_date, date ed_date, time st_time, time ed_time, DoW day);
	~Course();
};

