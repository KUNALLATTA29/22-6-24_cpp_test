#include<bits/stdc++.h>
using namespace std;

int sol(int a, int b, int c){
    if(a>=b && a>=c){
        return a;
    }else if(b>=a && b>=c){
        return b;
    }else{
        return c;
    }

}

int fact(int max){
    int result=1;
    
    for(int i=1; i<=max;i++){
        result*=i;
    }
    return result;
}
int rev(int f){
    int r=0;
    while(f!=0){
        int d=f%10;
        r=r*10+d;
        f/=10;
    }
    return r;
}

int evorod(int max){
    if(max%2==0){
        return 3;
    }else{
        return 5;
    }
}
int find_sum(int max){
    int sum=0;
    for(int i=1;i<=max;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    int max=sol(a,b,c);
    
    if(max==a){
        int f=fact(max);
        cout<<rev(f);
    }else if(max==b){
        cout<<evorod(max);
    }else {
        cout<<find_sum(max);
    }
    
    
 
    return 0;
}