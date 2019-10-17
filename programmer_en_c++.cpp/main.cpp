#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CPoint.h"

//sing namespace std;

//Exemple de programme en C ++

//POO C++
//Class (données et méthodes)

int main()
{
	CPoint ptMonPoint;

	std::cout << "X : " << ptMonPoint.getX() << std::endl;
	std::cout << "Y : " << ptMonPoint.getY() << std::endl;
	/*int i = 0;
	float x = 0.0;
	float racx = 0.0;

	const int NFOIS = 5;


	std::cout << "Je vais vous calculer" << NFOIS << "racines carrees\n";

	for (i = 0; i < NFOIS; i++) {

		std::cout << "Donnez un nombre : ";
		std::cin >> x;


		if (x < 0.0)

			std::cout << "Le nombre" << x << "ne possede pas de racine carree\n";
		else {
			racx = sqrtf(x);
			std::cout << "Le nombre" << x << "a pour racine carree" << racx << endl;
		}
	}

	std::cout << "Travail Termine" << endl;*/

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	system("pause");

	return 0;
}