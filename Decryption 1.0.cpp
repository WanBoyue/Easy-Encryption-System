#include <iostream>
#include <algorithm>
using namespace std;
//Made by Wanboyue//
//sto Wanboyue orz//
//Follows GPL v3!!//
int decryptlen;
char decryptstring[10];
int findch(char c){
    for(int i=0;i<decryptlen;i++) if(decryptstring[i]==c) return i;
    return -1;
}
int main(){
    string s;
    cout<<"Please input the encrypted string:"<<endl;
    getline(cin,s);
    cout<<"Please input the encryption code length: ";
    cin>>decryptlen;
    cout<<"Please input the encryption code: ";
    for(int i=0;i<decryptlen;i++) cin>>decryptstring[i];
    for(int i=0;i<s.size();i++){
        int a=findch(s[i]);
        if(a==-1) continue;
        s[i]=decryptstring[(a-1+decryptlen)%decryptlen];
        cout<<s[i]<<endl;
    }
    cout<<"Your decrypted string is: "<<s<<endl<<"Thanks for using!"<<endl;
    return 0;
}
