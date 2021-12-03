#include "band.h"
band::band(string bname)
{
	SetBandName(bname);
}

void band::SetBandName(string bname)
{
	band_name = bname;
}

string band::GetBandName() const
{
	return band_name;
}

ostream& operator<<(ostream& s, const band& p)
{

	s << "Íàçâàíèå ðîê ãðóïïû: " << p.band_name ;

	return s;
}