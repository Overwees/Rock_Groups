#pragma once
#include <string>
#include <iostream>
using namespace std;
class musician
{
protected:
	string musician_name;
	string speciallity;
	int birth_year;
public:
	musician(string mname, string spec, int year);
	void SetMusicianName(string mname);
	string GetMusicianName()const;
	void SetInstrument(string instr);
	string GetInstrument()const;
	void SetBirthYear(int year);
	int GetBirthYear()const;
	friend ostream& operator<<(ostream&, const musician&);
};

