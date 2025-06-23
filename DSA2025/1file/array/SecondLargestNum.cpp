#include<iostream>
using namespace std;

// int secondLargest(int arr[], int n ){
//     int largest=0;
//     int second_largest=0;

//     for(int i=0; i<n;i++){
//         if(arr[i]>largest){
//             second_largest=largest;
//             largest=arr[i];
//         }
//     }
//     return second_largest;
// }



int main(){
    
    int arr[]={2,3,9,6,11,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans= secondLargest(arr,n);
    cout<<"second_largest = "<<ans;

    //pointers
   
    return 0;
}
