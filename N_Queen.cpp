#include<iostream>
#include<vector>
#include<string>
using namespace std;

int show=1;
int isSafe(vector<string> &ChessBoard,int r,int c)
{
    int n=ChessBoard.size();
    for(int i=0;i<c;i++)
        if(ChessBoard[r][i] == 'Q')
            return 0;
    
    int i = r-1,
        j = c-1;
    while(i>=0 && j>=0)
        if(ChessBoard[i--][j--] == 'Q')
            return 0;
    
    i = r+1;
    j = c-1;
    while(i<n && j>=0)
        if(ChessBoard[i++][j--] == 'Q')
            return 0;
    
    return 1;    
}
void display(vector<string> &ChessBoard)
{
    cout<<endl;
    for(string s:ChessBoard)
    {
        cout<<"     ";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='Q')
            cout<<'Q'<<i+1<<" ";
            else
            cout<<'-'<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;

}
int NQ(vector<string> &ChessBoard,int c)
{
    int n = ChessBoard.size();
    if(c >= n)
        return 1;
    for(int r=0;r<n;r++)
    {
        if(isSafe(ChessBoard,r,c))
        {
            if(show) cout<<"Placing Q"<<c+1<<" at ("<<r+1<<","<<c+1<<")"<<endl;
            ChessBoard[r][c] = 'Q';
            if(show) display(ChessBoard);
            if(c+2 <= n)
            if(show) cout<<"Checking if Q"<<c+2<<" can be placed in the next column\n";
            if(NQ(ChessBoard,c+1))
                return true;
            
            if(show) cout<<"Q"<<c+2<<" can not be placed , Removing Q"<<c+1<<" and checking for next possible position(Backtracking)\n";
            ChessBoard[r][c] = '-';
            if(show) display(ChessBoard);
        }
    }
    return 0;
}
int main()
{
    int n;cout<<"Enter number of Queens : ";cin>>n;
    vector<string> ChessBoard(n,string(n,'-'));
    cout<<"Do you want to show each step [1 = yes,0 = no] : ";cin>>show;
    if(!NQ(ChessBoard,0))
    cout<<"No Solution exists for "<<n<<" number of Queens\n";
    else
    {
        cout<<"Arrangement for "<<n<<" Queens :-\n";
        display(ChessBoard);
    }
    return 0;
}