#include <iostream>
#include <string>

using namespace std;

string a, b;
int max_prefix = 0;

int prefix(string a, string b)
{
    int prefix_len = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
            prefix_len++;
        else
            break;
    }

    return prefix_len;
}

/**
 * Função recursiva que imprime todas as permutações da string str.
 * Quando obtemos a permutação de 'b', é realizada a contagem do tamanho do prefixo comum com a string 'a'.
 * 
 */
void permuta(string str, int l, int r)
{
    if (l == r) // caso base
    {
        int current_prefix = 0;

            for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == str[i])
                current_prefix++;
            else
                break;
        };

        if (current_prefix > max_prefix)
        {
            max_prefix = current_prefix;
        }
        // cout << str << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(str[l], str[i]);

            permuta(str, l + 1, r);

            swap(str[l], str[i]);
        }
    }
}

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        max_prefix = 0;

        cin >> a >> b;

        permuta(b, 0, b.size() - 1);

        cout << max_prefix << endl;
    }

    return 0;
}