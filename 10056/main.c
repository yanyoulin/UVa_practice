#include <stdio.h>
#include <stdlib.h>
#include <math.h> //�ڭ̭n��pow()�⦸��

int main()
{
    int n;
    scanf("%d\n", &n);
    double p; //�ŧi�p��
    double q; //���O�A�b�j��̦A�w�qq=1-p�A�_�h��X��q�|�O1.00000
    int r, player;
    for(int i = 0; i<n; i++)
    {
        scanf("%d %lf %d", &r, &p, &player);
        double sum;
        q = 1 - p; //�b�o�̦A�w�q
        sum = pow(q, player - 1) * p / ( 1 - pow(q, r) ); //pow(����, ����)
        if(p == 0) printf("0.0");
        else printf("%.4lf\n", sum);
    }

    return 0;
}
