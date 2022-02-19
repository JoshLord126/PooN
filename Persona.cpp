#include "Propietario.cpp"
#include <iostream>
using namespace std;
class Persona : Propietario{
	//atributos
	protected : string nombres,apellidos,direccion;
				int telefono;
	//constructo
	public : 
			Persona(){
			}
			Persona(string nom,string ape,string dir,int tel, string nit, double cui): Propietario(nit, cui){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
			}
	 
	//metodo
	void mostrar();
};




