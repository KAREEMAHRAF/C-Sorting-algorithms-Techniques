/*
   Write a C function to read array and sort it by Bubble Sort Algorithme.
*/


#include <stdio.h>

//void Swap(int arr1 , int arr2);
int Bubbel_Sort(int *Array , int SizeF);

int main()
{
	

	int array[10]={5,3,7,4,2,9,1,8,6,10};
	int Size = sizeof(array)/sizeof(array[0]);
	Bubbel_Sort(array, Size) ;
	
	for(int i=0 ; i<Size ; i++)	
	{
	  printf("%d" , array[i] );
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


int Bubbel_Sort(int *Array , int SizeF)
{
	
	
	for(int i=0 ; i<SizeF ; i++)	
	{
		for(int j=1 ; j<SizeF-1 ; j++)
		{
			if(Array[j-1]>Array[j])
	          {
				  
				 //Swap(Array[j-1],Array[j]);
		
	              int temp = Array[j-1] ;
	              Array[j-1]=Array[j];
	              Array[j] = temp;
			  }
		}
	}
	
}
