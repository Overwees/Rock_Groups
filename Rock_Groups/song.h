#pragma once
#include <string>
#include <exception>
#include <iostream>
#include "band.h"
using namespace std;
class song:
	public band
{
protected:
	string song_name;
	double song_duration;
public:

	song(string aband=" ",string sname = " ", double dur = 0);

	void SetSongName(string sname);
	string GetSongName()const;
	void SetDuration(double dur = 0);
	double GetDuration()const;
	friend ostream& operator<<(ostream&, const song&);
};

