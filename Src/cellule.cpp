#include "cellule.hpp"

Cellule::Cellule(int _valeur) : valeur(_valeur) {next_cell = nullptr;}
Cellule::Cellule() { next_cell = nullptr; valeur = 0;}
