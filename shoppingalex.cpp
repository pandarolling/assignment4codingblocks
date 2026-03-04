#include<iostream>
using namespace std;

int lcmOf(int arr[] , int size){
	int product = 1;
	
	for(int i =0;  i < size; i++){
		product *= arr[i];
	}

	int gcd = arr[0];
	for(int i =1; i < size; i++)
		gcd = gcdof(gcd, gcdof(arr[i]));

}

int main() {

	int size;
	cin>>size;

	int itemsprice[size];

	for(int i = 0; i < size;  i++){
		cin>>itemsprice[i];
	}

	int lcm = lcmOf(itemsprice, size);

	int noOfQueries;
	cin>>noOfQueries;

	for(int i =1; i <= noOfQueries; i++){
		int money, k ;
		cin>>money;
		cin>>k;

		if(money % lcm == 0){
			cout<<"Yes"<<endl;
		}
	}

	return 0;
}