#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
    ���ε{���]��X�W�ߡA�ڭ̷|�o�{N^N�|20�Ӥ@�`��
    �����I�Olast digit�bN = 100�ɬ�0�A�ҥH���ޥL�Ʀr�}�h�j
    �u�ݭn�U�n�p��100���Ʀr�B�z�N�n
    ��W�ߪ��{���b�̩��U
*/
int main() //�u�ݭn�p��̫�@�Ӧ�ƪ�����N�n
{
    char n[102];
    while(scanf("%s", n) != EOF)
    {
        if(n[0] == '0') break;
        int num = 0;
        if(strlen(n)>=2)
            num = (n[strlen(n) - 2] - '0') * 10 + (n[strlen(n) - 1] - '0');
        else
            num = n[strlen(n) - 1] - '0';
        int a = 0, b;
        for(int i = 1; i<=num; i++)
        {
            b = i;
            for(int j = 1; j<i; j++) //�B�z�̫�@��ƪ�����
            {
                b = (b*i) % 10; //�C�������H10���l��
            }
            a += b;
            a = a%10;
        }
        printf("%d\n", a);
    }
    return 0;
}
//int main()
//{
//    int a = 0, b;
//    for(int i = 1; i<=100; i++)
//    {
//        b = i;
//        for(int j = 1; j<i; j++)
//        {
//            b = (b*i) % 10;
//        }
//        a += b;
//        a = a%10;
//        printf("a = %d; b = %d\n", a, b);
//    }
//    return 0;
//}

