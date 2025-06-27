/*8. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array.*/

#include <iostream>

using namespace std;

int main()
{

    float numbers[10];
    int size = sizeof(numbers) / sizeof(float);

    for (int i = 0; i < size; i++)
    {
        numbers[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "] = " << numbers[i] << " -> " << &numbers[i] << '\n';
    }

    return 0;
}