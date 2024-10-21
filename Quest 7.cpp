#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x;
        int i=0;
        int ans=0;
        cin>>x;
        while(x!=0){
            int digit = x%10;
            // if((ans>INT_MAX/10) ||(ans<INT_MIN/10)){
            // cout<< 0;
            // }
            ans=digit+(10*ans);
            x=x/10;
            i++;
    }
    cout<<ans;
};
