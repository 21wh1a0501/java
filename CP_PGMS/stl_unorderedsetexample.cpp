#include <bits/stdc++.h>
using namespace std;
/*
SETS implementation same as maps internally 
order is not maintained
*/

int main(){
   unordered_set <string> s;
   int n;
   cin>>n;
   for(int i = 0; i < n; i++){
       string str;
       cin>>str;
       s.insert(str);
   }
   int q;
   cin>>q;
   while(q--){
       string str;
       cin>>str;
       if(s.find(str) == s.end()){
           cout<<"no"<<endl;
       }
       else{
           cout<<"yes"<<endl;
       }
       
   }
   
}
