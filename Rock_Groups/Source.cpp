#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include "band.h"
#include "album.h"
#include "musician.h"
#include "song.h"
using namespace std;
int main()
{
	unsigned numb;
	string bandname;
	vector <album> albums;
	vector <musician> musicians;
	vector <song> songs;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� ��� ��� ������:";
	getline(cin, bandname);
	band Rockg(bandname);

	cout << "������� ����� ����������:";
	cin >> numb;
	cin.ignore(1, '\n');
	for (unsigned i = 0; i < numb; i++)
	{
		string mname;
		string speciallity;
		int year;
		cout << i + 1 << "-� ��������" << endl;
		cout << "���:";
		getline(cin, mname);
		cout << "�������������:";
		getline(cin, speciallity);
		cout << "��� ��������:";
		cin >> year;
		cin.ignore(1, '\n');
		try
		{
			musician msn(bandname,mname, speciallity, year);
			musicians.push_back(msn);
		}
		catch (exception ex)
		{
			cout << ex.what() << endl;
			return 0;
		}
	}


	cout << "������� ���-�� ��������:";
	cin >> numb;
	cin.ignore(1, '\n');
	for (unsigned i = 0; i < numb; i++)
	{
		int year;
		string aname;
		cout << i + 1 << "-� ������" << endl;
		cout << "��������:";
		getline(cin, aname);
		cout << "��� �������:";
		cin >> year;
		cin.ignore(1, '\n');
		try
		{
			album al(bandname,year, aname);
			albums.push_back(al);
		}
		catch (exception ex)
		{
			cout << ex.what() << endl;
			return 0;
		}
	}


	cout << "������� ���-�� �����:";
	cin >> numb;
	cin.ignore(1, '\n');
	for (unsigned i = 0; i < numb; i++)
	{
		string sname;
		double dur;
		cout << i + 1 << "-� �����" << endl;
		cout << "��������:";
		getline(cin, sname);
		cout << "�����������������(� �������):";
		cin >> dur;
		cin.ignore(1, '\n');
		try
		{
			song sg(bandname,sname, dur);
			songs.push_back(sg);
		}
		catch (exception ex)
		{
			cout << ex.what() << endl;
			return 0;
		}
	}

	cout << "===============================" << endl;
	cout << Rockg << endl;
	cout << "===============================" << endl;
	for (unsigned i = 0; i < musicians.size(); i++)
	{
		cout << musicians[i];
	}
	cout << "===============================" << endl;
	for (unsigned i = 0; i < albums.size(); i++)
	{
		cout << albums[i];
	}
	cout << "===============================" << endl;
	for (unsigned i = 0; i < songs.size(); i++)
	{
		cout << songs[i];
	}
	return 0;
}