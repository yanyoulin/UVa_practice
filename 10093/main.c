#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    ���@�Ӧr��A��X�L�̤p�O�X�i���N�A�ϱo�o�Ӧr��bN�i��U�ഫ�����Q�i��Ư���㰣N-1
    ex.
        (233)5 ��2+3+3=8�i�H�Q(5-1=4)�㰣
*/

int main(int argc, char **argv)
{
    char s[10001];
    while(scanf("%s", s) != EOF) //Ū���r��
    {
        int sum = 0;
        int max = 1;
        for(int i = 0; i<strlen(s); i++)
        {
            int d = 0; //���n������s[i]�h��s�A�]��s[i]�Ochar���A�A�᭱�|�X���D
            if(s[i]>='0' && s[i]<='9') d = s[i] - '0';
            else if(s[i]>='A' && s[i]<='Z') d = s[i] - 'A' + 10;
            else if(s[i]>='a' && s[i]<='z') d = s[i] - 'a' + 36;
            sum += d;
            if(d > max) max = d; //N�i��S��r�ꤤ�̤j���Ʀr�j
        }
        int j;
        for(j = max + 1; j<=62; j++)
        {
            if(sum%(j-1) == 0) break;
        }
        if(j <= 62) printf("%d\n", j);
        else printf("such number is impossible!\n");
    }
    return 0;
}
