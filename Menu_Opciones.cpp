//----------- MENU DE OPCIONES -----------//
//Trabajo realizado por Luis Ajim, Yessica Jimenez y Diego Serrano//
#include <iostream>

#include "suma resta y division.cpp"
#include "numeros par o impar.cpp"
#include "conversión de kilometros.cpp"
#include "palabra palindrom.cpp"
#include "conversiones(1000).cpp"
#include "DecimALetras.cpp"
#include "TablaM.cpp"
#include "TablasMulti.cpp"
#include "MultiplicacionManual.cpp"
#include "Decimales_a_Binarios.cpp"
#include "Calculadora_Proteica.cpp"
#include "Consulta_Precios.cpp"

using namespace std; 

int main(){
	int opcion;
	char resp;
	do{
		cout<<"MENU DE OPCIONES"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"1. suma resta y division"<<endl;
		cout<<"2. numero par o impar"<<endl;
		cout<<"3. conversiones de kilometros"<<endl;
		cout<<"4. palabra palindrom"<<endl;
		cout<<"5. conversiones (1000)"<<endl;
		cout<<"6. conversiones de numerosa letras"<<endl;
		cout<<"7. Entero con Decimal a Letras"<<endl;
		cout<<"8. Tabla de Multiplicar al azar"<<endl;
		cout<<"9. Tablas de Multiplicar"<<endl;
		cout<<"10. Multiplicacion Manual"<<endl;
		cout<<"11. Decimales a Binarios"<<endl;
		cout<<"12. Decimal a Hexadecimal"<<endl;
        	cout<<"13. Modelo de Figuras Geometricas"<<endl;
        	cout<<"14. Mover Un Punto en pantalla"<<endl;
		cout<<"15. Simulacion de Cajero automatico"<<endl;
        	cout<<"16. Calcular la Hipotenusa"<<endl;
		cout<<"17. Mini Calculadora"<<endl;
		cout<<"18. Examen Virtual"<<endl;
		cout<<"19. Calculadora Proteica"<<endl;
		cout<<"20. Consulta Precios"<<endl;
		cout<<"0. SALIR"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"INGRESE LA OPCION DEL PROGRAMA QUE DESEA EJECUTAR"<<endl;
		cin>>opcion;
		
		system("cls");
		
		switch (opcion){
			case 1:
			opcion1();
			break;
			case 2:
			opcion2();
			break;
			case 3:
			opcion3();
			break;
			case 4:
			opcion4();
			break;
			case 5:
			opcion5();
			break;
			case 6:
			opcion6();
			break;
			case 7: 
			opcion7();
			break;
			case 8:
			opcion8();	
			break;	
			case 9:
			opcion9();
			break;
			case 10:
			opcion10();
			break;
			case 11:
			opcion11();
			break;
			/*case 12:
			opcion12();
			break;*/
			case 13:
			opcion13();
			break;
			/*case 14:
			opcion14();
			break;*/
			/*case 15:
			opcion15();
			break;*/
			case 16:
			opcion16();
			break;
			/*case 17:
			opcion17();
			break;
			case 18:
			opcion18();
			break;*/
			case 19:
			opcion19();
			break;
			case 20:
			opcion20();
			break;
			default: 
			cout<<"Ingrese una opcion valida"<<endl;
			break;
		}
		cout<<"-----------------------"<<endl;
		cout<<"DESEA EJECUTAR OTRO PROGRAMA? (s/n)"<<endl;
		cin>>resp;
	}while (resp=='s' || resp=='S');
	
	return 0;
} 

