#include<bits/stdc++.h>
using namespace std;

bool vowel(char v){

    return (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u'|| v == 'y');
}

int main(){

    string s;
    cin>>s;

    for(int i =0; i<s.length();i++){

        s[i] = tolower(s[i]);
    }
    for(int i =0; i<s.length(); i++){

        if(!vowel(s[i])){

            cout<<"."<<s[i];
        }
    }
    return 0;
}