#include<iostream>
using namespace std;
GCD(int a, int b) 
{ 
   if (b == 0) 
      return a; 
   return GCD(b, a % b);   
} 
main(){
int f,g;
   cout<<"Enter a number ="<<endl;
   cin>>f;
   cout<<"Enter a number ="<<endl;
   cin>>g; 
 cout<<"Greatest Common Divisor of "<< f <<" and "<< g <<" is: "<< GCD(f, g); 
}
