#include <iostream>

using namespace std;
/*
    ���D�OJosephus Problem���Ұ��D�A�N�O�C�H�s���ƴX�ӴN�۱����D�ءA�ݽ֬���̫�
    ������z�ѡA�i�H��:https://hackmd.io/@erichung0906/H1ljCesy_
    �N�O��}�C�Q���@����
    �C���[�W�ڭ̭n�ƴX�ӼƨӺ����o����
    �u���@�H�ɦs���̽s����0
    �z�Lfor�j��Ӻ�X�o�Ӧs���̦b���P�H�Ʈɪ��s���O�h��
    �̫�D�o��n�H�ɪ��s��
    ���D�]���Ĥ@�ӤH�n����
    �ҥH�令�Dn-1�H�����Ұ��D
*/
int Joseph_Problem(int n,int m)
{
    int pos = 0;
    for(int i=2;i<=n;i++)
        pos=(pos+m)%i;
    return pos + 1;
}

int main()
{
    int n,m;
    while(cin>>n && n!=0)
    {
        if(n==13)
            m=1;
        else
        {
            m=2;
            while(Joseph_Problem(n-1,m)!=12)
                m++;
        }
        cout<<m<<endl;
    }
    return 0;
}
