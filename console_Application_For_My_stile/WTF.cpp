#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int n = 7;
    bool a = false;

    int matr[n][n];
    int minproizv = 100000;
    int max = 0;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matr[i][j] = rand() % n;
            /*if (matr[i][j] == 0)
            {
                matr[i][j] = rand() % n;

            }*/
            if (matr[i][j] > max)
            {
                max = matr[i][j];
            }
            cout << setw(3) << matr[i][j];
        }
        cout << endl;
    }

    cout << endl << "max = " << max << endl << endl;

    for (int i = 0; i < n; i++)
    {
        int proizv = 1;
        
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << matr[i][j];
            proizv *= matr[i][j];
            
            if (matr[i][j] == 6)
            {
                a = true;
                sum += matr[i][j];
                //break;
            }
        }
        cout << endl;
        if (proizv < minproizv)
        {
            minproizv = proizv;
        }
        
        cout << "summa = " << sum << endl;
    }
    cout << endl << "minproizv = " << minproizv << endl;

    /*for (int i = 0; i < n; i++)
    {
        int sum = 0;
        
        for (int j = 0; j < n; j++)
        {
            if (matr[i][j] == 6)
            {
                a = true;
                sum += matr[i][j];
                break;
            }
        }
        /*for (int j = 0; j < n; j++)
        {
            if (a == true)
            {
                sum += matr[i][j];
            }
        }*/
        cout << "summa = " << sum << endl;
    }*/

}

