#include <stdio.h>
 
int max(int a,int b){
 
    if(a>b){
        return a;
    }
    else
        return b;
}
int j;
int lmps(int arr[],int n,int l)
{
int prevans,prevj;
int sum=0;
int ans=0;
int i;
for(i=l-1;i<n;i++){
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
 
int n,l;
 
printf("Enter number of elements: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements: ");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter l for LMPSl: ");
scanf("%d",&l);
int x=lmps(arr,n,l);
 
printf("LMPS%d of the array: j=%d and max sum is %d: ",l,j+1,x);
return 0;
}
