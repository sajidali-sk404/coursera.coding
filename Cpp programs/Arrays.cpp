#include<iostream>

using namespace std;

int  main(){
	
	
	//************pionter and array**********//
	
	int mathmarks [3] ;
	mathmarks[0] = 43;
	mathmarks[1] = 56;
	mathmarks[2] = 87;
	
	int* a = mathmarks;
	
	cout<<"The value of math marks "<<endl;
	cout<<"The value of [0] is  "<<*(a)<<endl;
	cout<<"The value of [1] is  "<<*(a+1)<<endl;
	cout<<"The value of [2] is  "<<*(a+2)<<endl;
	
	
	
	cout<<"The address of math marks "<<endl;
	cout<<"The address of [0] is  "<<(a)<<endl;
	cout<<"The address of [1] is  "<<(a+1)<<endl;
	cout<<"The address of [2] is  "<<(a+2)<<endl;

	
	//********ARRAYS**********//
//	
//	int mathmarks [3] ;
//	mathmarks[0] = 43;
//	mathmarks[1] = 56;
//	mathmarks[2] = 87;


		//_______===using loops_______===//
//	
//	for(int i = 0; i <3; i++){
//		cout<<"the value of math marks  "<<i<<"  is  "<<mathmarks[i]<<endl;
//		
//	}
	
//	int i = 0;
//	do{
//		cout<<"the value of math marks  "<<i<<"  is  "<<mathmarks[i]<<endl;
//		i++;
//	}while(i<3);
	
//	while(i<3){
//		cout<<"the value of math marks  "<<i<<"  is  "<<mathmarks[i]<<endl;
//		i++;
//	}
//	
//	cout<<mathmarks[0]<<endl;
//	cout<<mathmarks[1]<<endl;
//	cout<<mathmarks[2]<<endl;
//	

//	int marks[6] = {65,55,90,87,34,76};
//	cout<<marks[1]<<endl;
//	cout<<marks[2]<<endl;
//	cout<<marks[3]<<endl;
//	cout<<marks[4]<<endl;
//	cout<<marks[5]<<endl;
//	
	return 0;
}