#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n;
    int s[3001]; //�̦h3000�ӼƦr+���X�ӼƦr
    while(scanf("%d", &n) != EOF)
    {
        int dif[3001] = {0}; //�}�@�Ӭ����Ӯt�ȬO�_�s�b�Aex. 1��2�t1�A��dif[1] = 1;��ܮt��1�s�b
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &s[i]);
        }
        int count = 0; //�γo��k�P�_�O�_�ŦX�D�ر���
        for(int i = 0; i<n-1; i++)
        {
            int dis = 0;
            dis = abs(s[i+1] - s[i]); //��Z��
            if(dis <= n-1 && dis != 0) //�Z�������O1~n-1
                dif[dis] = 1;
            if(dis > n-1 || dis == 0) //���ŦX�D�ت���count+1
                count ++;
        }
        for(int i = 1; i<=n-1; i++) //�j���C��dis(1��n-1)�O�_���s�b
        {
            if(dif[i] != 1) //�o�{���s�b�A��ܦ��ƦC���Ojolly
                count ++; //���ŦX�D�ت���count+1
        }
        if(count == 0) //count�O0�N��q�L�Ҧ�����
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
    return 0;
}
