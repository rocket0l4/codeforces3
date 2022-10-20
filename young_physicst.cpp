#include<iostream>
using namespace std;


int main(){
    int n,  x =0,y=0,z=0;
    cin>>n;
    int A[100][100];
   
    for(int i = 0; i<n; i++){
        for(int j =0; j<3;j++ ){
                 cin>>A[i][j];
        }
      x += A[i][0];
      y += A[i][1];
      z += A[i][2];

      
    }
    if(x == 0 && y ==0 && z == 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}