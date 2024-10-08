#include<stdio.h>
int main(){
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	
	int a[n]; 
	printf("enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("elements are: \n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	int fmax=a[0], smax=0;
	for(int i=0;i<n;i++){
		if(a[i]>fmax){
			smax=fmax;
			fmax=a[i];	
		}else if(a[i]>smax && a[i]<fmax){
			smax=a[i];
		}
	}
	printf("\nThe Second maximum Element in the Array is %d:- ",smax);
	
}
