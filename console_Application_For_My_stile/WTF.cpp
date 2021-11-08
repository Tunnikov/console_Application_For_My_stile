/*/
#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;
//Определить является ли введенный текст: идентификатором, записью целого числа.

struct name_Of_Indefekator
{
	char name[50];
};


int main()
{
	setlocale(LC_ALL, "rus");
	
	char str[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
	'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	
	
	for (short i = 0; i < strlen(string); i++)
	{
		cout << string[i];
		cout << endl;
	}
	

	const short num = 10;
	const int number = 255;
	char String[number] = {0};
	cin.getline(String, number, '0');


	//Преременные которые мы будм сравнивать и оставлять 
	name_Of_Indefekator* name_Of_True = new name_Of_Indefekator[];
	//string* name_Of_True = new string[num];
	name_Of_True[num] = {"String", "name_Of_Name", "name", "name_Of_Indefekator", "name_Of_True", "name_Of_Fail"};
	
	//Переменные которые мы быдем отсеивать
	name_Of_Indefekator* name_Of_Fail = new name_Of_Indefekator[];
	//string* name_Of_Fail = new string[num];
	name_Of_Fail[num] = { "string", "int", "char", "fail", "true", "bool", "double"};

	cout << "" << strlen(String) << endl;
	cout << String;
	
	return 0;
}

/**/



#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    const int n = 7;


    int matr[n][n];
    int minproizv = 100000;
    int max = 0;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matr[i][j] = rand() % n;
            if (matr[i][j] == 0)
            {
                matr[i][j] = rand() % n;

            }
            if (matr[i][j] > max)
            {
                max = matr[i][j];
            }
            cout << setw(3) << matr[i][j];
        }
        cout << endl;
    }

    cout << endl << "max = " << max << endl << endl;

    for (int j = 0; j < n; j++)
    {
        int proizv = 1;

        for (int i = 0; i < n; i++)
        {
            cout << setw(3) << matr[i][j];
            proizv *= matr[i][j];
        }
        cout << endl;
        if (proizv < minproizv)
        {
            minproizv = proizv;
        }
    }
    cout << endl << "minproizv = " << minproizv << endl;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        bool a = false;
        for (int j = 0; j < n; j++)
        {
            if (matr[i][j] == 6)
            {
                a = true;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (a == true)
            {
                sum += matr[i][j];
            }
        }
        cout << "summa = " << sum << endl;
    }

}

