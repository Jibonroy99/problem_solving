#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int s=0;
    if(a>b){
        s+=a;
        a--;
        if(a==b){
            s+=a;
        }
        else if(a>b){
            s +=a;
        }
        else{
            s+=b;
        }

    }
    else if(a==b){
        s=a+b;
    }
    else{
        s+=b;
        b--;
        if(a==b){
            s+=b;
        }
        else if(b>a){
            s+=b;
        }
    }
    cout<<s;
    
    return 0;
}