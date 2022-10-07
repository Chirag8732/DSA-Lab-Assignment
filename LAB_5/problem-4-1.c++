// 3
#include <bits/stdc++.h>
#include <sys/time.h>

using namespace std;

long getTimeMicroSeconds(){
	struct timeval start;
	gettimeofday(&start,NULL);
	return start.tv_sec *1000000 +start.tv_usec;
}

void selectionSort(int input[], int n) {
	for(int i = 0; i < n-1; i++ ) {
	// Find min element in the array
	int min = input[i], minIndex = i;
	for(int j = i+1; j < n; j++) {
		if(input[j] < min) {
			min = input[j];
			minIndex = j;
		}
	}
	// Swap
	int temp = input[i];
	input[i] = input[minIndex];
	input[minIndex] = temp;
	}
}
void print(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
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
    InsertioanSort(array1,n1-1);
    
     endtime1=getTimeMicroSeconds();
	starttime2=getTimeMicroSeconds();
	
	Selectionsort(array2,n2-1);
	
	endtime2=getTimeMicroSeconds();
	cout<<endl;
    cout << "Time taken by function in InsertioanSort: "
         << endtime1-starttime1 << " microseconds" << endl;
	
    cout << "Time taken by function in Selectionsort: "
         << endtime2-starttime2 << " microseconds" << endl;
    return 0;
}

 