#include<stdio.h>  
#include<stdlib.h>  
int main(){  
  int n;
  int *ptr;        //define the pointer varibale fo malloc 
  int sum=0;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
    if(ptr==NULL)                    //initially initialize if there will emoty or not     
    {    
        printf(" unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    

    for(i=0;i<n;i++)    
    {    
        scanf("%d",ptr+i);    
    }
    printf("array element are:\n");
    {
        printf("%d",*(ptr+i));
    }

        for(i=0;i<n;i++)    
    {    
        sum=sum+*(ptr+i);   
    }    
    printf("Sum=%d",sum);    
    free(ptr);     
return 0;  
}



//output will be addtion of input array  given by user at the time 