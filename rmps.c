#include <stdio.h>
 
int max(int a,int b){
 
    if(a>b){
        return a;
    }
    else
        return b;
}
int j;
int rmps(int arr[],int n,int r)
{
int prevans,prevj;
int sum=0;
int ans=0;
int i;
for(i=r-1;i>=0;i--){
sum=sum+arr[i];
prevans=ans;
ans=max(ans,sum);
if(ans==prevans){
            j=prevj;
        }   
 
        else{
            j=i;
            prevj=j;
        }
 
}
 
 
return ans;
 
}
 
 
int main(){
 
int n,r;
 
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements: ");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter r for RMPSr: ");
scanf("%d",&r);
int x=rmps(arr,n,r);
 
printf("RMPS%d of the array: i=%d and max sum is %d: ",r,j+1,x);
return 0;
}
