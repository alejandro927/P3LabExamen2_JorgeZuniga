#include "ArchivoApuntes.h"

ArchivoApuntes::ArchivoApuntes() {
}

ArchivoApuntes::~ArchivoApuntes() {

}

void ArchivoApuntes::abrir_para_escritura() {
	this->refArchivo = new fstream("Archivo.JAZ",  ios::binary | fstream::out);
	this->staAbierto = true;
}


void ArchivoApuntes::abrir_para_lectura() {
	/*this->refArchivo = new fstream("Archivo.JAZ",  ios::binary | fstream::out);
	this->staAbierto = true;*/
}

void ArchivoApuntes::cerrar() {
	this->refArchivo->close();
	this->staAbierto = false;
}

vector<Clase*> ArchivoApuntes::cargarDatos() {

}

void ArchivoApuntes::guardarDatos(vector<Clase*> vectClass) {
	guardarClases(vectClass);
}

//privados
vector<Clase*> cargarClases() {

}

Clase* ArchivoApuntes::cargarClase() {
	/*string nombre ="";
	nombre = clase->getNombre();
	this->refArchivo->read( reinterpret_cast<char*>( &nombre ), sizeof(nombre) );
	Clase* clase = new Clase(nombre,apunte);*/
}

void ArchivoApuntes::cargarApuntes(vector<Clase*> vectClass) {

}

void ArchivoApuntes::cargarApunte(vector<Clase*> vectClass) {

}

void ArchivoApuntes::guardarClases(vector <Clase*> vectClass) {
	
	int cant = vectClass.size();
	for(int i=0; i<cant; i++) {
		guardarClase(vectClass[i]);
	}
	
}

void ArchivoApuntes::guardarClase(Clase* clase) {
	string nombre ="";
	nombre = clase->getNombre();
	this->refArchivo->write( reinterpret_cast<char*>( &nombre ), sizeof(nombre) );

}

void ArchivoApuntes::guardarApuntes(vector <Clase*> vectClass) {

}

void ArchivoApuntes::guardarApunte(Apunte* apunt,string nombre) {

}

