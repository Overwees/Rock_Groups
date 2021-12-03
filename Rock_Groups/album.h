#pragma once
#include <string>
#include <iostream>
#include "band.h"
using namespace std;
class album :
	public band
{
protected:
	string album_name;
	int realsile_year;
public:
	album(string aband=" ",unsigned year = 0, string alname = " ");
	void SetalbumName(string alname);
	string GetalbumName()const;
	void SetRyear(int year);
	int GetRyear()const;
	friend ostream& operator<<(ostream&, const album&);
};

