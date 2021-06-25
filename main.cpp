#include <iostream>
#include "Clase.h"
#include "Apunte.h"
#include "ArchivoApuntes.h"
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int miniMenuModificarApunte() {
	int opcion=0;
	cout<<"===Modificar Apunte==="<<endl;
	cout<<"1) Modificar Titulo"<<endl;
	cout<<"2) Modificar contenido"<<endl;
	cout<<"3) Modificar fecha"<<endl;
	cout<<"4) Salida"<<endl;
	cout<<"Elija su opcion:";
	cin>>opcion;
	return opcion;
}

int miniMenuModificarClase() {
	int opcion=0;
	cout<<"===Modificar Clase==="<<endl;
	cout<<"1) Modificar Nombre"<<endl;
	cout<<"2) Cambiar el apunte"<<endl;
	cout<<"3) Salida"<<endl;
	cout<<"Elija su opcion:";
	cin>>opcion;
	return opcion;
}

void mostrarApuntes(vector<Apunte*> vectorAp) {
	cout<<endl<<"\n===Apunte==="<<endl;
	for(int i=0; i<vectorAp.size(); i++) {
		cout<<i<<")Titulo:"<<vectorAp[i]->getTitulo() << "  Contenido:"<<vectorAp[i]->getContenido() << "  Fecha:"<<vectorAp[i]->getFecha()<<endl;
	}
}


void mostrarClases(vector<Clase*> vectorC) {
	cout<<endl<<"\n===Clases==="<<endl;
	for(int i=0; i<vectorC.size(); i++) {
		cout<<i<<" )Nombre:" << vectorC[i]->getNombre() << endl;
	}
}


int menuPrincipal() {
	int opcion=0;
	cout<<"===MENU==="<<endl;
	cout<<"1) Operaciones Clase"<<endl;
	cout<<"2) Operaciones Apunte"<<endl;
	cout<<"3) Guardar Archivo"<<endl;
	cout<<"4) Cargar Archivo"<<endl;
	cout<<"5) Salida"<<endl;
	cout<<"Elija su opcion:";
	cin>>opcion;
	return opcion;
}

int menuClase() {
	int opcion=0;
	cout<<"\n===Menu Clase==="<<endl;
	cout<<"1) Crear Clase"<<endl;
	cout<<"2) Modificar Clase"<<endl;
	cout<<"3) Eliminar Clase"<<endl;
	cout<<"4) Listar Clase"<<endl;
	cout<<"5) Salida"<<endl;
	cout<<"Elija su opcion:";
	cin>>opcion;
	return opcion;
}

int menuApunte() {
	int opcion=0;
	cout<<"\n===Menu Apunte==="<<endl;
	cout<<"1) Crear Apunte"<<endl;
	cout<<"2) Modificar Apunte"<<endl;
	cout<<"3) Eliminar Apunte"<<endl;
	cout<<"4) Listar Apunte"<<endl;
	cout<<"5) Salida"<<endl;
	cout<<"Elija su opcion:";
	cin>>opcion;
	return opcion;
}

