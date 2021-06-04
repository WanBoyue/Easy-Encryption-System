#include <iostream>
#include <algorithm>
using namespace std;
//Made by Wanboyue//
//sto Wanboyue orz//
//Follows GPL v3!!//
char encrypst[10];
int encryslen;
int check(char c){
    for(int i=0;i<encryslen;i++) if(c==encrypst[i]) return i;
    return -1;
}
int main(){
    cout<<"You are now using ENCRYPTION program v1.0. Please input the encryption string's length[1 to 10]:";
    cin>>encryslen;
    cout<<"Now input the string of the length[no spaces, return after finishing]:";
    for(int i=0;i<encryslen;i++) cin>>encrypst[i];
    cout<<"\nInput the string to be encrypted:"<<endl;
    getchar();
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        int pos=check(s[i]);
        if(pos==-1) continue;
        s[i]=encrypst[(pos+1)%encryslen];
    }
    cout<<"Your encryption code length is: "<<encryslen<<endl;
    cout<<"Your encryption code is: ";
    for(int i=0;i<encryslen;i++) cout<<encrypst[i];
    cout<<endl<<"Your encrypted string is: "<<s<<endl;
    cout<<"Thanks for using!"<<endl;
    return 0;
}
