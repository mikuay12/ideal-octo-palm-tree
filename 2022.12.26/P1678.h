#include<bits/stdc++.h>
using namespace std;
int a,b,c[100002],d,e,h,i,l;
long long ans;
int main()
{
    cin>>a>>b;
    for(i=1;i<=a;i++)
        cin>>c[i];
    sort(c+1,c+a+1);//������һ��
    for(i=1;i<=b;i++)
    {
        cin>>d;
        e=lower_bound(c+1,c+a+1,d)-c;//���ز�ѯ����λ��
        if(e==a+1)
            ans+=d-c[a];//���б���������������
        else
        if(e==1)//���б���������С�����
            ans+=c[1]-d;
        else
            ans+=min(abs(c[e]-d),abs(d-c[e-1]));
    }
    printf("%lld",ans);
    return 0;
}