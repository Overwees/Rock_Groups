#include "album.h"

album::album(string aband, unsigned year, string alname) :
	band(aband)
{
	SetalbumName(alname);
	SetRyear(year);
}

void album::SetalbumName(string alname)
{
	album_name = alname;
}

string album::GetalbumName()const
{
	return album_name;
}

void album::SetRyear(int year)
{
	if (year > 2021 || year < 1960)
		throw exception("invalid year input");
	realsile_year = year;
}

int album::GetRyear() const
{
	return realsile_year;
}

ostream& operator<<(ostream& s, const album& p)
{

	s << "Íàçâàíèå àëüáîìà - " << p.album_name << ", ãîä âûïóñêà - " << p.realsile_year <<", ðîê-ãðóïïà - " << p.band_name << endl;

	return s;
}
