#ifndef LIFAP6_LISTE_CELLULE_HPP
#define LIFAP6_LISTE_CELLULE_HPP

class Cellule {
  public:
    int valeur;
    Cellule* next_cell;
    Cellule(int _valeur);
    Cellule();
} ;

#endif
