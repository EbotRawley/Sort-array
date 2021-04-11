#include<iostream>

using namespace std;

int main(){
	int x;
	int arr[x];
	int n, i, j;
	int temp;
	
	cout << "Enter number of elements : ";
	cin >> n;
	
	cout << "Enter elements : "<<endl;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(i=0; i<n; i++){
		for(j=i+2; j<=n; j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Sorted array : "<<endl;
	for(i=0; i<n; i++)
	cout<<arr[i]<<"\t";
	cout<<endl;
	return 0;
}
