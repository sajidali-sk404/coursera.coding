#include<iostream>

using namespace std;

int main(){
	char alphabet;
	cout<<"Enter any alphabet :  "<<endl;
	cin>>alphabet;
	
	if(alphabet =='a' ||alphabet == 'e' ||alphabet == 'i' ||alphabet == 'o' ||alphabet == 'u'){
		
		cout<<"its vowel word : "<<endl;
		
	}
	else
	{
		cout<<"its Consonant word : ";
	}
	
	
	return 0;
}