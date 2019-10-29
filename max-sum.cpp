//to find the maximum sub array through 3 methods of different time complexities.
#include<bits/stdc++.h>
using namespace std;
#define rec(a,i,n) for(int i=a;i<n;i++)
main()
{
int arr[]={-1,2,4,-3,5,2,-5,2};
int n=*(&arr+1)-arr;
cout<<"size is "<<n<<endl;
//O(n^3)
int best=0;
int sum=0;
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
sum=0;
for(int k=i;k<=j;k++)

{
sum+=arr[k];

}
best=max(best,sum);
}

}
cout<<"The maximum sum of the elements is "<<best;
return 0;


}
