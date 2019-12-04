#pragma once
#include <iostream>
using namespace std;
class Organizm;

class Swiat
{
public:
	friend Organizm;
	int organizmy;
	const int wielkosc = 20;
	Organizm *mapa_swiata[20][20];
public:
	Swiat();
	void RysujSwiat(ostream& out = cout);
	// czy static??? raczej nie
	void UstawOrganizm(Organizm *o, int x, int y);
	Swiat& Wskaznik();
	// WykonajTure();
	~Swiat();
};

Swiat::Swiat() { // mapa_swiata nie zainicjowana???
	this->organizmy = 0;
	for (int i = 0; i < this->wielkosc; i++) {
		for (int j = 0; j < this->wielkosc; j++) {
			this->mapa_swiata[i][j] = nullptr; 
			// cout << i << "," << j << ":" << this->mapa_swiata[i][j];
		};
	};
}

void Swiat::RysujSwiat(ostream& out) {
}

void Swiat::UstawOrganizm(Organizm *o, int x, int y) {
	this->organizmy = organizmy + 1;
	this->mapa_swiata[x][y] = o;
	cout << this->mapa_swiata[x][y] << endl;
}

Swiat& Swiat::Wskaznik() {
	return *this;
}

Swiat::~Swiat() {
	cout << "Niszcze swiat." << endl;
	for (int i = 0; i < this->wielkosc; i++) {
		for (int j = 0; j < this->wielkosc; j++) {
			//	cout << this->mapa_swiata[i][j] << " ";
		};
	};
}

