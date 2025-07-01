/* 11. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec¸o das posic¸oes contendo valores pares*/

#include <iostream>

using namespace std;

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cout << "Informe o " << i + 1 << "º valor: ";
        cin >> numbers[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            cout << "Endereço: " << &numbers[i] << "Valor: " << numbers[i] << '\n';
        }
    }

    return 0;
}