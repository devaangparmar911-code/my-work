#include <bits/stdc++.h>
using namespace std;

int main() {
         int K[5],a[5],b[5],i;
         for (i=0;i<5;i++)
         {
             cin>>K[i];
         }
         for(i=0;i<5;i++)
         {
             cin>>a[i];
         }
         for(i=0;i<5;i++)
         {
             b[i]=a[i]+K[i];
             cout<<b[i]<<" ";
         }

}