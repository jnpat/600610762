#include<iostream>
#include<string>
using namespace std;
int main(){
	string text1,text2;
	int N,count=0;
	cout << "Enter the first text: " <<endl;
	cin >> text1;
	cout << "Enter the second text: " << endl; 
	cin >> text2;
	cout << "Enter N: " <<endl;
	cin >> N;
	
	while(count<N){
		if(count%2 == 0){
			cout <<text1<< " ";
		}
		else{
			cout <<text2<< " ";
		
		}
		count = count+1;
		
	} 
	
}
