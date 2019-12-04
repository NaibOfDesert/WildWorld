#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Swiat.h"
#include "Organizm.h"
#include "Zwierze.h"
#include "Roslina.h"
#include "Wilk.h"
using namespace std;

int main() {
	srand((unsigned int) time (NULL));
	Swiat *pangea = new Swiat();
	// cout << pangea << endl;
	Wilk* wilk_1 = new Wilk(*pangea, 0, 0);
	delete wilk_1;
	delete pangea;
	
	return 0;
}