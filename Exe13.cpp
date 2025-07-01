// Elabore uma func¸ao que receba duas strings como par ˜ ametros e verifique se a segunda ˆ
// string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
// das strings.

#include <iostream>

using namespace std;

bool equals(string *value1, string *value2)
{

    int sizeValue1 = value1->length();
    int sizeValue2 = value2->length();

    string sequence;

    return true;
}

int main()
{
    string value1, value2;

    cout << "Informe o primeiro valor: ";
    getline(cin >> ws, value1);

    cout << "Informe o segundo valor: ";
    getline(cin >> ws, value2);

    equals(&value1, &value2);

    return 0;
}