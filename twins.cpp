#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool comapre(int a , int b){
    if(a>b)return true; 
    return false;
}
int main(){
   int n; 
   int count = 0 , mySum = 0, broSum = 0;
   int a[105];
   cin>>n;

   for(int i =0; i <n; i++){
       cin>>a[i];
       broSum += a[i];

   }

   sort(a, a+n, comapre);


   for(int i =0; i<n; i++){
       mySum += a[i];
       broSum -= a[i];
       count++;
       if(mySum > broSum){
           break;
       }
   }
   cout<<count<<endl;

    return 0;
}
