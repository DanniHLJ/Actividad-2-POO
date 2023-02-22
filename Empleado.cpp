#include "Persona.cpp"
#include <iostream>


using namespace std;

class Empleado : Persona{
	private : string codigo_empleado,puesto;

	public  : 
	Empleado (){
	}
	
	Empleado (string nom,string ape,string dir,int tel,string fn,string codemp,string psto) : Persona(nom,ape,dir,tel,fn){
		codigo_empleado = codemp; 	
		puesto = psto;
		
			
	}

	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono (int tel){telefono = tel;}
	void setfecha_nacimiento (string fn){fecha_nacimiento = fn;}
	void setcodigo_empleado (string codemp){codigo_empleado = codemp;}
	void setpuesto (string psto){puesto = psto;}

	
	string getNombres(){return nombres; }
	string getApellidos(){return apellidos; }
	string getDireccion(){return direccion; }
	int getTelefono(){return telefono; }
	string getfecha_nacimiento(){return fecha_nacimiento; }
	string getcodigo_empleado(){return codigo_empleado; }
	string getpuesto(){return puesto; }

	void mostrar (){
		cout<<"________________"<<endl;
		cout<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo_empleado<<endl;
		
	}
	
};
