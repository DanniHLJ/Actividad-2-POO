#include <iostream>
#include "Empleado.cpp"
#include "Cliente.cpp"
using namespace std;
void menu();
int main(void)
{
    menu();
    scanf("");
    return(0);
}
void  menu ()
{

	string nit,nombre,apellidos,direccion,fecha_nacimiento,codemp,psto;
	int telefono;
	int opcion;
	do{
  
	cout<<"Seleccione la opcion" << endl;
	cout <<"1 Crear"<<endl;
	cout <<"2 Crear Empleado"<<endl;
    cout <<"3 Leer cliente"<<endl;
    cout <<"4 Leer empleado"<<endl;
	cout <<"5 Actualizar cliente"<<endl;
	cout <<"6 Actualizar empleado"<<endl;
    cout <<"7 Eliminar"<<endl;
    
    cin >> opcion;
    switch (opcion)
  {

    case 1: cout<< "Usted a seleccionado la opcion de crear"<<endl;
 
	cout << "\nIngrese Nit: ";
	cin >> nit ;
	cout << "\nIngrese Nombres: "<<endl;
	cin >> nombre;
	cout << "\nIngrese Apellidos: "<<endl;
	cin >> apellidos;
	cout << "\nIngrese Direccion: "<<endl;
	cin >> direccion;
	cout << "\nIngrese Telefono: "<<endl;
	cin >> telefono;
	cout << "\nIngrese Fecha nacimiento: "<<endl;
	cin >> fecha_nacimiento;
	system("pause");
    break;
 case 2: cout<<"Usted a seleccionado la opcion de Crear Empleado"<<endl;
	cout << "\nIngrese Nombres: "<<endl;
	cin >> nombre;
	cout << "\nIngrese Apellidos: "<<endl;
	cin >> apellidos;
	cout << "\nIngrese Direccion: "<<endl;
	cin >> direccion;
	cout << "\nIngrese Telefono: "<<endl;
	cin >> telefono;
	cout << "\nIngrese Fecha nacimiento: "<<endl;
	cin >> fecha_nacimiento;
	cout << "\nIngrese el codigo de empleado" <<endl;
	cin >> codemp;
	cout << "\nIngrese el puesto de empleado" <<endl;
	cin >> psto;
	system("pause");
 break;
   
   case 3: 
   c : Cliente(nombre, apellidos,  direccion, telefono, fecha_nacimiento,nit);
	Cliente :: mostrar();
	system("pause");
break;
	
	case 4: 
  e : Empleado(nombre, apellidos,  direccion, telefono,  fecha_nacimiento,codemp,psto);
	Empleado :: mostrar();
	system("pause");
break;
     
     case 5:
     	c : Cliente(nombre,apellidos,direccion,telefono,fecha_nacimiento,nit);
     	Cliente :: mostrar ();
     system("pause");
break;
	 case 6:
     	e : Empleado(nombre,apellidos,direccion,telefono,fecha_nacimiento,codemp,psto);
     	Empleado :: mostrar ();
     system("pause");
break;

      case 7:
      	delete;
   }
    
system("cls");
	}while(opcion!=7);
}
