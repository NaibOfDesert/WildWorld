#pragma once
#include <iostream>
#include "Swiat.h"
using namespace std;
class Swiat;

class Organizm
{
public:
	int sila = 0;
	int inicjatywa = 0;
	int polozenie_x, polozenie_y;
	const Swiat *_swiat;
	// Swiat *_swiat = Swiat::Wskaznik();
public:
	Organizm();
	Organizm(Swiat const &pangea, int w_x, int w_y);
	virtual void akcja() = 0;
	virtual void kolizja() = 0;
	virtual void rysowanie() = 0;
	void set_swiat(Swiat const& pangea);
	void set_sila(int _sila);
	void set_inicjatywa(int _inicjatywa);
	virtual ~Organizm();
};

Organizm::Organizm() {
	this->_swiat = nullptr;
	this->polozenie_x = 0;
	this->polozenie_y = 0;
}

//cos jest nie tak
Organizm::Organizm(Swiat const &pangea, int w_x, int w_y){
	this->_swiat = &pangea;
	this->polozenie_x = w_x;
	this->polozenie_y = w_y;
	this->Organizm::set_swiat(pangea);
}

void Organizm::set_swiat(Swiat const& pangea) {
	this->_swiat = &pangea;
	cout << "Swiat organizmu to: " << this->_swiat << endl;
}

void Organizm::set_sila(int _sila) {
	this->sila = _sila;
	cout << "Sila organizmu to: " << this->sila << endl;
}

void Organizm::set_inicjatywa(int _inicjatywa) {
	this->inicjatywa = _inicjatywa;
	cout << "Inicjatywa organizmu to: " << this->inicjatywa << endl;
}

Organizm::~Organizm() {

}
