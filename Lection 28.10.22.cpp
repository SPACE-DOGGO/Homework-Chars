#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(0, "UKR");

    char* sentence = new char[200];
    cout << "Please, enter your sentence: ";
    gets_s(sentence, 200); 

    int wordsCount = 0;
    int vowels[10] = {97, 101, 105, 111, 117, 65, 69, 73, 79, 85};
    int vowelsCount = 0;
    int consonants[42] = {67, 68, 70, 71, 72, 74, 75, 76, 77, 78, 80, 81, 82, 83, 84, 86, 87, 88, 89, 90, 98, 99, 100, 102, 103, 104, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 118, 119, 120, 121, 122};
    int consonantsCount = 0;
    int punctuations[7] = {33, 34, 44, 46, 58, 59, 63};
    int punctuationsCount = 0;
    int numbers[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
    int numbersCount = 0;
    int specialSymbols[9] = {35, 36, 37, 38, 39, 42, 47, 64, 95};
    int specialSymbolsCount = 0;

    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == 32)
        {
            wordsCount++;
        }

        for (int j = 0; j < 10; j++)
        {
            if (sentence[i] == vowels[j])
            {
                vowelsCount++;
            }
        }

        for (int k = 0; k < 42; k++)
        {
            if (sentence[i] == consonants[k])
            {
                consonantsCount++;
            }
        }

        for (int l = 0; l < 7; l++)
        {
            if (sentence[i] == punctuations[l])
            {
                punctuationsCount++;
            }
        }

        for (int h = 0; h < 10; h++)
        {
            if (sentence[i] == numbers[h])
            {
                numbersCount++;
            }
        }

        for (int t = 0; t < 7; t++)
        {
            if (sentence[i] == specialSymbols[t])
            {
                specialSymbolsCount++;
            }
        }
    }

    cout << "\nСлов: " << wordsCount << "\nГласных букв: " << vowelsCount << "\nСогласных букв: " << consonantsCount << "\nЗнаков пунктуации: " << punctuationsCount << "\nЦифр: " << numbersCount++ << "\nДругих символов: " << specialSymbolsCount << "\n";

    delete[] sentence;
}

