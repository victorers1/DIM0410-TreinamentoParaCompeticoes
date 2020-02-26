#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int n, a, b, maior, menor, cases = 1;
    char amostra;
    bool igual = false;

    while (cin >> input)
    {

        cin >> n;

        cout << "Case " << cases++ << ":\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a >= b)
            {
                maior = a;
                menor = b;
            }
            else
            {
                maior = b;
                menor = a;
            }

            amostra = input[menor];
            igual = true;

            for (int i = menor + 1; i < maior+1; i++)
            {
                if (input[i] != amostra)
                {
                    igual = false;
                    break;
                }
            }

            if (igual)
                cout << "Yes";

            else
                cout << "No";

            cout << endl;
        }
    }

    return 0;
}