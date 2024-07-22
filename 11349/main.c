#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n, N;
    long long int s[10001];
    scanf("%d\n", &n);
    for(int k = 0; k<n; k++)
    {
        scanf(" N = %d", &N); //�O�n�o�ӥ��k�A���J�����o�D�b��J�ܼƫe�n����J�F�誺�A�����g�b�̭��A���O�o�ɪŮ�
        for(int i = 0; i<N*N; i++)
        {
            scanf("%lld", &s[i]);
        }
        int check = 0;
        for(int i = 0; i<N*N; i++)
        {
            if(s[i] != s[N*N - 1 - i] || s[i] < 0) //���D�ئ����������p��0
            {
                check = 1;
            }
        }
        if(check)
            printf("Test #%d: Non-symmetric.\n", k + 1);
        else
            printf("Test #%d: Symmetric.\n", k + 1);
    }
    return 0;
}
