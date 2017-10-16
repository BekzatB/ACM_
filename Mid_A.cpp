#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main() {
int d = 0;
int i;
int mx;
int x[100001];
int n;
string a, b;
int j;
cin >> n;
       for (int k = 0; k < n; k++) {
      
      memset(x, 0, sizeof(x));
      mx = 0;
      i = 0;
      
          cin>>a>>b;
  
    mx=max(a.size(),b.size());
     
   
    //reverse(a.begin(),a.end());
    //reverse(b.begin(),b.end());
      d=a.size();
    for(i=0;i<mx-d;i++)
    a+='0';
    d=b.size();
     for(i=0;i<mx-d;i++)
    b+='0';
    for (i=0;i<a.size();i++) {
 x[i]+=((a[i]-'0') + (b[i]-'0'));
    if (x[i]>9) {
    x[i+1]+=x[i]/10;
    x[i]%=10;
}
}
   mx=a.size()+b.size();
 
    i=0;
    while (x[mx-i]==0){
    i++;
    if (mx-i<0){
    cout<<"0";
    break;
}
}
int was = 0;
    for (j = 0;j <= mx - i; j++) {
     if (x[j] != 0){
       was = 1;
       cout << x[j];}
      if (x[j] == 0 && was) 
    cout<<x[j];
    }
    
    cout << endl;
      }
           
       
	return 0;
}
