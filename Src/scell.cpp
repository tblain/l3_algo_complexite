#include "scell.hpp"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

SCell::SCell(int _valeur) {
	srand (time(NULL));
	valeur = _valeur;
	sc.push_back(nullptr);
	//std::cout << "sc: " << sc.at(0) <<  std::endl;

	while(rand() % 2 == 1) {
		sc.push_back(nullptr);
	}
}

SCell::SCell() {
	srand (time(NULL));
	valeur = 0;
	sc.push_back(nullptr);

	while(rand() % 2 == 1) {
		sc.push_back(nullptr);
	}
}
