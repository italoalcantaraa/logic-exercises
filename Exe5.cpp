/*5. Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela. */

#include <iostream>

using namespace std;

void swap(int *ptr1, int *ptr2)
{
    int sub = *ptr1 - *ptr2;

    if (sub < 0)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}

int main()
{
    int value1;
    int value2;

    cout << "Informe o valor de n1: ";
    cin >> value1;

    cout << "Informe o valor de n2: ";
    cin >> value2;

    swap(&value1, &value2);

    cout << "N1: " << value1 << '\n';
    cout << "N2: " << value2;
    return 0;
}