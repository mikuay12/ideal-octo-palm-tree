#include<bits/stdc++.h>
using namespace std;
int a,b,c[100002],d,e,h,i,l;
long long ans;
int main()
{
    cin>>a>>b;
    for(i=1;i<=a;i++)
        cin>>c[i];
    sort(c+1,c+a+1);//先排序一下
    for(i=1;i<=b;i++)
    {
        cin>>d;
        e=lower_bound(c+1,c+a+1,d)-c;//返回查询到的位置
        if(e==a+1)
            ans+=d-c[a];//特判比所有数都大的情况
        else
        if(e==1)//特判比所有数都小的情况
            ans+=c[1]-d;
        else
            ans+=min(abs(c[e]-d),abs(d-c[e-1]));
    }
    printf("%lld",ans);
    return 0;
}