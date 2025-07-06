#include <iostream>
using namespace std;

template <typename T>
void PrintArray(T array[], int tam);


int main()
{

    int numeros[] = { 1,2,3,4,5,6,7,8,9,0 };


    PrintArray(numeros, 10);

    return 0;
}


template <typename T>
void PrintArray(T array[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << array[i] << " " << endl;
    }
}