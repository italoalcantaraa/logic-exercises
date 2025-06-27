/*Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A. */

#include <iostream>

using namespace std;

void swap(int *ptr_a, int *ptr_b)
{
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}

int main()
{

    int a;
    int b;

    cout << "Informe o valor de A: ";
    cin >> a;

    cout << "Informe o valor de B: ";
    cin >> b;

    swap(&a, &b);

    cout << "A: " << a << '\n';
    cout << "B: " << b;

    return 0;
}