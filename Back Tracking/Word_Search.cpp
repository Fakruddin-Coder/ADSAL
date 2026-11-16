#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<string>& board,string word,int row,int col,int k)
{
    if(k==word.size())
    {
        return true;
    }

    if(row<0 || col<0 || row>=board.size() || col>=board.size() || board[row][col]!=word[k])
    {
        return false;
    }

    char ch = board[row][col];
    board[row][col]='#';

    if(solve(board,word,row+1,col,k+1) ||
        solve(board,word,row-1,col,k+1) ||
        solve(board,word,row,col+1,k+1) ||
        solve(board,word,row,col-1,k+1)
    ){
        return true;
    }

    board[row][col]=ch;
    return false;

}

int main()
{

    vector<string> board={

        "ABCS",
        "SFCS",
        "ADEE"
    };

    string word="ABCCED";

    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[0].size();j++)
        {
            if(solve(board,word,i,j,0))
            {
                cout<<"Found";
                return 0;
            }
        }       
    }

    cout<<"Not Found ........ ";

    return 0;

}