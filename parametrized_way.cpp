#include<iostream>
using namespace std;

int fact(int n){
if(n==0)return 0;
else{
    return n+ sum(n-1);
}

}

int main(){
int n;
cin>>n;
cout<<fact(n);
return 0;
}