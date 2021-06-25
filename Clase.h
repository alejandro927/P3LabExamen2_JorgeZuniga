#ifndef CLASE_H
#define CLASE_H
#include <iostream>
#include "Apunte.h"
#include <vector>
class Clase
{
	public:
		Clase();
		~Clase();
		Clase(string,Apunte*);
		
		string getNombre();
		void setNombre(string);
		vector <Apunte*> getApuntes();
		void setApuntes(Apunte*,int);
		
	private:
		string nombre;
		vector <Apunte*> apuntes;
		
		
};

#endif