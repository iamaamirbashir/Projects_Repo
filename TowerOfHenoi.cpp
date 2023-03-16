#include<bits/stdc++.h>
using namespace std;

void toh(int n , char beg,char aux , char end){

     if(n>=1){
        toh(n-1,beg,end,aux);
        cout<<beg<< " to "<<end <<" ";
        toh(n-1,aux,beg,end);
     }

}

int main(){
    
     int n=2;
     // b is auxilary    
     // we have to move from a to b pole 
    toh(n,'A','B','C');
    return 0;
}
