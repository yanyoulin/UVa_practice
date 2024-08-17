#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int win[1000000] = {0};

int main()
{
    int r, w, i;
    while(scanf("%d %d", &r, &w) == 2)
    {
        int s[10];
        for(i = 0; i<w; i++)
        {
            scanf("%d", &s[i]);
        }
        for(i = 1; i<=r; i++) //�P�_�b���Y�Ѧh�֪����p�U���ӭt
        {
            win[i] = 0;
            for(int j = 0; j<w; j++)
            {
                if(i - s[j] >= 0) //���Y�ƶq - �@���i�H���h�֥��Y
                {
                    if(win[i - s[j]] == 0) //����ܲĤG��b( ���Y�ƶq - �@���i�H���h�֥��Y )�ɬO�L�k�ӧQ���A�]�N�O�Ĥ@��ӧQ
                    {
                        win[i] = 1; //�Ĥ@�ӤHĹ
                        break;
                    }
                }
            }
        }
        if(win[r] == 1)
            printf("Stan wins\n");
        else
            printf("Ollie wins\n");
    }
    return 0;
}
