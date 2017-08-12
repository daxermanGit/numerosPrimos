#include <iostream>
#include <math.h>
using namespace std;

bool algoritmoUno (int numero,int&);
bool algoritmoDos (int numero,int&);
bool algoritmoTres (int numero,int&);
bool algoritmoCuatro (int numero,int&);


int main(){
	system ("color f0");
	int numero;
	int operaciones=0;
	cout<<"Ingrese un numero positivo\n";
	cin>>numero;
	//-----------------------------------------------------
	cout<<"por el primer algoritmo\n";
	if(algoritmoUno (numero, operaciones))
		cout<<numero<<" es primo\n";
	else
		cout<<numero<<" no es primo\n";
	cout<<"se realizaron "<<operaciones<<" modulos\n";
	//-----------------------------------------------------
	operaciones=0;
	cout<<"por el segundo algoritmo\n";
	if(algoritmoDos (numero, operaciones))
		cout<<numero<<" es primo\n";
	else
		cout<<numero<<" no es primo\n";
	cout<<"se realizaron "<<operaciones<<" modulos\n";
	//-----------------------------------------------------
	operaciones=0;
	cout<<"por el tercer algoritmo\n";
	if(algoritmoTres (numero, operaciones))
		cout<<numero<<" es primo\n";
	else
		cout<<numero<<" no es primo\n";
	cout<<"se realizaron "<<operaciones<<" modulos\n";
	//-----------------------------------------------------
	operaciones=0;
	cout<<"por el cuarto algoritmo\n";
	if(algoritmoCuatro (numero, operaciones))
		cout<<numero<<" es primo\n";
	else
		cout<<numero<<" no es primo\n";
	cout<<"se realizaron "<<operaciones<<" modulos\n";	
	system("PAUSE");
	return  0;
}
bool algoritmoUno(int numero, int &operaciones){
	int cantidadDivisores; // instanciacion de la variable cantidad de divisores
	int k; //instanciacion de k
	for(k=1;k<=numero;k++){ 
		operaciones++;	//contador de operaciones
		if((numero%k)==0){ //operacion fundamental
			cantidadDivisores++; //contador de divisores
		}
	}
	return cantidadDivisores==2;
}
bool algoritmoDos(int numero, int &operaciones){
	bool esPrimo = true; // instanciacion de la variable booleana del la veracidad de "es primo"
	int k=2; //instanciacion de una variable k que actuara como divisor
	while(esPrimo && k<numero){ //while con las condiciones de ejecucion de que el numero sea primo y k sea menor al numero ingresado
		operaciones++; //contador de operaciones
		if(numero%k==0){ //operacion fundamental
			esPrimo=false; //se cambia el valor del booleano pues se encontro un divisor
		}else{
			k+=1; 
		}
	}
	return esPrimo && numero!=1;
}
bool algoritmoTres(int numero, int &operaciones){
	bool esPrimo = true; // instanciacion de la variable booleana del la veracidad de "es primo"
	int k=3; //instanciacion de una variable k que actuara como divisor
	if(numero%2==0)
		esPrimo = false;
	while(esPrimo && k<numero/2){ //while con las condiciones de ejecucion de que el numero sea primo y k sea menor al numero ingresado
		operaciones++; //contador de operaciones
		if(numero%k==0){ //operacion fundamental
			esPrimo=false; //se cambia el valor del booleano pues se encontro un divisor
		}else{
			k+=2; 
		}
	}
	
	return esPrimo && numero!=1;
}
bool algoritmoCuatro(int numero, int &operaciones){
	bool esPrimo = true; // instanciacion de la variable booleana del la veracidad de "es primo"
	int k=3; //instanciacion de una variable k que actuara como divisor
	int raiz=sqrt(numero);
	if(numero%2==0)
		esPrimo = false;
	while(esPrimo && k<numero/raiz){ //while con las condiciones de ejecucion de que el numero sea primo y k sea menor al numero ingresado
		operaciones++; //contador de operaciones
		if(numero%k==0){ //operacion fundamental
			esPrimo=false; //se cambia el valor del booleano pues se encontro un divisor
		}else{
			k+=2; 
		}
	}
	return esPrimo && numero!=1;
}
