#include <iostream>
#include <string.h>
#include <vector>

using namespace std;
//這題用到binary search，忘記可以看這個網站學:https://medium.com/appworks-school/binary-search-%E9%82%A3%E4%BA%9B%E8%97%8F%E5%9C%A8%E7%B4%B0%E7%AF%80%E8%A3%A1%E7%9A%84%E9%AD%94%E9%AC%BC-%E4%B8%80-%E5%9F%BA%E7%A4%8E%E4%BB%8B%E7%B4%B9-dd2cd804aee1
int main()
{
    int n, m;
    int s[1001] = {0};
    while(scanf("%d %d", &n, &m) != EOF)
    {
        for(int i = 0; i<n; i++)
            scanf("%d", &s[i]);
        int left = 0, right = 0; //left->contaner的最大容量 //right->所有牛奶的總容量
        for(int i = 0; i<n; i++)
        {
            if(s[i] > left) left = s[i];
            right += s[i];
        }
        while(left<=right)
        {
            int mid = (left + right)/2;
            int cont = 0, sum = 0;
            for(int j = 0; j<n; j++)
            {
                sum += s[j];
                if(sum > mid)
                {
                    sum = s[j];
                    cont++;
                }
                else if(sum == mid)
                {
                    sum = 0;
                    cont++;
                }
            }
            if(sum > 0) cont++;
            if(cont > m) left = mid + 1;
            else right = mid - 1;
        }
        printf("%d\n", left);
    }
    return 0;
}
