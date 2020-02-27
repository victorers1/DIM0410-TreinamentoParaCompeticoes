#include <iostream>
#include <vector>

using namespace std;

int a = 2, b = 1;

/**
 * Testa se é possível, com valores de 'a' e 'b' fixos, obter 's' por meio de uma combinação linear de 'a' com 'b'.
 */
void magica(int s)
{
    int soma = 0;
    while (soma < s)
    {
        soma += a;

        if (soma == s){
            cout << a << "," << b << endl;
            break;
        }

        soma+= b;

        if (soma == s){
                cout << a << "," << b << endl;
            break;
        }
    }



}

int main()
{
    int s;
    cin >> s;
    cout << s << ":\n";

    while (a < s)
    {
        magica(s);
        b++;

        magica(s);
        a++;
    }
    return 0;
}
