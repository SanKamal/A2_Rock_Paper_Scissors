#include <iostream>
using namespace std;
int main()
{
    int p1,p2;
    cout<<"Rock:1 ; Paper:2 ; Scissors:3\n";
    cout<<"Player 1 choice: ";cin>>p1;
    cout<<"Player 2 choice: ";cin>>p2;
    if(p1 == p2){
        cout << "Draw!\n";
        return 0;
    }
    switch(p1){
        case 1:
            if(p2 == 2){
                cout << "Player 2 wins!\n";
            }
            if(p2 == 3){
                cout << "Player 1 wins!\n";
            }
            break;
        case 2:
            if(p2 == 1){
                cout << "Player 1 wins!\n";
            }
            if(p2 == 3){
                cout << "Player 2 wins!\n";
            }
            break;
        case 3:
            if(p2 == 2){
                cout << "Player 1 wins!\n";
            }
            if(p2 == 1){
                cout << "Player 2 wins!\n";
            }
            break;
        default:
            cout << "Error!\n";
        
    }
    return 0;
}
