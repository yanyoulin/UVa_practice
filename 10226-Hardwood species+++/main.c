#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[1000000][31] = {0};

int comp(const void *a, const void *b)
{
    return strcmp((char*)a, (char*)b); //�ڭ̭n����r��j�p
    //strcmp�|�}�l����C�@�Ӧr�ꪺ�Ĥ@�Ӧr���C�p�G���̩����۵��A���|�~��i��U�C�t��A����r�����P�Ψ�F���u�r�ꪺ��������C
    //�Y�O1=>a��b�j
}

int main()
{
    int n;
    scanf("%d", &n);
    scanf("\n\n"); //�n�h��J�@��enter
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<count; j++) //��e�@����J���M��
            s[j][0] = '\0';
        count = 0;
        gets(s[count]); //Ū�Ĥ@�Ӧr��
        while(strlen(s[count]) != 0) //�r�ꤣ�O�Ū��ܶi�J�j��A��Ҧ��nŪ���r��C�Ӱj��Ū�@��
        {
            count++;
            gets(s[count]);
        }
        qsort(s, count, 31, comp); //��qsort���ƧǡAqsort(�ؼа}�C, �����ƶq, �����j�p, ������)
        int k = 0;
        int j;
        for(j = 0; j<count; j++)
        {
            if(strcmp(s[j], s[k]) != 0) //��qsort�����G�q��0��m�}�l���U�C�C������A!= 0 ��ܦr�ꤣ�P
            {
                printf("%s %.4lf\n", s[k], 100.0 * (j - k) / count); //�N��줣�P�����Ӧ�m(j)�k(�̤@�}�l�O0�A�]���O�}�Y)�A�N�O���h�ִʤ@�˪���
                k = j; //k�ܦ��O��줣�P�����Ӧ�m
            }
        }
        printf("%s %.4lf\n", s[k], 100.0 * (j - k) / count); //�̫�|��W�X�}�C�j�p�A�ҥH�n�ɳo��L�X�̫�@�ӵ��G
        if(i<n-1) printf("\n"); //�O�̫�@�Ӵ��ꪺ�ܤ��n��X����
    }
    return 0;
}
