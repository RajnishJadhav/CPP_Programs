#include<iostream>
using namespace std;




int main()
{
	
	char a;

 cout<<"Enter a character: ";
 cin>>a;
	switch (a) {
	case 'A':
		cout << "Character is A";
		break;
	case 'B':
		cout << "Character is B";
		break;
	case 'C':
		cout << "Character is C";
		break;
	default:
		cout << "Character other than A, B and C";
		break;
	}
	return 0;
}


