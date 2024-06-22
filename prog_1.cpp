#include<bits/stdc++.h>
using namespace std;

int sol1(int x, int y, int z){
    
    return x+y+z;
    
}

long  fact(int po_sum){
    if(po_sum==0 || po_sum==1){
        return 1;
    }
    
    long fact=1;
    for(int i =2;i<=po_sum;i++){
        fact*=i;
    }
    return fact;
}

long pos(int sum){
    int po_sum = abs(sum);
    long result2=fact(po_sum);
    return result2;
}

string evorod(int sum){
    if(sum%2==0){
        return "even";
    }else{
        return "odd";
    }
}

bool power(int sum){
    if(sum<=0){
        return false;
    }
    return (sum & (sum-1)) == 0;
}

int main(){
    
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int av =(a+b+c+d+e)/5;
    int sum=0;
    if(av>50){
        int x,y,z;
        cin>>x>>y>>z;
        sum=sol1(x,y,z);
    }else{
        cout<<"less than 50";
    }
    
    if(sum<0){
        cout<<pos(sum);
    }else if(sum>0){
        cout<<evorod(sum);
    }else{
        if(power(sum)){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }
    

    
    return 0;
}