#include <iostream>

using namespace std ;

int main(){
	int input ;
	cout<<"Please enter a integer(N<=10000):" ;
	cin>>input ;
	while(input != 1){
		cout<<input <<endl;
		if(input%2 == 0){
			input=input/2 ;
		}
		else{
			input=3*input+1 ;
		}
	}
	cout<<1<<endl ;
} 
