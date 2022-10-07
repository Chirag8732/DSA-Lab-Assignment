// 3
#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;

long getTimeMicroSeconds(){
	struct timeval start;
	gettimeofday(&start,NULL);
	return start.tv_sec *1000000 +start.tv_usec;
}

int linear(int array[], int size, int value){
	int index=-1;
	for(int i=0;i<=size;i++){
		if(array[i]<value){
			index++;
		}
	}
	return index+1;
}
void insertionSort(int arr[], int n)
{
    int i, location, j, k, s ;
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        s = arr[i];
       
        location = linear(arr,i,s);
       
        while (j >= location)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = s;
    }
}
 
 
int binarySearch(int arr[], int num,int low, int high)
{
    if (high <= low)
       return (num > arr[low]) ?(low + 1) : low;
       
    int mid = (low + high) / 2;
   
    if (num == arr[mid])
        return mid + 1;
    if (num > arr[mid])
        return binarySearch(arr, num,
                            mid + 1, high);
    return binarySearch(arr, num, low,
                        mid - 1);
                       
             
}
 
void insertionSort(int arr[], int n)
{
    int i, location, j, k, s ;
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        s = arr[i];
       
        location = binarySearch(arr, s, 0, j);
       
        while (j >= location)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = s;
    }
}

int main() {
	
    int n1,n2;
	
	cin>>n1;
	int array1[n1];
	for(int i=0;i<n1;i++){
		cin>>array1[i];
	}
	cin>>n2;
	int array2[n1];
	for(int i=0;i<n2;i++){
		cin>>array2[i];
	}
	long starttime1,endtime1,starttime2,endtime2;
	
	starttime1=getTimeMicroSeconds();
    InsertioanSortlinear(array1,n1-1);
    
	// print(array , n);
    endtime1=getTimeMicroSeconds();
	starttime2=getTimeMicroSeconds();
	
	InsertioanSortbinary(array2,n2-1);
	
	endtime2=getTimeMicroSeconds();
	cout<<endl;
    cout << "Time taken by function in InsertioanSort in linear: "
         << endtime1-starttime1 << " microseconds" << endl;
	
    cout << "Time taken by function in InsertioanSort in binarysearch: "
         << endtime2-starttime2 << " microseconds" << endl;
    return 0;
}

 