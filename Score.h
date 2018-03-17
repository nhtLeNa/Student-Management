#pragma once
#include <iostream>
#include <string>

using namespace std;

struct score_list {
	double midterm, lab, final;
};
class Score
{
	string Course_code;
	int year;
	int semester;
	string ID;
	score_list score;
public:
	Score(string Code, int year, int semester, string ID, score_list score);
	~Score();
	void print();
};

