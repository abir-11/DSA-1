
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int st,int ed){
int idx=st-1,pivot=arr[ed];
for(int i=st;i<ed;i++){
    if(arr[i]<=pivot){
        idx++;
        swap(arr[i],arr[idx]);
    }

}
idx++;
swap(arr[ed],arr[idx]);
return idx;
}
void quickSort(vector<int>& arr,int st,int ed){
 if(st<ed){
    int pivIdx=partition(arr,st,ed);
    quickSort(arr,st,pivIdx-1);
    quickSort(arr,pivIdx+1,ed);
 }
 }
 int binary_search(vector<int>&arr,int tar){
int st=0,ed=arr.size()-1;

 while(st<=ed){
         int mid=st+(ed-st)/2;
    if(tar>arr[mid]){
        st=mid+1;
    }
    else if(tar<arr[mid]){
        ed=mid-1;

    }
 else{
    return mid;
 }
 }
 return -1;
 }
int main(){
vector<int>arr={3,5,8,9,1,7,2};
quickSort(arr,0,arr.size()-1);
for(int val:arr){
    cout<<val<<" ";
}
cout<<endl;
int tar=;

cout<<binary_search(arr,tar)<<endl;
return 0;
}
