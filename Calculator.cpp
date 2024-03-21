#include<iostream>
using namespace std;
int main()
{
	cout<<"\n\t\t\tCalculateTheNumber !!!"<<endl;
    cout<<"You have to Calculate a numbers. You'll have choices based on the level you choose."<<endl;

    while(true){
        cout << "\nEnter the difficulty level: \n";
        cout <<"Addition!\t";
        cout <<"Subtraction!\t";
        cout <<"Multiplication!\t\t";
        cout <<"Division!\t";
		cout <<"Remainder!\t"<<endl;
	
	double num1,num2;
	char op;
	cout << "Enter the Operator(+-*/%) : ";
	cin >> op;
	//changes
	if((char)tolower(op)=='e'){
        exit(0);
    }
	cout << "Enter the two numbers one by one : ";
	cin >> num1 >> num2;
	switch ( op )
	{
		case '+':
		cout << num1 << op << num2 << "=" << num1 + num2 << endl;
		break;
		case '-':
		cout << num1 << op << num2 << "=" << num1 - num2 << endl;
		break;
		case '*':
		cout << num1 << op << num2 << "=" << num1 * num2 << endl;
		break;
		case '/':
			if (num2 == 0.0)
			{
				cout << "Divide by Zero Situation" << endl;
			}
			else
			{
				cout << num1 << op << num2 << "=" << num1 / num2 << endl;
			}
		break;
		case '%':
			if (num2 == 0.0)
			{
				cout << "Divide by Zero Situation" << endl;
			}
			else
			{
				cout << num1 << op << num2 << "=" << (int)num1 % (int)num2 << endl;
			}
		break;
		default:
				cout << "Invalid Operator" << endl;		
		break;
				
	}
}
return 0;
}
