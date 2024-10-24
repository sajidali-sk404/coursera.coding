#include<iostream>
#include<stack>

using namespace std;


		/*  stack is a linear data structure which follows a particular order in which
			the operations are performed. the order may be LIFO(last in first out)
				or FILO(first in last out).
				*/
				
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(7);
	s.push(-5);
	s.push(6);
	s.push(10);
	
	cout<<s.empty()<<endl;
	cout<<s.size()<<endl;
	
	while(!s.empty()){
		cout<<s.top()<<endl;
	s.pop();
		
	}
	
	
	
	return 0;
}