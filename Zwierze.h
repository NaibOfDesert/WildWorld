#pragma once
#include <iostream>
using namespace std;

class Zwierze : public Organizm
{
public:
	Zwierze();
	void akcja();
	void kolizja();
	void rysowanie();
	~Zwierze();
};

Zwierze::Zwierze() {

}

void Zwierze::akcja() {
	if (Organizm::polozenie_x == 0)
		Organizm::polozenie_x += rand() % 2;
	if (Organizm::polozenie_x == 19)
		Organizm::polozenie_x -= rand() % 2;
	if (Organizm::polozenie_x > 0 && Organizm::polozenie_x < 19)
		Organizm::polozenie_x -= rand() % 3 - 1;
	if (Organizm::polozenie_y == 0)
		Organizm::polozenie_y += rand() % 2;
	if (Organizm::polozenie_y == 19)
		Organizm::polozenie_y -= rand() % 2;
	if (Organizm::polozenie_y > 0 && Organizm::polozenie_y < 19)
		Organizm::polozenie_y -= rand() % 3 - 1;
}

void Zwierze::kolizja() {

}

void Zwierze::rysowanie(){

}

Zwierze::~Zwierze() {

}