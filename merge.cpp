#include <bits/stdc++.h>

int i;

void merge(int *arr , int low ,int mid , int high){

 

    int temp[high- low +1] ; // initialising temp array

    int k=0;

    int left = low; // starting index of left array 

    int right = mid +1; // starting index of right array

 

     

    while(left <= mid && right <= high){

              

              if(arr[left] < arr[right]){

 

               temp[k]= arr[left];

                  left++;

              }

              else {

                  temp[k]= arr[right];

                  right++;

              }

              k++;

 

    }

 

    // at last inserting all remaing left array element into temporary array

    while( left <= mid){ 

        temp[k]= arr[left];

        left++;

        k++;

    }

//  if elements on the right half are still left //

    while( right <= high){

      temp[k]= arr[right];

        right++;

        k++;

    }

 

// transfering all temp array element into original array

   for(int i= low ; i <=  high ; i++){

       arr[i] = temp[i-low];

   }

 

   return;

 

}

 

void mergeSort(int arr[], int l, int r) {

    // Write Your Code Here

    int low = l, mid =0 , high = r;

    if(low<high){

 

      mid = low + (high-low) /2;

 

        mergeSort(arr, low, mid);

        

        mergeSort(arr, mid+1,  high);

 

        // merge procedure

        merge(arr , low , mid , high );

 

    }

}                

