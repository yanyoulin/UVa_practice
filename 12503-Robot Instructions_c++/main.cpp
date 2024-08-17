#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        int s;
        cin >> s;
        cin.ignore();
        vector <int> v;
        int pos = 0;
        for(int j = 0; j<s; j++)
        {
            string way;
            int num = 0;
            getline(cin, way);
            if(way == "LEFT")
                v.push_back(-1);
            else if(way == "RIGHT")
                v.push_back(1);
            else
            {
                for(int k = 8; k<way.size(); k++) //我們取數字就好
                    num = num*10 + way[k] - '0';
                v.push_back(v[num-1]);
            }
            pos += v[j];
        }
        cout << pos <<endl;
    }
    return 0;
}

