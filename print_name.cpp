#include<iostream>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout<<"ANUSHKA"<<endl;

   // Function call to print till i increments.
   func(i+1,n);

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n;
  cin>>n;
  func(1,n);
  return 0;

}

//tc = O(n)
// sc = O(n)