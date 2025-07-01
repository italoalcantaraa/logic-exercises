// Fac¸a um programa que leia tres valores inteiros e chame uma func¸ ˆ ao que receba estes 3 ˜
// valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, ´
// o segundo menor valor na variavel do meio, e o maior valor na ´ ultima vari ´ avel. A func¸ ´ ao˜
// deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
// Exibir os valores ordenados na tela.

#include <iostream>

using namespace std;

int sort(int *n1, int *n2, int *n3)
{

    int array[3] = {*n1, *n2, *n3};

    for (int i = 0; i < 3; i++)
    {
        int swap = false;
        for (int j = 0; j < ((2 - i)); j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swap = true;
            }
        }
        if (!swap)
            break;
    }

    *n1 = array[0];
    *n2 = array[1];
    *n3 = array[2];

    for (int i = 0; i < 2; i++)
    {
        if (array[i] != array[i + 1])
            return 0;
    }

    return 1;
}

int main()
{

    int numbers[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Informe o " << i + 1 << "º valor: ";
        cin >> numbers[i];
    }

    int value = sort(&numbers[0], &numbers[1], &numbers[2]);

    int n1 = numbers[0];
    int n2 = numbers[1];
    int n3 = numbers[2];

    cout << "Iguais: " << value << '\n';

    cout << "Numbers:\n"
         << "N1: " << n1 << "\nN2: " << n2 << "\nN3: " << n3;

    return 0;
}