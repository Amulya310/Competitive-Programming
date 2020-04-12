#include<iostream>
#include<cstring>
#include<algorithm>
#define RANGE 210
using namespace std;
/*void copy_array(int a[],int b[],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]=b[i];
	}
} 
// A utility function to swap two elements 
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
/*
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
/*
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        //int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        //quickSort(arr, low, pi - 1); 
        //quickSort(arr, pi + 1, high); 
/*
void print_array(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0;
    j = 0; 
    k = l;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
  		mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
}*/
void countSort(int arr[],int l,int r) 
{ 
	int n=r-l+1;
    // The output character array that will have sorted arr 
    int output[n]; 
  
    // Create a count array to store count of inidividul 
    // characters and initialize count array as 0 
    int count[RANGE + 1], i; 
    memset(count, 0, sizeof(count)); 
  
    // Store count of each character 
    for(i = l; i<r ; ++i) 
        ++count[arr[i]]; 
  
    // Change count[i] so that count[i] now contains actual 
    // position of this character in output array 
    for (i = 1; i <= RANGE; ++i) 
        count[i] += count[i-1]; 
  
    // Build the output character array 
    for (i = l; i<r ; ++i) 
    { 
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]]; 
    } 
  
    // Copy the output array to arr, so that arr now 
    // contains sorted characters 
    for (i = l; i<r; ++i) 
        arr[i] = output[i]; 
} 
int main()
{
	int n,d;
	cin>>n>>d;

	int a[n],b[n];
	int count=0,m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
		//cout<<a[i]<<" ";
	}
	for(int i=d;i<n-1;i++)
	{
		countSort(a,i-d,i-1);
		//cout<<"sorted array : ";
		//print_array(a,n);
		if(d%2!=0)
		{
			m=a[(i-1)/2];
		}
		else
		{
			m=(a[(i-1)/2]+a[i/2]/2);
		}
		//cout<<"median"<<m<<endl;cout<<"----"<<a[i]<<endl;
		if(a[i]>=2*m)
		{
			count+=1;
			//cout<<"count"<<count;
		}
		copy_array(a,b,n);
		//print_array(a,n);
	}
	cout<<count<<endl;
}