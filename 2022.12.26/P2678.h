#include "bits/stdc++.h"
using namespace std;
const int maxn = 50005;
int a[maxn],n,m,l;
long long ans=0;

bool j(int x){
    int count=0,now=0;
    for(int i=1;i<=n;i++){
        if((a[i]-a[now])<x) count++;
        else now = i;
    }
    return count<=m;
}


int main(){
    cin>>l>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    a[n+1] = l;
    int left=1,right=l,mid=0;
    while (left<=right){
        mid = (left+right)/2;
        if(j(mid)){
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("%lld",ans);
    return 0;
}