#include <iostream>

/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´ modificac¸ao. */

using namespace std;

int main()
{

    int var1 = 10;
    char var2 = 'a';
    double var3 = 2.5;

    cout << "Antes: \n";
    cout << "var1 " << var1 << '\n';
    cout << "var2 " << var2 << '\n';
    cout << "var3 " << var3 << '\n';

    int *ptrVar1 = &var1;
    char *ptrVar2 = &var2;
    double *ptrVar3 = &var3;

    *ptrVar1 = 20;
    *ptrVar2 = 'b';
    *ptrVar3 = 4.6;

    cout << "Antes: \n";
    cout << "var1 " << var1 << '\n';
    cout << "var2 " << var2 << '\n';
    cout << "var3 " << var3 << '\n';

    return 0;
}