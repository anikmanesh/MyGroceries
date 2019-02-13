#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> list;
	int numItems = 0;
	char input;
	string item; 
	while(input != 'Q')
	{
		cout<<"\n==GROCERY LIST MANAGER==";
		cout<<"\nEnter your choice: ";
		cout<<"\n (A)dd an item";
		cout<<"\n (Q)uit";
		cout<<"\nYour choice (A/Q): ";
		cin>>input;
		if(input == 'A')
		{
			cout <<"\nname of item: ";
			cin >> item;
			list.push_back(item);  
			numItems++;
		}
	}
	if (numItems == 0)
	{
		cout << "There are no items on the list" <<endl;
	}
	else
	{
		for(int i=0;i<numItems;i++)
		{
			cout << i+1 <<": "<<  list[i] << endl;

		}
	}
	return 0;
}
