#include "Persona.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona{
	private : string nit;

	public  : 
	Cliente (){
	}
	
	Cliente (string nom,string ape,string dir,int tel,string fn, string n) : Persona(nom,ape,dir,tel,fn){
		nit = n; 	
		
			
	}
	//metodos
	// set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono (int tel){telefono = tel;}
	void setfecha_nacimiento (string fn){fecha_nacimiento = fn;}


	
	//get (Mostrar)
	string getNit(){return nit; }
	string getNombres(){return nombres; }
	string getApellidos(){return apellidos; }
	string getDireccion(){return direccion; }
	int getTelefono(){return telefono; }
	string getfecha_nacimiento(){return fecha_nacimiento; }
	// metodos
	void mostrar (){
		cout<<"________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		
	}
	
};
