#include<bits/stdc++.h>
using namespace std;

char S[10]={'0','1','2','3','4','5','6','7','8','9'};

int check_win(){
    if(S[1]==S[2] && S[2]==S[3]){
        return 1;
    }
    else if(S[4]==S[5] && S[5]==S[6]){
        return 1;
    }
    else if(S[7]==S[8] && S[8]==S[9]){
        return 1;
    }
    else if(S[1]==S[4] && S[4]==S[7]){
        return 1;
    }
    else if(S[2]==S[5] && S[5]==S[8]){
        return 1;
    }
    else if(S[3]==S[6] && S[6]==S[9]){
        return 1;
    }
    else if(S[1]==S[5] && S[5]==S[9]){
        return 1;
    }
    else if(S[3]==S[5] && S[5]==S[7]){
        return 1;
    }
    else if(S[1]!='1' && S[2]!='2' && S[3]!='3' && S[4]!='4' && S[5]!='5' && S[6]!='6' && S[7]!='7' && S[8]!='8' && S[9]!='9'){
        return 0;
    }
    else{
        return -1;
    }
}    

void board(){
    cout<<"\n\n\t X/O GAME \n\n";
    cout<<"Player 1-(X)  V/S  Player 2-(O)\n\n";
    cout<<"     |     |     \n";
	cout<<"  "<<S[1]<<"  |  "<<S[2]<<"  |  "<<S[3]<<"\n";
	cout<<"_____|_____|_____\n";
	cout<<"     |     |     \n";
	cout<<"  "<<S[4]<<"  |  "<<S[5]<<"  |  "<<S[6]<<"\n";
	cout<<"_____|_____|_____\n";
	cout<<"     |     |     \n";
	cout<<"  "<<S[7]<<"  |  "<<S[8]<<"  |  "<<S[9]<<"\n";
	cout<<"     |     |     \n";	
}

int main()
{
    int P=1,a,C;
    char symbol;
    do{
        board();
        if(P%2==0){
            P=2;
        }
        else if(P%2==1){
            P=1;
        }
        cout<<"player "<<P<<", enter the choice: ";
        cin>>C;
        if(P==1){
            symbol='X';
        }
        else{
            symbol='O';
        }
        if((C==1)&&(S[1]=='1')){
            S[1]=symbol;
        }
        else if((C==2)&&(S[2]=='2')){
            S[2]=symbol;
        }
        else if((C==3)&&(S[3]=='3')){
            S[3]=symbol;
        }
        else if((C==4)&&(S[4]=='4')){
            S[4]=symbol;
        }
        else if((C==5)&&(S[5]=='5')){
            S[5]=symbol;
        }
        else if((C==6)&&(S[6]=='6')){
            S[6]=symbol;
        }
        else if((C==7)&&(S[7]=='7')){
            S[7]=symbol;
        }
        else if((C==8)&&(S[8]=='8')){
            S[8]=symbol;
        }
        else if((C==9)&&(S[9]=='9')){
            S[9]=symbol;
        }
        else{
            cout<<"invalid options bro";
            P--;
        }
        a=check_win();
        P++;
    }while(a==-1);
    
    board();
    if(a==1){
        cout<<"***** player "<<--P<<" won";
    }
    else{
        cout<<"******game draw";
    }
    return 0;
}


