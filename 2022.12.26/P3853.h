#include "bits/stdc++.h"

using namespace std;
int l,n,k,ans;
int a[100005];

bool j(int x){
    int count = 0;
    for(int i=2;i<=n;i++){
        count += (a[i]-a[i-1])/x;
        if(count>k) return false;
    }
    return count<=k;
}

int main(){
    cin>>l>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    int left=0,right=l,mid=0;
    while (left<=right){
        mid = (left+right)>>1;
        if(j(mid)){
            ans = mid;
            right = mid-1;
        } else {
            left = mid + 1;
        }
    }
    printf("%d",ans);
    return 0;
}