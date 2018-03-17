#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "User.h"
#include "Course.h"
#include "Presence.h"
#include "Score.h"
#include "GeneralFeatures.h"


using namespace std;

int main() {
	User current_login;
	login(&current_login);
	current_login.printinfo();
	resetPassword(&current_login);
	/*User student("1753123", "Pham Hoang Anh Tuan", "0000000000", "17CLC3");
	User Lec("Ho Tuan Thanh", "???", 2);*/
	/*date test;
	test.day = 1;
	test.month = 1;
	test.year = 1;
	time ttest;
	ttest.hour = 14;
	ttest.minute = 30;
	Course KTLT((string)"CTT008", 2018, 2, "Ky thuat lap trinh", Lec.getUsername(), test, test, ttest, ttest, Friday);
	student.printinfo();
	Lec.printinfo();*/

	/*resetPassword(&student);
	cout << student.getPassword() << endl;*/

	/*Presence test(static_cast<string>("CTT008"), 2018, 2, "1753123", 5);
	test.print_check_in_info();*/

	/*score_list temp;
	temp.midterm = 10;
	temp.lab = 10;
	temp.final = 10;
	Score test(static_cast<string> ("CTT008"), 2018, 2, "1753123", temp);
	test.print();*/
	//system("pause");
	return 0;
}