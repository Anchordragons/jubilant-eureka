//-----------------------second.c

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

#include "fun.h"

void brr(void)
{
    srand(static_cast<unsigned int>(time(NULL)));
    
    int const size = 20;
    int arr[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 101 - 50;
        cout << arr[i] << " ";
    }
cout << "\nModify massive\n";
 for (int i = 0; i < size; ++i)
    {
     if (arr[i] % 2 == 0)
         arr[i] *= arr[i];
        cout << arr[i] << " ";
     }
    system("pause");
}