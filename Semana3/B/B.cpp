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

    string subStr[k];

    for(int i = 0; i< s.size(); i++)
    {
        kString[s[i]]++;

        if(kString[s[i]]==k)
        {
            kString[s[i]]=0;

            for(int j=0; j<k; j++)
                subStr[j] += s[i];
        }

    }

    bool isKString=true;
    for (map<char,int>::iterator it=kString.begin(); it!=kString.end(); ++it)
    {
        //cout << it->first << " => " << it->second << '\n';
        if(it->second)
            isKString=false;
    }

    if(isKString)
    {
        string str="";
        for(int i=0; i<k; i++)
        {
            str = str.append(subStr[i]);
        }
        cout<<str<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }


    return 0;
}
