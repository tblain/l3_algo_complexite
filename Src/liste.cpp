#include "liste.hpp"

#include <iostream>
#include <cassert>

Liste::Liste() {
  /* votre code ici */
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
  /* votre code ici */
}

void Liste::ajouter_en_queue(int valeur) {
  /* votre code ici */
}

void Liste::supprimer_en_tete() {
  /* votre code ici */
}

Cellule* Liste::tete() {
  /* votre code ici */
  return nullptr ;
}

const Cellule* Liste::tete() const {
  /* votre code ici */
  return nullptr ;
}

Cellule* Liste::queue() {
  /* votre code ici */
  return nullptr ;
}

const Cellule* Liste::queue() const {
  /* votre code ici */
  return nullptr ;
}

int Liste::taille() const {
  /* votre code ici */
  return 0 ;
}

Cellule* Liste::recherche(int valeur) {
  /* votre code ici */
  return nullptr ;
}

const Cellule* Liste::recherche(int valeur) const {
  /* votre code ici */
  return nullptr ;
}

void Liste::afficher() const {
  /* votre code ici */
}
