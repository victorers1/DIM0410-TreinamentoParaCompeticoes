#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int k;
    map<char, int> kString;
    string s, head="", tail="";


    cin>>k>>s;

    for(int i = 0; i< s.size(); i++)
    {
        if(kString[s[i]]==k-1)
        {
            kString[s[i]]=0;
            head += s[i];
            tail += s[i];
            /*String resultante de head.append(tail) tem uma cópia a menos da string k,
            pois os caracteres só  acrescentados depois que é digitado k-1 vezes.
            */
            cout<<"head: "<<head<<endl;
            cout<<"tail: "<<tail<<endl;
        }
        else
            kString[s[i]]++;


    }

    bool isKString=true;
    for (map<char,int>::iterator it=kString.begin(); it!=kString.end(); ++it)
    {
        cout << it->first << " => " << it->second << '\n';
        if(it->second)
            isKString=false;
    }

    if(isKString)
    {
        string str = head.append(tail);
        cout<<str<<endl;
    }


    return 0;
}
