#include <iostream>
using namespace std;
class Propietario{
	//atributos
	protected : string pronit;
				double procui;
	//constructo
	public : 
			Propietario(){
			}
			Propietario(string nit, double cui){
				pronit = nit;
				procui = cui;
			}
	 
	//metodo
	void mostrar();
};

