#ifndef ARCHIVOAPUNTES_H
#define ARCHIVOAPUNTES_H
#include <iostream>
#include <fstream>
#include <iostream>
#include "Clase.h"
#include "Apunte.h"
#include <vector>
using namespace std;
class ArchivoApuntes {
	public:
		ArchivoApuntes();
		~ArchivoApuntes();
		void abrir_para_escritura();
		void abrir_para_lectura();
		void cerrar();
		vector<Clase*> cargarDatos();
		void guardarDatos(vector<Clase*>);
		
	private:
		bool staAbierto;
		vector<Clase*> cargarClases();
		
		Clase* cargarClase();
		void cargarApuntes(vector<Clase*>);
		void cargarApunte(vector<Clase*>);
		void guardarClases(vector <Clase*>);
		void guardarClase(vector <Clase*>);
		void guardarApuntes(vector <Clase*>);
		void guardarApunte(Apunte*,string);
};

#endif