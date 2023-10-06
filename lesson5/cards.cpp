#include <iostream>
using namespace std;

struct Card{
   string rank;
    string suit;
    
};

int main(){
    
    string ranks [] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    string suits [] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    Card deck[52];

    int k = 0;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<13; j++){
            deck[k].rank = ranks[j];
            deck[k].suit = suits[i];
            k++;
        }

    }
        for(int i=0; i<52; i++){
            cout << deck[i].rank << " of " << deck[i].suit << endl;
        }
    



    return 0;
}
