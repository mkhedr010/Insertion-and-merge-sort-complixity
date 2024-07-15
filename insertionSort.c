#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
    { 
        int temp;
	// int t;
        for(int i =first+1 ; i<last ; i++){

	  // for (int i = first+1 ; (myCompare(i,last)<0);myCopy(&t,&i)){
           // int temp = array [i];
           myCopy(&array[i], &temp);
            int j=i-1 ;
	    //   t = i-1;
	    //     myCopy(&t,&j);
	    //  t=i+1;
  while (j>= 0 && (myCompare(temp,array[j])<0)){
	       //  while ((myCompare(first,j)<=0) && (myCompare(temp,array[j])<0)){
           //     array[j+1] = array[j];
            myCopy(&array[j],&array[j+1]);
	    //  t = j-1;
               j--;
	       //  myCopy(&t,&j);
        }
            //    array[j+1]= temp;
myCopy(&temp, &array[j+1]);        }
    }
