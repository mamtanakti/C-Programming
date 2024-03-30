#include<iostream>

using namespace std;

int binarysearch(int array[],int size,int target){
    
    int left=0;
    int right=size-1;
    
    while(left<=right){
      
       int middle=left+(right-left)/2;
       
       if(array[middle] == target){
           return middle;
       }
       else if(target<array[middle]){
           right=middle-1;
       }
       else if(target>array[middle]){
           left=middle+1;
       }
      
    }
   
    
    
    return -1;
}

int main(){
    
    int array[]={1,2,3,4,5,6,7,8,9,10};
    
   int index= binarysearch(array,10,2);
   
   cout<<index;
}
