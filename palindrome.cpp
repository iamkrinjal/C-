#include<iostream>
using namespace std;
int main(){
    int original,num,rev=0;
    cout <<"enter num";
    cin>>num;
    original=num;
    while(num > 0){
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(original==rev){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}