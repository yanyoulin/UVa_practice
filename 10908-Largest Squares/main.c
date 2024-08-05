#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[100][100];
int m,n;
int isSquare(int r, int c, int radius) //�P�_�b�w��radius�U�A���Ŷ��O�_�������
{
    int top, bottom, left, right;
    char mid = s[r][c];
    top = r - radius; //������Ϊ��̤W�U���k
    bottom = r + radius;
    left = c - radius;
    right = c + radius;
    if(top < 0 || bottom >= m || left < 0 || right >= n) //�W�X�ɽureturn 0
        return 0;
    for(int i = top; i <= bottom; i++)
    {
        for(int j = left; j <= right; j++)
        {
            if(s[i][j] != mid) return 0; //��X���P�Nreturn 0
        }
    }
    return 1;
}

int main(int argc, char **argv)
{
    int t, q, r, c;
    scanf("%d", &t);
    for(int k = 0; k<t; k++)
    {
        scanf("%d %d %d\n", &m, &n, &q);
        for(int i = 0; i<m; i++)
        {
            gets(s[i]); //�O�n�o�Ϊk�A�Ĥ@�����D�ɥ������j�鵲�GŪ�����X��
        }
        printf("%d %d %d\n", m, n, q);

        for(int i = 0; i<q; i++)
        {
            int radius = 0;
            scanf("%d %d", &r, &c);
            while(isSquare(r, c, radius))
            {
                radius++;
            }
            printf("%d\n", radius*2 - 1);
        }

    }
    return 0;
}
