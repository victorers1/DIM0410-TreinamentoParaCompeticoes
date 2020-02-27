#include <iostream>
#include <string>

using namespace std;

/**
    Recebe um ponteiro 's' para um array de caracteres e um caractere 'c'.
    Procura por 'c' no array e retorna seu índice, caso exista.
    Se 'c' não está contido em 's', retorna -1.
*/
/**
int findChar(char* s, char c)
{
    for(int i=0; *(s+i)!='\0'; i++)
    {
        if(*(s+i)==c)
            return i;
    }
    return -1;
}

*/

void printArray(int a[], int t)
{
    for(int i=0; i<t; i++)
        cout<<a[i]<<" ";
}

void zeraArray(int a[], int t)
{
    for(int i=0; i<t; i++)
        a[i] = 0;
}

int main()
{
    int t, max_prefix;
    string a, b;

    int dicA [26] = {0}; // dicionários com contagem de cada letra em A
    int dicB [26] = {0}; // dicionários com contagem de cada letra em B

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        max_prefix = 0;

        zeraArray(dicA, 26);
        zeraArray(dicB, 26);

        cin >> a >> b;
        for (int j = 0; j < a.size(); j++)
        {
            dicA[a[j]-97]++; // mapeia 'a' para 0 até 'z' para 25
        }

        for (int j = 0; j < b.size(); j++)
        {
            dicB[b[j]-97]++;
        }

        /*
        cout<<"a: "<<endl;
        printArray(dicA, 26);
        cout<<endl;
        cout<<"b: "<<endl;
        printArray(dicB, 26);
        cout<<endl;
        */

        for(int j = 0; j < a.size(); j++)
        {
            cout<<"qtd de "<<a[j]<<" em a: "<<dicA[a[j]-97]<<endl;
            cout<<"qtd de "<<a[j]<<" em b: "<<dicB[a[j]-97]<<endl;

            //max_prefix += dicA[a[j]] < dicB[a[j]] ? dicA[a[j]] : dicB[a[j]]; // soma a menor entre as quantidade de letras ao contador de prefixo

            if(dicA[a[j]-97] <= dicB[a[j]-97])
                max_prefix++;
            else
                break;
        }

        cout << max_prefix << endl;
    }

    return 0;
}
