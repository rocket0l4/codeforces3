#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i =0; i<s.length();i++){
            cin>>s[i];
            if(s[i] == s[i+1]){
                s[i]++;
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }





    return 0;
}