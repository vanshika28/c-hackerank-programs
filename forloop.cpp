#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i ,a,b;
    string k[100] = {"odd", "even" , "one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++){
        if((i>9) && (i%2==0)){
        cout<<k[1]<<endl;}
        else if((i>9)&&(i%2!=0)){
            cout<<k[0]<<endl;}
            else{
                cout<<k[i+1]<<endl;

            }
        }
    

    return 0;
}

