#pragma once
#include <iostream>
using namespace std;

class Wilk : public Zwierze
{
public:
	Organizm* wilk_wskaznik; //= this;
public:	
	Wilk(const Swiat &pangea, int w_x, int w_y);
	~Wilk();
	void UstawOrganizm(int w_x, int w_y);
	// void akcja(); 
	// void kolizja();
	// void rysowanie();
};

Wilk::Wilk(const Swiat &pangea, int w_x, int w_y) {
	cout << "Rodzi sie wilk " << this << " ." << endl;
	Organizm::set_swiat(pangea);
	Organizm::set_sila(9);
	Organizm::set_inicjatywa(5);
	this->Wilk::UstawOrganizm(w_x, w_y);
}

void Wilk::UstawOrganizm(int w_x, int w_y) {
	cout << "Ustawiam wilka w swiecie." << endl;
	// Swiat &UstawOrganizm(Organizm *wilk_wskaznik, int w_x = polozenie_x , int w_y = polozenie_y);
	// this->Swiat::UstawOrganizm(this, int w_x, int w_y);
	// this->Swiat.UstawOrganizm(Wilk, int w_x, int w_y);
	// &Swiat::UstawOrganizm(wilk_wskaznik, w_x, w_y); //albo?
	// &Swiat::UstawOrganizm(*wilk_wskaznik, w_x, w_y); // najlepsze?
	// Swiat &UstawOrganizm(*wilk_wskaznik, w_x, w_y);
	// _swiat.UstawOrganizm(this, w_x, w_y);
	cout << "Ustawilem wilka w swiecie." << endl;
}

Wilk::~Wilk() {
	cout << "Umiera wilk" << endl;
}
