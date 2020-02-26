#include <iostream>
#include <string>

using namespace std;

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
            c = b.find(a[j]); //TODO: substitute for a self made function
            // cout << "found " << a[j] << " at " << c << " in " << b << endl;

            if (c > -1)
            {
                max_prefix++;
                b[c] = '_';
            }
            else
            {
                break;
            }

            // cout << "b: " << b << endl;
        }

        cout << max_prefix << endl;
    }

    return 0;
}