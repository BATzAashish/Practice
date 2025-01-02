// brute =  first find the largest element and while comparing with other and largest element find the second largest 

// optimal  in codestudio 
vector<int>getSecondOrderelements(int n,vector<int>a){
    int largest= a[0];
    int slargest=-1;
    for ( int i=0 ; i<n;i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>slargest ){
            slargest=a[i];

        }
    }
    return slargest;
}
int secondSmallest(vector<int>&a,int n){
    int smallest = a[0];
    int ssmalest =INT_MAX;
    for(int i=1;i<n;i++){
        if (a[i]<Smallest){
            ssmallest=smallest;
            smallest=a[i];
        }
        else if ( a[i]!=smallest && a[i]<ssmallest ){
            ssmallest=a[i];
    }


}
return ssmallest;
}
vector <int>getSecondorderElements(int n,vector<int>a){
int slargest=secondlargets(a,n);
int ssmalest=secondSmallest(a,n);
return{slargest,ssmalest};
}
