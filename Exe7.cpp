/*Crie um programa que contenha uma func¸ao que permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜ a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A. Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de A e B na func¸ ˜ ao principal.*/

#include <iostream>

using namespace std;

void sum(int *ptr_a, int *ptr_b)
{
    *ptr_a += *ptr_b;
    
}

int main()
{
    int a;
    int b;

    cout << "Informe o valor de A: ";
    cin >> a;

    cout << "Informe o valor de B: ";
    cin >> b;

    sum(&a, &b);

    cout << "A: " << a << '\n';
    cout << "B: " << b << '\n';

    return 0;
}