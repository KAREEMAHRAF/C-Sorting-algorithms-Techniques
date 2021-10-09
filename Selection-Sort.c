/*
   Write a C function to read array and sort it by Insertion Sort Algorithme.
*/


#include <stdio.h>

//void Swap(int arr1 , int arr2);
int Insertion_Sort(int *Array , int SizeF);

int main()
{
	

	int array[11]={5,3,2,6,9,10,205,96,41,1,1};
	int Size = sizeof(array)/sizeof(array[0]);
	Insertion_Sort(array, Size) ;
	
	for(int i=0 ; i<Size ; i++)	
	{
	  printf("%d \n" , array[i] );
	}
}



/*

void Swap(int &arr1 , int &arr2)
{
	int temp = arr1 ;
	arr1=arr2;
	arr2 = temp;
}
*/


int Insertion_Sort(int *Array , int SizeF)
{
	
	
     //5,2,8,4,3,1
	for(int i=0 ; i<SizeF ; i++)	
	{   
        int min = i ;
        for(int j=i+1 ; j<=SizeF ; j++)
		  {  
		        
				if(Array[j]<=Array[min])
				{
		  
					   int temp = Array[min] ;
					   Array[min]=Array[j];
					   Array[j] = temp;
				}
		
		  }	    
			  
	}
	
	
}
