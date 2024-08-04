#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n;
    scanf("%d\n", &n);
    for(int i = 1; i<=n; i++)
    {
        char s1[31];
        char s2[31];
        int b1 = 0, b2 = 0;
        scanf("%s", s1);
        scanf("%s", s2);
        printf("Pair #%d: ", i);
        for(int j = 0; j<strlen(s1); j++)
        {
            b1 = b1*2 + (s1[j] - '0'); //將二進位字串轉為數字
        }
        for(int j = 0; j<strlen(s2); j++)
        {
            b2 = b2*2 + (s2[j] - '0'); //將二進位字串轉為數字
        }
        while(b2>0) //輾轉相除法找是否存在公因數，記得複習
        {
            int z = b1%b2;
            b1 = b2;
            b2 = z;
        }
        if(b1>1)
            printf("All you need is love!\n");
        else
            printf("Love is not all you need!\n");
    }
    return 0;
}
