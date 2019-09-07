#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int a , int b , int c ,int d)
{
    int m =a;
    if(m<b && b>c && b>d){
        return b;}
        else if(m<c && c>b && c>d){
            return c;
        }
        else if(m<d && d>c && d>b){
            return d;
        }
        else
        {
            return m;}


    }

int main() {
    int a ,b,c,d ,m;
    cin>>a;
    cin >>b ;
    cin>>c ;
    cin >>d;
    int k = max(a,b,c,d);
    cout<<k;
    
    return 0;
}

