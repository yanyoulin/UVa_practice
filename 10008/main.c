#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n;
    char c;
    char line[1000];
    int count[96]={0}; //這裡開96是因為大寫Z是90，比90大都可以
    scanf("%d\n", &n);
    for(int i = 0; i<n; i++)
    {
        gets(line);
        for(int j = 0; j<strlen(line); j++)
        {
            c = line[j];
            if(c>='a' && c<='z') //將小寫換成大寫作統計
                c-=32;
            if(c>='A' && c<='Z')
                count[c]+=1; //計算每個字母出現次數
        }
    }
    int max = 0;
    for(c='A'; c<='Z'; c++) //用max值來排出現次數大小
    {
        if(count[c]>max)
            max = count[c];
    }
    int f = max;
    while(f)
    {
        for(c='A'; c<='Z'; c++)
        {
            if(count[c] == f)
                printf("%c %d\n", c, f);
        }
        f -= 1; //掃過max到1的每一個次數
    }
    return 0;
}
