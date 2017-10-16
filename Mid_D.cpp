#include <bits/stdc++.h>


using namespace std;

int main() {

int num, v[1000001],n,x;
int a[1000001] ;
char name[1000001][16];

 
    
    cin >> n;

     v[0] = 2147483647;      
     a[0] = 0;
    int  k = 1;
    for (int i = 0;  i < n; i++) {
        cin >> x;
        //cout << x << endl;
        if (x < 0){
          //  cout << k << endl;
          k--;  
            cout << k - a[k] << " " << name[a[k]] << endl; 
            k = a[k] - 1;
            k++;
        }
        
        else if ( x > 0){
            cin >> name[k];
          //cout << name[k] << endl;
            if (x <= v[a[k - 1]])
                a[k] = k;
              else
                a[k] = a[k - 1];
            v[k] = x;
            k++;
              }
              else
              cin >> name[k];
       
    }
 
    return 0;
}
