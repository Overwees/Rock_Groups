#pragma once
#include <string>
#include <exception>
#include <iostream>
using namespace std;
class song
{
protected:
	string song_name;
	double song_duration;
public:
	song(string sname, double dur);
	void SetSongName(string sname);
	string GetSongName()const;
	void SetDuration(double dur = 0);
	double GetDuration()const;
	friend ostream& operator<<(ostream&, const song&);
};

