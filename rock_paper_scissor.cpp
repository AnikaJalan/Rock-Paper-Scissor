#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

char computerMove(){
	int move;
	srand(time(NULL));
	move=rand()%3;

	if(move==0){
		return 'r';
	}
	else if(move==1){
		return 'p';
	}
	return 's';
}

int IsWin (char computer, char user){
	if(user==computer){
		return 0;
	}
	if(user=='s'&&computer=='r'){
		return -1;
	}
	if(user=='s'&&computer=='p'){
		return 1;
	}
	if(user=='r'&&computer=='s'){
		return 1;
	}
	if(user=='r'&&computer=='p'){
		return -1;
	}
	if(user=='p'&&computer=='s'){
		return -1;
	}
	if(user=='p'&&computer=='r'){
		return 1;
	}
	return 0;
}

int main(){


	cout<<"Welcome To Rock Paper Scissor!!"<<endl;
	cout<<"Basic Instructions before we start the game"<<endl;
	cout<<"1. Enter r for rock."<<endl;
	cout<<"2. Enter s for scissor."<<endl;
	cout<<"3. Enter p for paper."<<endl;
	cout<<"Now you are ready to go..."<<endl;

	char user;

	while(1){
		cout<<"Enter your move:"<<endl;
		cin>>user;
		if(user=='r'||user=='p'||user=='s'){
			break;
		}
		else{
			cout<<"INVAILD MOVE!!";
		}
	}
	char computer=computerMove();
	int result = IsWin(computer,user);
	if(result==0){
		cout<<"GAME DRAW!"<<endl;
	}
	else if(result==1){
		cout<<"WOHHOO.....YOU WIN"<<endl;
	}
	else{
		cout<<"YOU LOSE"<<endl;
	}
}