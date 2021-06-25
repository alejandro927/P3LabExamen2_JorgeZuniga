#include "ArchivoApuntes.h"

ArchivoApuntes::ArchivoApuntes() {
}

ArchivoApuntes::~ArchivoApuntes() {

}

void ArchivoApuntes::abrir_para_escritura() {

}

void ArchivoApuntes::abrir_para_lectura() {

}

void ArchivoApuntes::cerrar() {

}

vector<Clase*> ArchivoApuntes::cargarDatos() {

}

void ArchivoApuntes::guardarDatos(vector<Clase*> vectClass) {
	guardarClase(vectClass);
}

//privados
Clase* ArchivoApuntes::cargarClase() {

}

void ArchivoApuntes::cargarApuntes(vector<Clase*> vectClass) {

}

void ArchivoApuntes::cargarApunte(vector<Clase*> vectClass) {

}

void ArchivoApuntes::guardarClases(vector <Clase*> vectClass) {

}

void ArchivoApuntes::guardarClase(vector <Clase*> vectClass) {
	
	ofstream OF;
	OF.open("Apuntes Y Clases.JAZ",ios::binary);
	
	if(OF.fail()) {
		cout<<"Error al abrir!!!"<<endl;
	}

	OF.write((char*)&vectClass,sizeof(vectClass));
	OF.close();
	
}

void ArchivoApuntes::guardarApuntes(vector <Clase*> vectClass) {

}

void ArchivoApuntes::guardarApunte(Apunte* apunt,string nombre) {

}

