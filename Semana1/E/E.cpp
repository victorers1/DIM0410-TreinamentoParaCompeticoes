#include <iostream>
#include <string>

using namespace std;

// void printArray(int a[])
// {
//     for (int i = 97; i < 123; i++)
//         cout << a[i] << " ";
// }

int main()
{
    int t, max_prefix, index;
    string a, b;

    int dicA[123] = {0}; // dicionários com contagem de cada letra em A
    int dicB[123] = {0}; // dicionários com contagem de cada letra em B

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        max_prefix = 0;

        // Zera arrays
        for (int i = 97; i < 123; i++)
            dicA[i] = 0;
        for (int i = 97; i < 123; i++)
            dicB[i] = 0;

        cin >> a >> b;

        for (int j = 0; j < a.size(); j++)
            dicA[a[j]]++; // caracteres de 'a' a 'z' têm valores de 97 a 122

        for (int j = 0; j < b.size(); j++)
            dicB[b[j]]++;

        // cout << "a: " << endl;
        // printArray(dicA);
        // cout << endl;
        // cout << "b: " << endl;
        // printArray(dicB);
        // cout << endl;

        for (int j = 0; j < a.size(); j++)
        {
            index = a[j]; //calcula índice dos elementos que serão comparados de acordo com a letra


            // cout << "Qtd de " << a[j] << " em a: " << dicA[index] << endl;
            // cout << "Qtd de " << a[j] << " em b: " << dicB[index] << endl;

            if (dicA[index] > 0 && dicB[index] > 0) //
            {
                dicA[index]--;
                dicB[index]--;
                max_prefix++;
            }
        }

        cout << max_prefix << endl;
    }

    return 0;
}
