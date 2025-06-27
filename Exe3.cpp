/*3. Escreva um programa que contenha duas variaveis inteiras. Leia essas vari ´ aveis do ´
teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior enderec¸o.  */

#include <iostream>

using namespace std;

int main()
{

    int n1;
    int n2;

    cout << "Informe o valor de n1: ";
    cin >> n1;

    cout << "Informe o valor de n2: ";
    cin >> n2;

    if (&n1 > &n2)
    {
        cout << "n1: " << &n1;
        return 0;
    }

    cout << "n2: " << &n2;

    return 0;
}