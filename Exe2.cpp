#include <iostream>

using namespace std;

/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o.*/

int main()
{
    int n2 = 1;
    int n1 = 1;

    if (&n1 > &n2)
    {
        cout << "n1 é maior\n";
    }
    else
    {
        cout << "n2 é maior\n";
    }

    cout << "n1: " << &n1 << '\n';
    cout << "n2: " << &n2;

    return 0;
}