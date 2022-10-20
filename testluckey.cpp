#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,7,47,74,77,44,444,474,477,777,744,774,747,447};
    int n, count = 0;
    cin>>n;

    for(int i =0; i<14; i++){
        if(n % arr[i] == 0 ){
            count++;
        }
        
    }
    if(count > 0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    
    
    
    return 0;
}
