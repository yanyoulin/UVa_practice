#include <iostream>
#include <vector>

using namespace std;

vector <string> v;
string word = "";
int num = 0;

void moveList(string w) //把字串往後移，把新讀進來的擺第一個
{
    v.push_back(v.back()); //將最尾巴的字串再複製一份放在新的尾巴
    for(int i = v.size() - 2; i>0; i--) //剩下全部往後移
    {
        v[i] = v[i-1];
    }
    v[0] = w; //第一個放入新的字串
}

void printW() //讀到的是文字就直接輸出文字並且放入第一個
{
    cout<<word;
    if(v.empty())
        v.push_back(word);
    else
        moveList(word);
    word = ""; //把文字清空以便下次讀取
}

void printN() //讀到的是文字就輸出vector中第i位置的值
{
    string w = v[num - 1];
    for(int i = num - 1; i>0; i--) //在目標字串前的字串全部往後移
    {
        v[i] = v[i-1];
    }
    v[0] = w;
    cout<<w;
    num = 0;
}

int main()
{
    string s;
    while(getline(cin, s))
    {
        if(s == "0") break;
        s += "\n"; //c++可以直接補\n在string裡面以便整理一行輸入
        for(int i = 0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
                word+=s[i];
            else if(isdigit(s[i]))
                num = num*10 + s[i] - '0';
            else //非字母或數字
            {
                if(num)
                    printN();
                if(word != "")
                    printW();
                cout<<s[i];
            }
        }
    }
    return 0;
}
