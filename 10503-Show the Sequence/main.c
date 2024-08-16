#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int a[51];

void sequence(char s[]) //���j�禡�q�̤���S�B�z�A�@���V�~�A��a[]�ӰO���e�@�ӻ��j���ȥΨӭp��
{
    int sign = 1, m = 0, i; //sign�ΨӰO�����Ʀr�O�_���t��
    char oper;
    for(i = 1; s[i] != NULL; i++)
    {
        if(s[i] == '-') sign = -1;
        else if(s[i] <= '9' && s[i] >= '0') //��m�qchar�নint
        {
            m = 10*m + (s[i] - '0');
        }
        else
        {
            oper = s[i]; //���X"+", "*", "]"�N��
            break;
        }
    }
    m = sign * m; //�⥿�t�ɤW
    if(oper == '+')
    {
        sequence(s + i + 1); //���j�A�o�X�����G�w�g�O���ba[]���F
        long long int d = a[0]; //��a[0]���e�@�ӻ��j��m
        a[0] = m; //�o�����j�o�X��m��Ja[0]�i���s
        for(int j = 1; j<=50; j++)
        {
            long long int temp = a[j]; //�e�@�����j�o�X��a[j]
            a[j] = a[j - 1] + d; //Vi-1 + Si-1 (��j=1�ӬݴN�O�D�ؤ���i=2�A�]��V2 = V1(�������j��m) + S1(�e�����j��m))
            d = temp; //�i��U���p��
        }
    }
    else if(oper == '*')
    {
        sequence(s + i + 1);
        a[0] = a[0]*m; //�e�@�����j���Ĥ@�������H������m
        for(int j = 1; j<=50; j++)
            a[j] = a[j] * a[j - 1]; //�A�ᶵ����e�����H��ᶵ(Vi = Vi-1 * Si)
    }
    else //�Y������"]"�A���N�����N�o�X��m�s�Ja���C�@���N�n�A�i��U�����j��
    {
        for(int j = 0; j<=50; j++)
            a[j] = m;
    }
}

int main()
{
    int n;
    char s[1000];
    while(scanf("%s %d", s, &n) == 2)
    {
        for(int i = 0; i<=50; i++) //�M��a�A�i������memset(a, 0, sizeof(a));
            a[i] = 0;
        sequence(s);
        for(int j = 0; j<n; j++)
        {
            if(j != n-1)
                printf("%lld ", a[j]);
            else
                printf("%lld\n", a[j]);
        }
    }
    return 0;
}
