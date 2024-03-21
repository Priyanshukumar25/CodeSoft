#include<iostream>
using namespace std;
char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char digit='x';
bool tie=false;
string n1="";
string n2="";
void functionOne(){
	cout<<"   |   |   \n";
	cout<<""<<arr[0][0]<<"  | "<<arr[0][1]<<" | "<<arr[0][2]<<" \n";
	cout<<"___|___|___\n";
	cout<<"   |   |   \n";
	cout<<""<<arr[1][0]<<"  | "<<arr[1][1]<<" | "<<arr[1][2]<<" \n";
	cout<<"___|___|___\n";
	cout<<"   |   |   \n";
	cout<<""<<arr[2][0]<<"  | "<<arr[2][1]<<" | "<<arr[2][2]<<" \n";
	cout<<"   |   |   \n";
}
void functionTwo(){
	int number;
	if(digit=='x'){
		cout<<n1<<"\tPlease Enter\t";
		cin>>number;
	}
	if(digit=='0'){
		cout<<n2<<"\tPlease Enter\t";
		cin>>number;
	}
	if(number==1){
		row=0;
		column=0;
	}
	if(number==2){
		row=0;
		column=1;
	}
	if(number==3){
		row=0;
		column=2;
	}
	if(number==4){
		row=1;
		column=0;
	}
	if(number==5){
		row=1;
		column=1;
	}
	if(number==6){
		row=1;
		column=2;
	}
	if(number==7){
		row=2;
		column=0;
	}
	if(number==8){
		row=2;
		column=1;
	}
	if(number==9){
		row=2;
		column=2;
	}
	else if(number<1 || number>9){
		cout<<"Invalid!!!"<<endl;
	}
	if(digit=='x' && arr[row][column] !='x' && arr[row][column] !='0'){
		arr[row][column]='x';
		digit='0';
		functionOne();
	}
	else if(digit=='0' && arr[row][column] !='x' && arr[row][column] !='0'){
		arr[row][column]='0';
		digit='x';
		functionOne();
	}else{
		cout<<"There is no empty space!"<<endl;
		functionTwo();
	}
}
bool functionThree(){
	for(int i=0;i<3;i++){
		if(arr[i][0]==arr[i][1] && arr[i][0]==arr[i][2] || arr[0][i]==arr[1][i] && arr[0][i]==arr[2][i])
		return true;
	}
	if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] || arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
	{
		return true;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j] !='x' && arr[i][j] !='0'){
				return false;
			}
		}
	}
	tie=true;
	return false;
}
int main(){
	cout<<"Enter the name of the first player: \n";
	getline(cin,n1);
	cout<<"Enter the name of the second player: \n";
	getline(cin,n2);
	cout<<n1<< " is player1 so he/she will play first \n";
	cout<<n2<< " is player2 so he/she will play second \n";
	while(!functionThree()){
		functionTwo();
		functionThree();
	}
	if(digit=='x' && tie==false){
		cout<<n2<<"\tWins!!!"<<endl;
	}
	else if(digit=='0' && tie==false){
		cout<<n1<<"\tWins!!!"<<endl;
	}
	else{
		cout<<"It's a Draw!!!"<<endl;
	}
}
