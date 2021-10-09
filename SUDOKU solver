#include<bits/stdc++.h>
using namespace std;

bool pre_in_col(int col,int num,int grid[][9]){
    for(int i=0;i<9;i++){
        if(grid[i][col]==num){
            return true;
        }
    }
    return false;
}

bool pre_in_row(int row,int num,int grid[][9]){
    for(int i=0;i<9;i++){
        if(grid[row][i]==num){
            return true;
        }
    }
    return false;
}

bool pre_in_box(int start_row,int start_col,int num,int grid[][9]){    
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(grid[start_row+row][start_col+col]==num){
                return true;
            }
        }
    }
    return false;
}

void sudoku_grid(int grid[][9]){
    for(int row=0;row<9;row++){
        for(int col=0;col<9;col++){
            if((col==3)||(col==6)){
                cout<<" | ";
            }
            cout<<grid[row][col];
        }
        if((row==2)||(row==5)){
            cout<<"\n";
            for(int i=0;i<8;i++){
                cout<<"--";
            }
        }
        cout<<"\n";
    }
}

bool valid_or_not(int row,int col,int num,int grid[][9]){
    return (!pre_in_box(row-(row%3),col-(col%3),num,grid))&&(!pre_in_row(row,num,grid))&&(!pre_in_col(col,num,grid));
}

bool solve(int grid[][9]){
    int row,col,x=0;
    for(int r=0;r<9;r++){
        for(int c=0;c<9;c++){
            if(grid[r][c]==0){
                row=r;
                col=c;
                x=1;
                goto e;
            }
        }
    }
    e:;
    if(x==0){
        return true;
    }
    for(int num=1;num<=9;num++){
        if(valid_or_not(row,col,num,grid)){
            grid[row][col]=num;
            if(solve(grid)){
                return true;
            }
            grid[row][col]=0;
        }
    }
    return false;
}

int main(){
    int grid[9][9],n,m;
    cout<<"*********Enter your whole SUDOKU here*********\n\n#please enter the void space in problem as '0' while giving input#\n\n";
    for(n=0;n<9;n++){
        for(m=0;m<9;m++){
            cin>>grid[n][m];
        }
    }
    if(solve(grid)){
        cout<<"your fully solved SUDOKU problem is given below\n";
        sudoku_grid(grid);
    }
    else{
        cout<<"\nNo solution possible\n";
    }
    return 0;
}
