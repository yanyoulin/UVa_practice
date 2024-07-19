#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    此題不用管Doomsday，用2011/1/1為禮拜六去解
    將所有日期從1/1開始算的天數+5再除以7取餘數即可
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
    理解char *a[] = {};
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
    簡單來說就是char *a[] 是一個指標陣列，每個元素都是一個 char *，也就是指向字符的指標
    a
    +----+----+----+
    |    |    |    |
    |    |    |    |
    +----+----+----+
      |    |    |
      v    v    v
     "Hello" "World" "C programming"
    能printf出字串是因為使用%s格式化字符時，printf會根據該指針指向的內存位置，從該位置開始輸出字符，直到遇到null終止符\0為止
*/

