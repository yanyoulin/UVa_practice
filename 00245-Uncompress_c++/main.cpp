#include <iostream>
#include <vector>

using namespace std;

vector <string> v;
string word = "";
int num = 0;

void moveList(string w) //��r�꩹�Ჾ�A��sŪ�i�Ӫ��\�Ĥ@��
{
    v.push_back(v.back()); //�N�̧��ڪ��r��A�ƻs�@����b�s������
    for(int i = v.size() - 2; i>0; i--) //�ѤU�������Ჾ
    {
        v[i] = v[i-1];
    }
    v[0] = w; //�Ĥ@�ө�J�s���r��
}

void printW() //Ū�쪺�O��r�N������X��r�åB��J�Ĥ@��
{
    cout<<word;
    if(v.empty())
        v.push_back(word);
    else
        moveList(word);
    word = ""; //���r�M�ťH�K�U��Ū��
}

void printN() //Ū�쪺�O��r�N��Xvector����i��m����
{
    string w = v[num - 1];
    for(int i = num - 1; i>0; i--) //�b�ؼЦr��e���r��������Ჾ
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
        s += "\n"; //c++�i�H������\n�bstring�̭��H�K��z�@���J
        for(int i = 0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
                word+=s[i];
            else if(isdigit(s[i]))
                num = num*10 + s[i] - '0';
            else //�D�r���μƦr
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
