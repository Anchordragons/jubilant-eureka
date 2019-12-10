//-----------------------first.c
#include <stdio.h>
#include "fun.h"
#include <cstdlib>
#include <string>
#include <iostream> 
#include <ctime> 
using namespace std;
void func(void)
{
 setlocale(LC_ALL, "Russian"); // русская консоль 
 srand(time(NULL)); // обновить последовательность случайных чисел
 cout << "Создается матрица какая-то... 5x6" << endl;
 int **M;
 M = new int*[5];
 for(int i=0;i<5; i++)
   M[i] = new int[6];
 cout << "Заполняем ее случайными числами..." << endl << " от -50 до 50" << endl;
 for(int i=0;i<5; i++)
    for (int n=0;n<6;n++)
        M[i][n] =rand() % 101 - 50 ;
 cout << "Теперь выводим эти цифры на экран" << endl << " от -50 до 50" << endl;
 for(int i=0;i<5; i++)
   {
    for (int n=0;n<6;n++)
     cout << M[i][n] << " ";
    cout << endl;
    }
cout << "\nModify matrix\n";
 for (int i = 0; i < 5; i++)
  {
   for (int n = 0; n < 6; n++)
   {
    if (M[i][n] % 2 == 0)
     M[i][n] *= M[i][n];
    cout << M[i][n] << " ";
    }
   cout << endl;
   }
 system("pause"); 
 for(int i=0; i<5; i++)
  delete[] M[i];
 delete[] M;
}