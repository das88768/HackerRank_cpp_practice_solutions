// Problem Name -- Deque-STL.

#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    
    int i;
    deque<int> d;

    for(i=0;i<n;i++){
        while(!d.empty() && i-d.front()>=k){
            d.pop_front();
        }
        
        while(!d.empty() && arr[d.back()] <= arr[i]){
            d.pop_back();
        }

        d.push_back(i);

        if(i+1>=k){
            cout<<arr[d.front()]<<' ';
        }
    }

    cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
