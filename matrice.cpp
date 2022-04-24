#include<stdio.h>
#include<conio.h>
int main() {
	int a[20][20],m,n,i,j,esum=0,ecount=0;
		printf("ENTER NUMBER OF ELEMENTS:");
		scanf("%d%d",&m,&n);
		printf("ENTER %d NUMBER OF ELEMENTS:",m*n);
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					scanf("%d",&a[i][j]);
				}
			}
			printf("\n MATRICES ARE \n");
				for(i=0;i<m;i++){
					for(j=0;j<n;j++){
						printf("%d\t",a[i][j]);
					}
					printf("\n");
				}
				
				//CALCULATION
					for(i=0;i<m;i++){
				         for(j=0;j<n;j++){
				         	if(a[i][j]%2==0){
				         		esum=esum+a[i][j];
				         		ecount++;
							 }
							
						}
				}
				printf("EVEN SUM=%d",esum);
				printf("NUMBER OF EVEN ELEMENTS=%d",ecount);
				getch();
				         	
		}
