/*10. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido.*/

#include <iostream>

using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        cout << "Informe o " << (i + 1) << "º valor: ";
        cin >> *(array + i);
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Valor: " << *(array + i) * 2 << '\n';
    }
}