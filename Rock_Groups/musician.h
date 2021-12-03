#pragma once
#include <string>
#include <iostream>
#include "band.h"
using namespace std;
class musician:
	public band

{
protected:
	string musician_name;
	string speciallity;
	int birth_year;
public:
	musician(string aband=" ",string mname=" ", string spec = " ", int year = 0);
	void SetMusicianName(string mname);
	string GetMusicianName()const;
	void SetInstrument(string instr);
	string GetInstrument()const;
	void SetBirthYear(int year);
	int GetBirthYear()const;
	friend ostream& operator<<(ostream&, const musician&);
};

