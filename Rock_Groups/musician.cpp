#include "musician.h"

musician::musician(string mname, string spec, int year)
{
    SetMusicianName(mname);
    SetInstrument(spec);
    SetBirthYear(year);
}

void musician::SetMusicianName(string mname)
{
    musician_name = mname;
}

string musician::GetMusicianName() const
{
    return musician_name;
}

void musician::SetInstrument(string spec)
{
    speciallity = spec;
}

string musician::GetInstrument() const
{
    return speciallity;
}

void musician::SetBirthYear(int year)
{
    if (year > 2021)
        throw exception("invalid birth year input");
    birth_year = year;
}

int musician::GetBirthYear() const
{
    return birth_year;
}

ostream& operator<<(ostream& s, const musician& p)
{
    s << "��� ��������� - " << p.musician_name << ", ������������� - " << p.speciallity << '\n';
    return s;
}
