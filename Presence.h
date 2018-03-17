#pragma once
#include <string>

using namespace std;
class Presence
{
	string Course_code;
	int year;
	int semester;
	string ID;
	int week;
public:
	Presence(string code, int year, int semester, string ID, int week);
	void print_check_in_info();
	~Presence();
};

