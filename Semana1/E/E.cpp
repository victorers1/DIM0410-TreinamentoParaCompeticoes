#include <iostream>
#include <string>

using namespace std;

/**
    Recebe um ponteiro 's' para um array de caracteres e um caractere 'c'.
    Procura por 'c' no array e retorna seu índice, caso exista.
    Se 'c' não está contido em 's', retorna -1.
*/
int findChar(char* s, char c)
{
    for(int i=0; *(s+i)!='\0'; i++)
    {
        if(*(s+i)==c)
            return i;
    }
    return -1;
}

int main()
{
    int t, max_prefix, c;
    string a, b;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        max_prefix = 0;
        cin >> a >> b;
        for (int j = 0; j < a.size(); j++)
        {
            c = findChar(&b[0], a[j]);

            if (c > -1)
            {
                max_prefix++;
                b[c] = '_';
            }
            else
            {
                break;
            }

        }

        cout << max_prefix << endl;
    }

    return 0;
}
