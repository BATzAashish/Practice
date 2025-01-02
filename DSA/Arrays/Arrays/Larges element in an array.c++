// array[]=[3,2,1,5,2]
// n=5
// intiuation= sort and print (arr[n-1])



// optimal sol = considering a[0] as largest and keep comparing and storing the largest element 

#include<bits/stdc++.h>
int largest element (vector<int> &arr,int n)
     int largest=arr[0];
     for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        return largest;
     }