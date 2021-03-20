#include <iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
	int fin = 2*N - 1;
	int row=1;
	int col=1;
	while(col <= N){
		for(int i=0;i<(fin-row)/2;i++ ){
			cout<<" ";
		}
		for(int i=0;i<row;i++){
			cout<<"*";
		}
		for(int i=0;i<(fin-row)/2;i++){
			cout<<" ";
		}
		col++;
		row+=2;
		cout<<endl;
	}
	return 0;
}