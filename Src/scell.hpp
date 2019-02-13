#include <iostream>
#include <vector>

class SCell {
	public:
		int valeur;
		std::vector<SCell*> sc; // shortcuts

		SCell(int _valeur);
		SCell();
};
