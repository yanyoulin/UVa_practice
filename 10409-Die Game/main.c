#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char s[8];
    scanf("%d\n", &n);
    while(n != 0)
    {
        int top = 1, north = 2, west = 3;
        for(int i = 0; i<n; i++)
        {
            int temp;
            gets(s);
            if(strcmp(s, "north") == 0)
            {
                temp = top;
                top = 7 - north;
                north = temp;
            }
            if(strcmp(s, "south") == 0)
            {
                temp = top;
                top = north;
                north = 7 - temp;
            }
            if(strcmp(s, "west") == 0)
            {
                temp = top;
                top = 7 - west;
                west = temp;
            }
            if(strcmp(s, "east") == 0)
            {
                temp = top;
                top = west;
                west = 7 - temp;
            }
        }
        printf("%d\n", top);
        scanf("%d\n", &n);
    }
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int die[6] = {1, 2, 3, 4, 5, 6};

void newDie(int x)
{
    int d[6];
    for(int k = 0; k<6; k++)
        d[k] = die[k];
    if(x == 1 || x == 4)
    {
        die[0] = d[(-1)*x + 5];
        die[1] = d[0];
        die[2] = d[2];
        die[3] = d[3];
        die[4] = d[5];
        die[5] = d[x];
    }
    if(x == 2 || x == 3)
    {
        die[0] = d[(-1)*x + 5];
        die[1] = d[1];
        die[2] = d[5];
        die[3] = d[0];
        die[4] = d[4];
        die[5] = d[x];
    }
}

int main()
{
    int n;
    char s[8];
    scanf("%d\n", &n);
    while(n != 0)
    {
        for(int i = 0; i<n; i++)
        {
            int a;
            gets(s);
            if(strcmp(s, "north") == 0) a = 1;
            if(strcmp(s, "south") == 0) a = 4;
            if(strcmp(s, "east") == 0) a = 3;
            if(strcmp(s, "west") == 0) a = 2;
            newDie(a);
        }
        printf("%d\n", die[0]);
        for(int j = 0; j<6; j++)
            die[j] = j + 1;
        scanf("%d\n", &n);
    }
    return 0;
}
*/
