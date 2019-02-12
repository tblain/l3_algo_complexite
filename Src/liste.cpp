#include "liste.hpp"

#include <iostream>
#include <cassert>

Liste::Liste() {
  Cellule* head();
  Cellule* tail();
  nbe = 0;
}

Liste::Liste(const Liste& autre) {
  /* votre code ici */
}

Liste& Liste::operator=(const Liste& autre) {
  /* votre code ici */
  return *this ;
}

Liste::~Liste() {
  /* votre code ici */
}

void Liste::ajouter_en_tete(int valeur) {
	if(nbe == 0) {
		head = new Cellule(valeur);
		tail = head;
		nbe++;
	} else {
		std::cout << "old head in " << head->valeur << std::endl;
		Cellule cell(valeur);
		this->head->next_cell = &cell;
		this->head = &cell;
		std::cout << "head in: " << this->tete()->valeur << " | cell in: " << cell.valeur << " | queue in: " << queue()->valeur << " | queue next " << queue()->next_cell->valeur  << std::endl;
		this->nbe++;
	}
}

void Liste::ajouter_en_queue(int valeur) {
	if(nbe == 0) {
		head = new Cellule(valeur);
		tail = head;
		nbe++;
	} else {
		Cellule cell(valeur);
		cell.next_cell = tail;
		tail = &cell;
		nbe++;
	}
}

void Liste::supprimer_en_tete() {
  head = nullptr;
  nbe--;
}

Cellule* Liste::tete() {
  return head;
}

const Cellule* Liste::tete() const {
  return head;
}

Cellule* Liste::queue() {
  return tail ;
}

const Cellule* Liste::queue() const {
  return tail ;
}

int Liste::taille() const {
  return nbe ;
}

Cellule* Liste::recherche(int valeur) {
  int i = 0;
  Cellule* curr_cell = tail;
  Cellule* cell_search = nullptr;
	  
  while(i < nbe || cell_search != nullptr) {
    if(curr_cell->valeur == valeur) {
      cell_search = curr_cell;
    }

    curr_cell = curr_cell->next_cell;
    i++;
  }
  return cell_search ;
}

const Cellule* Liste::recherche(int valeur) const {

  int i = 0;
  Cellule* curr_cell = tail;
  Cellule* cell_search = nullptr;
	  
  while(i < nbe || cell_search != nullptr) {
    if(curr_cell->valeur == valeur) {
      cell_search = curr_cell;
    }

    curr_cell = curr_cell->next_cell;
    i++;
  }
  return cell_search ;
}

void Liste::afficher() const {
	std::cout << "afficher " << this->tete()->valeur << std::endl;
}
