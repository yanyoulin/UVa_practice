#include <iostream>

using namespace std;
/*
    此題是Josephus Problem喬瑟夫問題，就是每人編號數幾個就自殺的題目，看誰活到最後
    比較難理解，可以看:https://hackmd.io/@erichung0906/H1ljCesy_
    就是把陣列想成一個環
    每次加上我們要數幾個數來維持這個環
    只有一人時存活者編號為0
    透過for迴圈來算出這個存活者在不同人數時的編號是多少
    最後求得有n人時的編號
    此題因為第一個人要先殺
    所以改成求n-1人的喬瑟夫問題
*/
int Joseph_Problem(int n,int m)
{
    int pos = 0;
    for(int i=2;i<=n;i++)
        pos=(pos+m)%i;
    return pos + 1;
}

int main()
{
    int n,m;
    while(cin>>n && n!=0)
    {
        if(n==13)
            m=1;
        else
        {
            m=2;
            while(Joseph_Problem(n-1,m)!=12)
                m++;
        }
        cout<<m<<endl;
    }
    return 0;
}
