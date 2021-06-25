#include "Clase.h"

Clase::Clase() {
}
Clase::Clase(string name,Apunte* ap) {
	this->nombre = name;
	this->apuntes.push_back(ap);
}

Clase::~Clase() {
}

string Clase::getNombre(){
	return this->nombre;
}

void Clase::setNombre(string name){
	this->nombre = name;
}

vector <Apunte*> Clase::getApuntes(){
	return this->apuntes;
}

void Clase::setApuntes(Apunte* apunTe, int posicion){
	this->apuntes[posicion] = apunTe; 
}
