#include<stdio.h>

/*There are n people lined up, and each have a height represented as an integer. 
A murder has happened right in front of them, and only people who are taller than everyone in front of them are able to see what has happened. 
How many witnesses are there?*/

int main(){
	
	int n,i,j;
	printf("How many people are there?:");
	scanf("%d",&n);
	int people[n];
	printf("Enter the heights where people are:\n");
	for(i=0;i<n;i++){
		scanf("%d",&people[i]);
	}
	printf("\n[");
	for(i=0;i<n;i++){
		printf("%d",people[i]);
		if(i<n-1){
			printf(",");
		}
	}
	printf("]");
	
	int witnesses[n];
	int a=0,count=0;
	
	for(i=0;i<n;i++){
		if(i==n-1){
			witnesses[a]=people[i];
			break;
		}
		for(j=i+1;j<n;j++){
			if(people[i]<people[j]||people[i]==people[j]){
				count++;
			}
		}
		if(count==0){
			witnesses[a]=people[i];
			a++;
		}
		count=0;
	}
	printf("\n[");
	for(i=0;i<a;i++){
		printf("%d",witnesses[i]);
		if(i<a-1){
			printf(",");
		}
	}
	printf("]");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}


