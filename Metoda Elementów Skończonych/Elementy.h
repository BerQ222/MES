#pragma once
class Elementy
{
private:
	int polozenie_x;
	int polozenie_y;
	int dlugosc;
	int szerokosc;
	double przew_elek;
	double przew_ciep;
public:
	Elementy(int dl, int sz, int x, int y, double elek, double ciep);
	~Elementy();
	int pobierzpolozenie_x();
	int pobierzpolozenie_y();
	int pobierzdlugosc();
	int pobierzszerokosc();
	double pobierzelek();
	double pobierzciep();
	void ustawpolozenie_x(int _polozeniex);
	void ustawpolozenie_y(int _polozeniey);
	void ustawdlugosc(int _dlugosc);
	void ustawszerokosc(int _szerokosc);
	void ustawelek(double _elek);
	void ustawciep(double _ciep);
};


