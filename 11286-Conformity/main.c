#include <stdio.h>
#include <stdlib.h>

int comp(const void*a, const void*b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        if(n == 0) break;
        int s[10001][5];
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<5; j++)
            {
                scanf("%d", &s[i][j]);
            }
            qsort(s[i], 5, sizeof(int), comp);
        }
        int max = 0, count, total; //�]�����i�঳��դH�W���P���׽ҲզX�A�ҥH�����¬ݨ�դH�O�_�׽ҬۦP�A�٭n�h��i�઺��L�զX����H��
        int c[10001] = {0}; //���ˬd����P�ǬO�_�Q�p�J�զX�L�F�A�Q�p�J����A��@���A�S�Q�p�J���~�ݭn��s
        for(int i = 0; i<n; i++)
        {
            count = 1;
            for(int j = i+1; j<n; j++)
            {
                if(memcmp(s[i], s[j], 5*sizeof(int)) == 0) //����strcmp������禡�A�n����size
                {
                    count++;
                    c[j] = 1; //��ܦ��ǥͳQ�p��L
                }
            }
            if(c[i] != 1) //��i�ǥ�(�ؼоǥ�)�S�Q�p��L=>��s�H��
            {
                if(count > max)
                {
                    max = count;
                    total = max;
                }
                else if(count == max) //�Y����ӿ�ҲզX�H�ƬۦP�N�[�_��
                {
                    total = total + max;
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}


