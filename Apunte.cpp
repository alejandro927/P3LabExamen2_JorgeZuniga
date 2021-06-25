#include "Apunte.h"

Apunte::Apunte() {
}

Apunte::Apunte(string titul, string conteNido,string date) {
	this->titulo = titul;
	this->contenido = conteNido;
	this->fecha = date;
}

Apunte::~Apunte() {
}

string Apunte::getTitulo(){
	return this->titulo;
}

void Apunte::setTitulo(string tit){
	this->titulo = tit;
}

string Apunte::getContenido(){
	return this->contenido;
}

void Apunte::setContenido(string cont){
	this->contenido = cont;
}

string Apunte::getFecha(){
	return this->fecha;
}

void Apunte::setFecha(string date){
	this->fecha = date;
}
