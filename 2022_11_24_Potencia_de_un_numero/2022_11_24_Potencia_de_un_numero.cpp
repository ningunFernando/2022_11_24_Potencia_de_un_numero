// 2022_11_24_Potencia_de_un_numero.cpp
// Fernando Fabian Patino Ibarra
// Programa para calcular la potencia de un  numero usando recursividad
//

#include <iostream>

long int potencia(int num1, int num2) {
	if (num2 == 0) return 1;
	if (num2 == 1) return num1;
	else return  num1 * potencia(num1, num2 - 1);
}

int main()
{
	int num1 = 0;
	int num2 = 0;

	std::cout << "||====================||" << std::endl;
	std::cout << "||      POTENCIA      ||" << std::endl;
	std::cout << "|| INGRESAR UN NUMERO ||" << std::endl;
	std::cout << "||====================||" << std::endl;

	std::cin >> num1;
	system("CLS");
	do
	{
		std::cout << "||=======================||" << std::endl;
		std::cout << "|| INGRESAR UN EXPONENTE ||" << std::endl;
		std::cout << "||=======================||" << std::endl;
		std::cin >> num2;
		if (num2 < 0) {
			std::cout << "||====================================||" << std::endl;
			std::cout << "|| INGRESE UN NUMERO ENTERO Y POSITIVO ||" << std::endl;
			std::cout << "||====================================||" << std::endl;
		}
	} while (num2 < 0);

	std::cout << "Potencia: " << potencia(num1, num2);

}