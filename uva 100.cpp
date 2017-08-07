#include<iostream>
using namespace std;
int  mx=0;
int maxCycle(int n,int cnt){
if(n>1){
    if(n%2)n=3*n+1;
else n/=2;
cnt++;
maxCycle(n,cnt);
}
return mx=(cnt>=mx)?cnt:mx;
}

int main(){
int a,b;
while(cin>>a>>b){
    int x=(a>b)?a:b;
    int y=(a<b)?a:b;
    for(int i=y;i<=x;i++)mx=maxCycle(i,1);
    cout<<a<<" "<<b<<" "<<mx<<endl;
    return 0;
}

}
