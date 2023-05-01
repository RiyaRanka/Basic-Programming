#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	int i,j,k;
	cout<<"Please enter size in an array : ";
	cin>>n;
	cout<< "Enter elements in an array:";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<n;k++){
					arr[k]=arr[k+1];
				}
			    n--;
			    j--;
		    }
	    }
    }
    cout<<"A new array after deleting duplicates : ";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}