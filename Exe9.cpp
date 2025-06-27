/*9. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.*/
#include <iostream>

using namespace std;

int main()
{
    float matriz[3][3];
    int line_size = sizeof(matriz) / sizeof(matriz[0]);
    int column_size = sizeof(matriz[0]) / sizeof(float);


    for(int i = 0; i < line_size; i++) {
        for(int j = 0; j < column_size; j++) {
            matriz[i][j] = i + j;
        }
    }

    for (int i = 0; i < line_size; i++)
    {
        for (int j = 0; j < column_size; j++)
        {
            cout << "[" << i << "]" << "[" << j << "] = " << matriz[i][j] << " -> " << &matriz[i][j] << '\n';
        }
    }

    return 0;
}