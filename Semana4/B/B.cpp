#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, m;

    int cd;
    int cont = 0;

    while (cin >> n >> m && !(n == 0 && m == 0))
    {
        map<int, bool> catalog;
        cont = 0;

        for (; n > 0; n--)
        {
            cin >> cd;
            catalog[cd] = true;
        }

        for (; m > 0; m--)
        {
            cin >> cd;
            if (catalog[cd])
                cont++;
        }

        cout << cont << endl;
    }

    return 0;
}