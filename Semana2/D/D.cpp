#include <iostream>

using namespace std;

int main()
{
    int N;
    int W, w, l;
    int areaTotal=0;

    cin >> W >> N;

    for (int i = 0; i < N; i++)
    {        
        cin >> w >> l;
        areaTotal += w * l;
    }

    cout << areaTotal / W << endl;
    return 0;
}