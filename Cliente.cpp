#include "persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {	
	//constructor
	public :
	Cliente (){
	}
	Cliente(string nom,string ape,string dir,int tel,string nit,double cui) : Persona(nom,ape,dir,tel,nit,cui){
		
	}
	

	// Metodos
	// set (modificar)
	void setNit(string nit){pronit = tnit;}
	void setCui(string cui){procui = tcui;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	
	//get (Mostrar)
	string getNit(){return pronit;}
	string getCui(){return procui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	

	// metodos
	
	void mostrar(){
		cout<<"____________________"<<endl;
		cout<<pronit<<","<<procui<<","<<nombres<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};