int main(int argc, char** argv) {
	Clase* clase = new Clase();
	Apunte* apunt = new Apunte();
	ArchivoApuntes* archivo = new ArchivoApuntes();
	vector<Apunte*> vectorApuntes;
	vector<Clase*> vectorClase;

	int opcion=0;
	while(opcion != 5) {
		opcion = menuPrincipal();
		switch(opcion) {
			case 1: {
				if(vectorApuntes.empty()) {
					cout<<"No se pueden hacer clases sin un apunte"<<endl;
				} else {

					int opcion2=0;
					while(opcion2 != 5) {
						opcion2 = menuClase();
						switch(opcion2) {
							case 1: {
								int posicion2=0;
								string nombre;
								mostrarApuntes(vectorApuntes);
								cout<<"Ingrese la posicion del apunte que desea:";
								cin>>posicion2;
								cout<<"Ingrese el nombre de la clase:";
								getline(cin,nombre);
								getline(cin,nombre);
								vectorClase.push_back(new Clase(nombre,vectorApuntes[posicion2]));
								break;
							}
							case 2: {
								cout<<"Hola"<<endl;
								int opcion22=0;
								while(opcion22 != 3) {

									mostrarClases(vectorClase);
									int posicion=0;
									cout<<"Ingrese la posicion que desea modificar:";
									cin>>posicion;

									opcion22 = miniMenuModificarClase();
									switch(opcion22) {
										case 1: {
											string nombre="";
											cout<<"Ingrese el nuevo nombre:";
											getline(cin,nombre);
											getline(cin,nombre);
											vectorClase[posicion]->setNombre(nombre);
											break;
										}
										case 2: {
											int posicion31=0;
											mostrarApuntes(vectorApuntes);
											cout<<"Ingrese la posicion por el que desea cambiar:";
											cin>>posicion31;
											vectorClase[posicion]->setApuntes(vectorApuntes[posicion31],posicion31);
											break;
										}
									}
								}
								break;
							}
							case 3: {
								int posicion=0;
								mostrarClases(vectorClase);
								cout<<"Ingrese la posicion que desea eliminar:";
								cin>>posicion;
								vectorClase.erase(begin(vectorClase)+posicion);
								break;
							}
							case 4: {
								mostrarClases(vectorClase);
								break;
							}
							default: {
								cout<<"Numero Ingresado no valido!!!"<<endl;
								break;
							}
						}

					}
				}
				break;
			}
			case 2: {
				int opcion3=0;
				while(opcion3 != 5) {
					opcion3 = menuApunte();
					switch(opcion3) {
						case 1: {
							string titulo="",contenido="",fecha="";
							cout<<"Ingrese el titulo:";
							getline(cin,titulo);
							getline(cin,titulo);

							cout<<"Ingrese el contenido:";
							getline(cin,contenido);

							cout<<"Ingrese el fecha:";
							getline(cin,fecha);
							vectorApuntes.push_back(new Apunte(titulo,contenido,fecha));
							break;
						}
						case 2: {
							if(!vectorApuntes.empty()) {
								int opcion2=0;
								int posicion=0;
								cout<<"Modificar Apunte"<<endl;
								mostrarApuntes(vectorApuntes);
								cout<<"\nIngrese la posicion que desea modificar:";
								cin>>posicion;
								while(opcion2 != 4) {
									opcion2 = miniMenuModificarApunte();
									switch(opcion2) {
										case 1: {
											string tit="";
											cout<<"Ingrese el nuevo titulo:";
											getline(cin,tit);
											getline(cin,tit);
											vectorApuntes[posicion]->setTitulo(tit);
											break;
										}
										case 2: {
											string contenido="";
											cout<<"Ingrese el nuevo contenido:";
											getline(cin,contenido);
											getline(cin,contenido);
											vectorApuntes[posicion]->setContenido(contenido);
											break;
										}
										case 3: {
											string fecha="";
											cout<<"Ingrese la nueva fecha:";
											getline(cin,fecha);
											getline(cin,fecha);
											vectorApuntes[posicion]->setFecha(fecha);
										}
									}
								}
							}
							break;
						}
						case 3: {
							int posicion=0;
							mostrarApuntes(vectorApuntes);
							cout<<"Ingrese la posicion que desea eliminar:";
							cin>>posicion;
							vectorApuntes.erase(begin(vectorApuntes)+posicion);
							break;
						}
						case 4: {
							mostrarApuntes(vectorApuntes);
							break;
						}
						default: {
							cout<<"Numero Ingresado no valido!!!"<<endl;
							break;
						}
					}
				}
				break;
				break;
			}
			case 3: {
				cout<<"====Cargar Archivo===="<<endl;



				break;
			}
			case 4: {
				cout<<"====Guardar Archivo===="<<endl;
				
				/*
				
				
				*/
				break;
			}
			case 5: {
				cout<<"Gracias por usar el programa que tenga buen dia!!";
				break;
			}
			default: {
				cout<<"Numero Ingresado no valido!!!"<<endl;
				break;
			}
		}

	}
	delete clase;
	delete apunt;
	delete archivo;
	return 0;
}