#pragma once
#include <string>
#include <iostream>
using namespace std;
class album
{
protected:
	string album_name;
	int realsile_year;
public:
	album(unsigned year, string alname);
	void SetalbumName(string alname);
	string GetalbumName()const;
	void SetRyear(int year);
	int GetRyear()const;
	friend ostream& operator<<(ostream&, const album&);
};

