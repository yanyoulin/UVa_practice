#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
    int p[10000] = {0};
    vector <int> v;
    for(int i = 2; i<10000; i++) //窮舉質數法
    {
        if(p[i] == 0)
        {
            for(int j = i+i; j<10000; j+=i)
            {
                p[j] = 1;
            }
            v.push_back(i);
        }
    }
    int a;
    while(cin>>a)
    {
        if(a == 0) break;
        int cnt = 0;
        for(int i = 0; v[i]<=a; i++)
        {
            int sum = 0;
            for(int j = i; sum<a; j++)
            {
                sum = sum + v[j];
                if(sum == a)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
