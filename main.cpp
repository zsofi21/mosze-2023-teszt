#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //typo
    std::cout << '1-100 ertekek duplazasa' //;
    for (int i = 0;) //primary expression hianyzik
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hibas primary expression
    {
        std::cout << "Ertek:" //nem irja ki az erteket
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; //memoria nem kerul felszabaditasra
}
