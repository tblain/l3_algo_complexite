#include "liste.hpp"

#include <iostream>
#include <cassert>

Liste::Liste() {
	Cellule* head();
	Cellule* tail();
	nbe = 0;
}

Liste::Liste(const Liste& autre) {
	int nbe2 = autre.nbe;
	int i = 0;
	const Cellule* curr_cell = autre.tete();
	std::cout << "nbe2 " << nbe2 << std::endl;

	while(i < nbe2) {
		std::cout << "valeur " << curr_cell->valeur << std::endl;
		ajouter_en_queue(curr_cell->valeur);
		curr_cell = curr_cell->next_cell;
		i++;
	}
	delete curr_cell;
}

Liste& Liste::operator=(const Liste& autre) {
	int nbe2 = autre.nbe;
	int i = 0;
	const Cellule* curr_cell = autre.tete();
	std::cout << "nbe2 " << nbe2 << std::endl;

	while(i < nbe) {
		supprimer_en_tete();
		i++;
	}

	i = 0;
	while(i < nbe2) {
		std::cout << "valeur " << curr_cell->valeur << std::endl;
		ajouter_en_queue(curr_cell->valeur);
		curr_cell = curr_cell->next_cell;
		i++;
	}
	delete curr_cell;
	return *this ;
}

Liste::~Liste() {
	const Cellule* curr = tete();
	const Cellule* tmp = tete();
	int i = 0;

	while(i < nbe) {
		tmp = curr->next_cell;
		delete curr;
		curr = tmp;

		i++;
	}
}

void Liste::ajouter_en_tete(int valeur) {
	if(this->nbe == 0) {
		//std::cout << "first cell" << std::endl;
		Cellule* cell = new Cellule(valeur);
		this->head = cell;
		this->tail = head;
		this->nbe++;
	} else {
		//std::cout << "old head in: " << this->tete()->valeur << " | queue in: " << this->queue()->valeur << std::endl;
		Cellule* cell = new Cellule(valeur);
		cell->next_cell = head;
		head = cell;
		//std::cout << "between head in: " << this->tete()->valeur << " | queue in: " << this->queue()->valeur << std::endl;
		this->nbe++;
	}
	//std::cout << "head in: " << this->tete()->valeur << " | queue in: " << this->queue()->valeur << std::endl;
}

void Liste::ajouter_en_queue(int valeur) {
	if(nbe == 0) {
		Cellule* cell = new Cellule(valeur);
		this->head = cell;
		this->tail = cell;
		this->nbe++;
	} else {
		//std::cout << "head in: " << this->tete()->valeur << " | queue in: " << queue()->valeur << " | queue next " << queue()->next_cell->valeur  << std::endl;
		Cellule* cell = new Cellule(valeur);
		this->tail->next_cell = cell;
		this->tail = this->queue()->next_cell;
		this->nbe++;
	}
}

void Liste::supprimer_en_tete() {
	this->head = this->tete()->next_cell;
	this->nbe--;
}

Cellule* Liste::tete() {
	return this->head;
}

const Cellule* Liste::tete() const {
	return this->head;
}

Cellule* Liste::queue() {
	return this->tail ;
}

const Cellule* Liste::queue() const {
	return this->tail ;
}

int Liste::taille() const {
	return this->nbe ;
}

Cellule* Liste::recherche(int valeur) {
	Cellule* curr_cell = this->tete();
	int i = 0;

	while(i < nbe) {
		if(curr_cell->valeur == valeur) {
			return curr_cell;
		}

		curr_cell = curr_cell->next_cell;
		i++;
	}
	return nullptr ;
}

const Cellule* Liste::recherche(int valeur) const {
	int i = 0;
	const Cellule* curr_cell = this->tete();


	while(i < nbe) {
		if(curr_cell->valeur == valeur) {
			return curr_cell;
		}

		curr_cell = curr_cell->next_cell;
		i++;
	}
	return nullptr ;
}

void Liste::afficher() const {
	std::cout << "afficher " << this->tete()->valeur << std::endl;
}
