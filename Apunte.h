#ifndef APUNTE_H
#define APUNTE_H
#include <iostream>

using namespace std;
class Apunte
{
	public:
		Apunte();
		Apunte(string,string,string);
		~Apunte();
		
		string getTitulo();
		void setTitulo(string);
		string getContenido();
		void setContenido(string);
		string getFecha();
		void setFecha(string);
		
		
		
	private:
		string titulo;
		string contenido;
		string fecha;
		
};

#endif