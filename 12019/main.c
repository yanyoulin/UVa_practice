#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    ���D���κ�Doomsday�A��2011/1/1��§�����h��
    �N�Ҧ�����q1/1�}�l�⪺�Ѽ�+5�A���H7���l�ƧY�i
*/

int main(int argc, char **argv)
{
    char *week[] = {"Sunday" ,"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n;
    int m, d;
    scanf("%d\n", &n);
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        scanf("%d %d", &m, &d);
        for(int j = 0; j<m; j++)
        {
            sum += days[j];
        }
        sum += d;
        printf("%s\n", week[(sum + 5)%7]);
    }
    return 0;
}
/*
    �z��char *a[] = {};
    int main() {
        int a = 5;
        int *p;
        p = &a;
        printf("%d\n", a);
        printf("%d\n", *p);
        printf("%d\n", p);
        char b[] = "abcdefg";
        char *d;
        d = b;
        char *c[] = {"apple", "banana", "cat"};
        printf("%c\n", b[2]);
        printf("%d\n", &b[2]);
        printf("%c\n", d[1]);
        printf("%d\n", &c[1]);
        printf("%s\n", c[1]);
        return 0;
    }
    output:
        5
        5
        2114353468
        c
        2114353462
        b
        2114353432
        banana
    ²��ӻ��N�Ochar *a[] �O�@�ӫ��а}�C�A�C�Ӥ������O�@�� char *�A�]�N�O���V�r�Ū�����
    a
    +----+----+----+
    |    |    |    |
    |    |    |    |
    +----+----+----+
      |    |    |
      v    v    v
     "Hello" "World" "C programming"
    ��printf�X�r��O�]���ϥ�%s�榡�Ʀr�ŮɡAprintf�|�ھڸӫ��w���V�����s��m�A�q�Ӧ�m�}�l��X�r�šA����J��null�פ��\0����
*/

