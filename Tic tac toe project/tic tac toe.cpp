#include<iostream>
#include<windows.h>
using namespace std;

#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define AQUA "\033[1;36m"
#define WHITE "\033[1;37m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[0;33m"
#define PURPLE "\033[1;35m"

void board();
void printboard();
void userinput(char Player);
void checkgame(char Player);
void clear_line();

char box[3][3],player;
int place,gameover=0;
string print[] = {"\033[1;35m\t\tTic - Tac - Toe\033[1;37m","\033[1;31m\tThis place is already Taken\n\033[1;37m","\033[1;31m\tEnter the correct index value\n\033[1;37m"};

int main(){
	system("cls");
	system("color 0f");
	Sleep(1000);
	cout<<"\n\n\n\n\n\t\t"<<RED<<"TIC ";
	Sleep(1000);
	cout<<BLUE<<"TAC ";
	Sleep(1000);
	cout<<YELLOW<<"TOE ";
	Sleep(2000);
	cout<<WHITE;
	board();
	while(1){
	system("cls");
	player='X';
	cout<<print[0]<<endl;
	printboard();
	userinput(player);
	checkgame(player);
	system("cls");
	player='O';
	cout<<print[0]<<endl;
	printboard();
	userinput(player);
	checkgame(player);
	}
}

void board(){
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			box[i][j]=' ';
}

void printboard(){
	cout<<"\n\t\t  "<<box[0][0]<<" | "<<box[0][1]<<" | "<<box[0][2]<<endl;
	cout<<"\t\t"<<"-------------"<<endl;
	cout<<"\t\t  "<<box[1][0]<<" | "<<box[1][1]<<" | "<<box[1][2]<<endl;
	cout<<"\t\t"<<"-------------"<<endl;
	cout<<"\t\t  "<<box[2][0]<<" | "<<box[2][1]<<" | "<<box[2][2]<<"\n\n"<<endl;
}

void userinput(char Player){
	reenter:
	cout<<BLUE<<"\tNow '"<<Player<<"' turn\t:\t"<<WHITE;
	cin>>place;
	switch(place){
	case 1:
		if(box[0][0]!=' '){
			cout<<print[1];
			Sleep(2000);
			clear_line();clear_line();
			goto reenter;
		}
		else{
			box[0][0]=Player;
			gameover++;
		}
		break;
	case 2:
		if(box[0][1]!=' '){
			cout<<print[1];
			Sleep(2000);
			clear_line();clear_line();
			goto reenter;
		}
		else{
			box[0][1]=Player;
			gameover++;
		}
		break;
	case 3:
		if(box[0][2]!=' '){
			cout<<print[1];
			Sleep(2000);
			clear_line();clear_line();
			goto reenter;
		}
		else{
			box[0][2]=Player;
			gameover++;
		}
		break;
	case 4:
		if(box[1][0]!=' '){
			cout<<print[1];
			Sleep(2000);
			clear_line();clear_line();
			goto reenter;
		}
		else{
			box[1][0]=Player;
			gameover++;
		}
		break;
	case 5:
		if(box[1][1]!=' '){
			cout<<print[1];
			Sleep(2000);
			clear_line();clear_line();
			goto reenter;
		}
		else{
			box[1][1]=Player;
			gameover++;
		}
		break;
	case 6:
		if(box[1][2]!=' '){
			cout<<print[1];
			Sleep(2000);
			clear_line();clear_line();
			goto reenter;
		}
		else{
			box[1][2]=Player;
			gameover++;
		}
		break;
	case 7:
		if(box[2][0]!=' '){
			cout<<print[1];
			Sleep(2000);
			clear_line();clear_line();
			goto reenter;
		}
		else{
			box[2][0]=Player;
			gameover++;
		}
		break;
	case 8:
		if(box[2][1]!=' '){
			cout<<print[1];
			Sleep(2000);
			clear_line();clear_line();
			goto reenter;
		}
		else{
			box[2][1]=Player;
			gameover++;
		}
		break;
	case 9:
		if(box[2][2]!=' '){
			cout<<print[1];
			Sleep(2000);
			clear_line();clear_line();
			goto reenter;
		}
		else{
			box[2][2]=Player;
			gameover++;
		}
		break;
	default:
		cout<<print[2];
		Sleep(2000);
		clear_line();clear_line();
		goto reenter;
	}

}

void checkgame(char Player){
	if( 
		(box[0][0]==Player && box[0][1]==Player && box[0][2]==Player)||
		(box[1][0]==Player && box[1][1]==Player && box[1][2]==Player)||
		(box[2][0]==Player && box[2][1]==Player && box[2][2]==Player)||
		(box[0][0]==Player && box[1][0]==Player && box[2][0]==Player)||
		(box[0][1]==Player && box[1][1]==Player && box[2][1]==Player)||
		(box[0][2]==Player && box[1][2]==Player && box[2][2]==Player)||
		(box[0][0]==Player && box[1][1]==Player && box[2][2]==Player)||
		(box[0][2]==Player && box[1][1]==Player && box[2][0]==Player)
	 ){
	 	system("cls");
	 	cout<<print[0]<<endl;
	 	printboard();
		cout<<GREEN<<"\n\t***\tPlayer '"<<Player<<"' Won the GAME\t***\n"<<WHITE;
		exit(0);
	}
	else if(gameover==9){
		system("cls");
		cout<<print[0]<<endl;
		printboard();
		cout<<RED<<"\n\t\t***\tGAME TIE\t***\n"<<WHITE;
		exit(0);	
	}

}

void clear_line() {
	cout<<"\033[1A";
    cout<<"\033[2K"; // Clear entire line
    cout<<"\033[0G"; // Move cursor to the beginning of the line
}
