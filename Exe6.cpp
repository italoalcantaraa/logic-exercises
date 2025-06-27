/*
6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ao˜
que retorne a soma do dobro dos dois numeros lidos. A func¸ ´ ao dever ˜ a armazenar o dobro ´
de A na propria vari ´ avel A e o dobro de B na pr ´ opria vari ´ avel B. */

#include <iostream>

using namespace std;

int doubleAndAdd(int *ptr_n1, int *ptr_n2)
{
    *ptr_n1 += *ptr_n1; // adiciona o dobro do valor no proprio ponteiro de n1
    *ptr_n2 += *ptr_n2; // adiciona o dobro do valor no proprio ponteiro de n2

    return *ptr_n1 + *ptr_n2;
}

int main()
{

    int n1;
    int n2;
    cout << "Informe o primeiro valor: ";
    cin >> n1;

    cout << "Informe o segundo valor: ";
    cin >> n2;

    int calc = doubleAndAdd(&n1, &n2);

    cout << "N1: " << n1 << '\n';
    cout << "N2: " << n2 << '\n';
    cout << "Soma: " << calc;

    return 0;
}