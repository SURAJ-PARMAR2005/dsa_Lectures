#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivot  = arr[si];
    int count = 0;
    for(int i = si + 1;i<=ei;i++){
        if(arr[i] <= pivot) count++;
    }
    int pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx || j>pivotIdx){
      
        if(arr[i] <=pivot) i++;
        if(arr[j] >pivot) j--;
        

        // if(i>j) break;
          else if(arr[i] >pivot && arr[j] <= pivot){
          swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    

}
void quickSort(int arr[],int si,int ei){
    if(si >= ei) return;
    //5,1,8,2,7,6,3,4
    int patIdx = partition(arr,si,ei);
    //4,1,3,2,5,7,8,6      
    quickSort(arr,si,patIdx-1);
    quickSort(arr,patIdx+1,ei);
}    
int main() {
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}