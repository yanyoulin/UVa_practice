#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[1000002];

int main()
{
    int ca = 0;
    while(scanf("%s\n", s) != EOF) //�O�o�᭱�[�W\n,�_�h�|�X���D
    {
        int n;
        int x, y;
        int min, max;
        ca++;
        printf("Case %d:\n", ca);
        scanf("%d\n", &n);
        for(int i = 0; i<n; i++)
        {
            int diff = 0;
            scanf("%d %d", &x, &y);
            if(x>=y)
            {
                max = x;
                min = y;
            }
            else
            {
                max = y;
                min = x;
            }
            for(int j = min; j<=max; j++)
            {
                if(s[min] != s[j])
                {
                    diff = 1;
                }
            }
            if(diff)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char s[1000002];
//
//int main() {
//    int ca = 0;
//    while (gets(s) && s[0] != '\0') {  // �ϥ� gets �B�ˬd�O�_���Ŧr��
//        int n;
//        int x, y;
//        ca++;
//        printf("Case %d:\n", ca);
//
//        scanf("%d", &n);
//        getchar(); // �M���w�İϪ�����Ÿ�
//
//        for (int i = 0; i < n; i++) {
//            int diff = 0;
//            scanf("%d %d", &x, &y);
//            getchar(); // �M���w�İϪ�����Ÿ�
//
//            int min = (x < y) ? x : y;
//            int max = (x > y) ? x : y;
//
//            char firstChar = s[min];
//            for (int j = min; j <= max; j++) {
//                if (s[j] != firstChar) {
//                    diff = 1;
//                    break;  // �@���o�{���P�A�ߨ�h�X�j��
//                }
//            }
//
//            if (diff)
//                printf("No\n");
//            else
//                printf("Yes\n");
//        }
//
//        getchar(); // Ū���î��ӥi��s�b���Ŧ�
//    }
//    return 0;
//}

