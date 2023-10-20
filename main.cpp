#include "Cliente.cpp"
#include <iostream>
main(){
	string nit ,nombres,apellidos,dirreccion;
	int telefono;
	
	cout<<"Ingrese NIT: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>dirreccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	//instancia de un objeto 
	Cliente obj = Cliente (nombres,apellidos,dirreccion,telefono,nit);
	obj.mostar();
/*	cout<<"Ingrese NIT: ";
	cin>>nit;
		Cliente obj2 = Cliente (nombres,apellidos,dirreccion,telefono,nit);
obj.mostar();*/
  	  cout<<"Ingrese Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
/*	cliente obj = Cliente();
	obj.setNit(Nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDirreccion(direccion);
    obj.setTelefono(telefono);
	obj.mostar();*/


}
