#include <iostream>
#include "pch.h"
#include "Elementy.h"

using namespace std;

Elementy::Elementy(int dl, int sz, int x, int y, double elek, double ciep) 
{
	polozenie_x = x;
	polozenie_y = y;
	dlugosc = dl;
	szerokosc = sz;
	przew_elek = elek;
	przew_ciep = ciep;
}
Elementy::~Elementy() {}
int Elementy::pobierzpolozenie_x() { return polozenie_x; }
int Elementy::pobierzpolozenie_y() { return polozenie_y; }
int Elementy::pobierzdlugosc() { return dlugosc; }
int Elementy::pobierzszerokosc() { return szerokosc; }
double Elementy::pobierzelek() { return przew_elek; }
double Elementy::pobierzciep() { return przew_ciep; }
void Elementy::ustawpolozenie_x(int _polozeniex) { polozenie_x = _polozeniex; }
void Elementy::ustawpolozenie_y(int _polozeniey) { polozenie_y = _polozeniey; }
void Elementy::ustawdlugosc(int _dlugosc) { dlugosc = _dlugosc; }
void Elementy::ustawszerokosc(int _szerokosc) { szerokosc = _szerokosc; }
void Elementy::ustawelek(double _elek) { przew_elek = _elek; }
void Elementy::ustawciep(double _ciep) { przew_ciep = _ciep; }