#include "mySort.h"
void merge(int A[], int R[], int L[], int n, int r, int l, int first) {
    int i = 0;
    int j = 0;
    int k=first;
    // myCopy(&first, &k);

    while (i < r && j < l) {
      // while ((myCompare(i, r) < 0)&&(myCompare(j, l) < 0)){
       // if (L[j] > R[i]) {
       if ((myCompare(R[i], L[j]) < 0)){
        myCopy( &R[i], &A[k]);
         //   A[k] = R[i];
            i++;
	    //   myCopy(&i,&i);
        } else {
           // A[k] = L[j];
                   myCopy( &L[j], &A[k]);
            j++;
	    //    myCopy(&j,&j);

        }
        k++;
	//   myCopy(&k,&k);

    }

    while (i < r) {
      //  while ((myCompare(i, r) < 0)){
       // A[k] = R[i];
               myCopy( &R[i], &A[k]);
        i++;
	//    myCopy(&i,&i);
        k++;
	//  myCopy(&k,&k);

    }

   while (j < l) {
     // while((myCompare(j, l) < 0)){
     //   A[k] = L[j];
            myCopy( &L[j], &A[k]);
        j++;
	//     myCopy(&j,&j);
        k++;
	//  myCopy(&k,&k);

    }
}

void mySort(int array[], unsigned int first, unsigned int last) {
    if (last - first < 2) {
      // if ((myCompare(last-first, 2) < 0)){
        return; 
    }

    int mid = first + (last - first) / 2; 
    //myCopy(&mid,&mid);
    mySort(array, first, mid);
    mySort(array, mid, last);
    int L[mid - first];
    int R[last - mid];
        for (int i = 0; i < mid - first; i++) {
	  // int t;
	  // for (int i = 0; myCompare(i, mid - first)<0; myCopy(&t,&i)) {

      //  L[i] = array[first + i];
      myCopy(&array[first+i],&L[i]);
      // t = i+1;
    }
    for (int i = 0; i < last - mid; i++) {
      //   for (int i = 0; myCompare(i, last - mid)<0; myCopy(&t,&i)) {

       // R[i] = array[mid + i];
         myCopy(&array[mid+i],&R[i]);
	 // t = i+1;

    }
    merge(array, R, L, last - first, last - mid, mid - first, first);
}
