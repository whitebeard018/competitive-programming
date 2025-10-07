#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt1=0, cnt2=0, cnt3=0, cnt4=0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1) cnt1++;
        if(a[i]==2) cnt2++;
        if(a[i]==3) cnt3++;
        if(a[i]==4) cnt4++;
    }
    int cnt=0;
    cnt+=cnt4;
    if(cnt3<=cnt1){
        cnt+=cnt3;
        cnt1=cnt1-cnt3;
        if(cnt2%2==0){
            cnt+=cnt2/2;
            cnt+=(cnt1+3)/4;
        }else{
            cnt+=cnt2/2;
            if(cnt1<=2){cnt++;
            }else{
                cnt++;
                cnt1-=2;
                cnt+=(cnt1+3)/4;
            }
        }
    }else{cnt+=cnt3;
    cnt+=(cnt2+1)/2;}
    cout<<cnt;
}
