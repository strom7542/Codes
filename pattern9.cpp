#include<iostream>
using namespace std;
int main(){
    system("cls");
    int n;
    cin>>n;
   

    int i=1;
     
    

    while(i<=n){
        
        int j=1;
        char ch='A';
       while (j<=n)
       {
        char ch='A'+i-1;
            cout<<ch;
           
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
    }
}