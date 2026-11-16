#include <iostream>
using namespace std;

int feb(int num)
{
	if(num==1) return 1;
	if(num==0) return 0;
	
	return feb(num-2)+feb(num-1);
}	
int main()
{
	
	int num;
	cout<<"Enter Number : ";
	cin>>num;
	
	int ans=feb(num);
	cout<<"F Number :"<<ans;
}	
