#pragma once
#include <string>
#include <iostream>
using namespace std;
class band
{
protected:
	string band_name;
public:
	band(string bname=" ");
	void SetBandName(string bname);
	string GetBandName()const;
	friend ostream& operator<<(ostream&, const band&);
};