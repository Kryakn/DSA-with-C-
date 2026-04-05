#include<iostream>
using namespace std;
 bool judgeCircle(string moves) {
        int x=0;
        int y=0;
        for(int i=0;i<moves.size();i++){
            if (moves[i]=='R'){
                x++;
            }
            else if(moves[i]=='L' ){
                x--;
            }
            else if(moves[i]=='U'){
                y++;
            }
            else{
                y--;
            }
        }
        return x==0 and y==0;
    }
int main(){
return 0;
}