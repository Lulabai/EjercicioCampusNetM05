// Todos los archivos de C++ tienen que empezar su c�digo con un MAIN
#include <iostream>

//si no queremos escribir todo el rato std::, ponemos aqu� arriba antes de poner las funciones "using namespace std;"


int main() 
{
	/*definir una variable de los datos que le vamos a pedir al usuario que ponga(char letra;)
	char letra_A;
	char letra_B;
	char letra_C;

	std::cin >> letra_A; //esperar� a que el usuario escriba una letra y ejecutar� el Has escrito una letra
	std::cin >> letra_B;
	std::cin >> letra_C;
	std::cout << "Has escrito una letra " << letra_A << std::endl;
	std::cout << "Has escrito una letra " << letra_B << std::endl;
	std::cout << "Has escrito una letra " << letra_C << std::endl;*/


	/*int numero;
	std::cin >> numero;
	std::cout << "Has escrito: " << numero << std::endl;*/


	//system("CLS"); para eliminar la consola entera, ir� bien para la pr�ctica


	/*float numero_A = 2;
	float numero_B = 3;
	float numero_C = 4;
	float respuesta = numero_C * numero_A * (numero_B - numero_C) / numero_B;
	std::cout << respuesta;*/


	/*
	int A = 0;
	int B = 0;
	std::cout << "Escribe el primer valor:" << std::endl;
	std::cin >> A;
	std::cout << "Escribe el segundo valor:" << std::endl;
	std::cin >> B;
	std::cout << "Primer valor: " << A << " Segundo valor : " << B << std::endl;

	int resultado = A + B;
	std::cout << resultado;
	*/

	int A = 0;
	int B = 0;
	std::cout << "Escribe el primer valor:" << std::endl;
	std::cin >> A;
	std::cout << "Escribe el segundo valor:" << std::endl;
	std::cin >> B;
	std::cout << "Primer valor: " << A << " Segundo valor : " << B << std::endl;
	int resultado;
	char operacion;
	std::cout << "�Que operacion quieres hacer?" << std::endl;
	std::cin >> operacion;
	if (operacion == '*') {
		resultado = A * B;
	}
	else if (operacion == '/') {
		resultado = A / B;

	}
	else if (operacion == '+') {
		resultado = A + B;

	}
	else if (operacion == '-') {
		resultado = A - B;

	}
	else if (operacion == '%') {
		resultado = A % B;

	}
	std::cout << "Resultado: " << resultado << std::endl;
}




