#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;
//�Ѧ�00245-Uncompress
int main()
{
    int n;
    string s;
    vector <string> v;
    scanf("%d\n", &n);
    while(getline(cin, s) && s != "EndOfText")
    {
        s+="\n";
        string w = "";
        for(int i = 0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                s[i] = tolower(s[i]); //�n���p�g
                w+=s[i];
            }
            else if(s[i] == '-') //�ڭ̨S���nŪ�@�̦W
            {
                break;
            }
            else
            {
                if(!w.empty())
                {
                    v.push_back(w);
                    w = "";
                }
            }
        }
    }
    sort(v.begin(), v.end());
    int k = 0;
    int j;
    for(j = 0; j<v.size(); j++)
    {
        if(v[j] != v[k])
        {
            if(j-k == n)
                cout<<v[k]<<endl;
            k=j;
        }
    }
    if(j-k == n)
        cout<<v[k]<<endl;
    return 0;
}