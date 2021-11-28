#include "song.h"

song::song(string aband,string sname, double dur):
	band(aband)
{
	SetSongName(sname);
	SetDuration(dur);
}

void song::SetSongName(string sname)
{
	song_name = sname;
}

string song::GetSongName() const
{
	return song_name;
}

void song::SetDuration(double dur)
{
	if (dur <= 0)
		throw exception("Invalid duration input");
	song_duration = dur;
}

double song::GetDuration() const
{
	return song_duration;
}

ostream& operator<<(ostream& s, const song& p)
{
	s << "Название песни - " << p.song_name << ", продолжительность - " << p.song_duration <<", рок-группа - " << p.band_name<< endl;
	return s;
}
