#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "console.h"
#include "GeneralFeatures.h"
#define TEXTCOLOR 48
#define BGCOLOR 55
using namespace std;
enum STATE { UP, DOWN, LEFT, RIGHT, ENTER, BACK };
//ham xac dinh phim bam va dieu khien menu
STATE key(int z)
{
	if (z == 224)
	{
		char c = _getch();
		if (c == 72)
			return UP;
		if (c == 80)
			return DOWN;
		if (c == 77)
			return RIGHT;
		if (c == 75)
			return LEFT;
	}
	else if (z == 13)
		return ENTER;
}
int loginMenu(int n) {
	clrscr();
	TextColor(48);
	int *color = new int[2];
	for (int i = 0; i < n; i++)
		color[i] = TEXTCOLOR;
	color[0] = BGCOLOR;
	STATE state;
	int state_num = 0, z;
	User current_login;
	while (true) {
		clrscr();
		TextColor(48);
		gotoXY(0, 1);
		cout << "\t\t\t\t\t" << "STUDENT MANAGEMENT SYSTEM" << endl;
		cout << "\n\n\n";
		TextColor(color[0]);
		cout << "\t\t\t\t     " << "LOGIN" << endl;
		cout << "\n\n\n";
		TextColor(color[1]);
		cout << "\t\t\t\t     " << "EXIT" << endl;
		TextColor(BGCOLOR);
		z = _getch();
		state = key(z);
		switch (state) {
		case UP: {
			if (state_num == 0)
				state_num = 1;
			else
				state_num--;
			break;
		}
		case DOWN: {
			if (state_num == 1)
				state_num = 0;
			else
				state_num++;
			break;
		}
		case ENTER:
			break;
		}
		if (state == ENTER)
			if (state_num == 1) {
				//delete[] color;
				return state_num;
			}
			else {
				clrscr();
				gotoXY(0, 1);
				login(&current_login);
				current_login.printinfo();
				resetPassword(&current_login);
				//delete[] color;
				return state_num;
			}
		for (int i = 0; i < 2; i++)
			color[i] = TEXTCOLOR;
		color[state_num] = BGCOLOR;

	}
}
int menu(int n)
{
	int state_num = 0;//Bien chi dang o thao tac thu nhat
	typedef char str[30];
	str menu1[5] = { "USER","COURSE","PRESENCE","SCORE","LOGOUT" };
	int *color = new int[n];
	for (int i = 0; i < n; i++)
		color[i] = TEXTCOLOR;
	color[0] = BGCOLOR;//thao tac thu nhat
	while (true){
		clrscr();
		TextColor(48);
		gotoXY(0, 1);
		cout << "===========================================================MENU=========================================================" << endl;
		for (int i = 0; i < n - 1; i++){
			TextColor(color[i]);
			cout << "\n\n" << endl;
			cout << "\t\t\t\t\t\t\t" << i + 1 << "." << menu1[i] << endl;
		}
		TextColor(color[4]);
		gotoXY(0, 25);
		cout << "\t\t" << menu1[4] << endl;
		TextColor(48);
		gotoXY(0, 28);
		cout << "========================================================================================================================" << endl;
		int z = _getch();
		STATE state = key(z);
		switch (state)
		{
		case UP:{
			if (state_num == 0)
				state_num = n - 1;
			else
				state_num--;
			break;
		}
		case DOWN:{
			if (state_num == n - 1)
				state_num = 0;
			else
				state_num++;
			break;
		}
		case ENTER:{
			return state_num;
		}
		}
		for (int i = 0; i < n; i++)
			color[i] = TEXTCOLOR;
		color[state_num] = BGCOLOR;

	}
	
}