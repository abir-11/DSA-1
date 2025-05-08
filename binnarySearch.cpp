#include<iostream>
#include<vector>
using namespace std;
int recBinarySearch(vector<int>arr,int tar,int st,int ed){

int mid=st+(ed-st)/2;
if(tar>arr[mid]){
    return recBinarySearch( arr,tar,mid-1,ed);
}
else if(tar<arr[mid]){
    return recBinarySearch(arr,tar,st,mid+1);
}
else {
    return mid;
}
}
int main(){
vector<int>arr={1,2,3,4,5};


recBinarySearch(arr,0,arr.size()-1);
int tar=2;
for(int val:arr){
    cout<<val<<" ";
}
cout<<endl;
return 0;
}


