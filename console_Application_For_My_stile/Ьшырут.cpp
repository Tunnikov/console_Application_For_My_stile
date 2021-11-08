#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int x=0, y=0, n, R1, R2, R3;
	int i = 1;
	srand(x);
	srand(y);
	std::cout << "Введите количество дротиков : " << endl;
	std::cin >> n;
	setlocale(LC_CTYPE, "ru");
	std::cout << "Задайте размеры круга дартса :" << endl;
	std::cout << "Задайте размеры первого круга дартса." << endl;
	std::cin >> R1;
	std::cout << "Задайте размеры второго круга дартса." << endl;
	std::cin >> R2;
	std::cout << "Задайте размеры третьего круга дартса." << endl;
	std::cin >> R3;
	int source = 0;
	bool a = true;
		while (a) {
			while (i <= n) {
				std::cout << "Введите точку попадания игрока." << endl;
				std::cin >> x;
				if (x <= R1 && y <= R1) {
					std::cout << "Вы попали в первый круг, вам начисляется 5 баллов." << endl;
					source = source + 5;
					std::cout << source << endl;
				}
				else if (R1 <= x && x <= R2 && R1 <= y && y <= R2) {
					std::cout << "Вы попали во второй круг, вам начисляется 10 баллов." << endl;
					source = source + 10;
					std::cout << source << endl;
				}
				else if (R2 <= x && x <= R3 && R2 <= y && y <= R3) {
					std::cout << "Вы попали в первый круг, вам начисляется 15 баллов." << endl;
					source = source + 15;
					std::cout << source << endl;
				}
				else {
					std::cout << "Промах." << endl;
				}
				i++;
			}
			std::cout << "Если вы хотите повтоить нажмите 1, если не хотите нажмите 0." << endl;
			std::cin >> a;
		}
	return 0;
}