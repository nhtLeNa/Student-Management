#include "Score.h"



Score::Score(string code, int year, int semester, string ID, score_list score)
{
	this->Course_code = code;
	this->year = year;
	this->semester = semester;
	this->ID = ID;
	this->score = score;
}


Score::~Score()
{
	this->Course_code.clear();
	this->ID.clear();
}

void Score::print() {
	cout << "Course code: " << this->Course_code << endl << "Year: " << this->year << endl << "Semester: " << this->semester << endl << "Score: " << endl << "\tMidterm: " << this->score.midterm << endl << "\tLab: " << this->score.lab << endl << "\tFinal: " << this->score.final << endl;
}