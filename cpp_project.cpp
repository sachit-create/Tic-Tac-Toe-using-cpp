//Tic Tac Toe Game (Command line IO)

#include <iostream>
#include <string>

using namespace std;

void print_final(char arr[3][3]){
    for(int i=0 ; i<=2 ; i++){
        for(int j=0 ; j<=2 ; j++){
                cout << " "<<arr[i][j] ;
        }
        cout << endl;
    }
}

bool create_result(char arr[3][3],char p1,char p2){
    //row 1
    if((arr[0][0]=='O'&&arr[0][1]=='O'&&arr[0][2]=='O')||(arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X')){
       print_final(arr);
       cout << "row 1" << endl;
       if(arr[0][0] == p1){
         cout << "So the Winner we have Player 1" << endl;
       }else{
         cout << "So the Winner we have Player 2" << endl;
       }
       return true;
    }
    //row 2
     if((arr[1][0]=='O'&&arr[1][1]=='O'&&arr[1][2]=='O')||(arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X')){
       print_final(arr);
       cout << "row 2" << endl;
       if(arr[1][0] == p1){
         cout << "So the Winner we have Player 1" << endl;
       }else{
         cout << "So the Winner we have Player 2" << endl;
       }
       return true;
    }
    //row 3
     if((arr[2][0]=='O'&&arr[2][1]=='O'&&arr[2][2]=='O')||(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X')){
       print_final(arr);
       cout << "row 3" << endl;
       if(arr[0][0] == p1){
         cout << "So the Winner we have Player 1" << endl;
       }else{
         cout << "So the Winner we have Player 2" << endl;
       }
       return true;
    }
    //column 1
     if((arr[0][0]=='O'&&arr[1][0]=='O'&&arr[2][0]=='O')||(arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X')){
       print_final(arr);
       cout << "colm 1" << endl;
       if(arr[0][0] == p1){
         cout << "So the Winner we have Player 1" << endl;
       }else{
         cout << "So the Winner we have Player 2" << endl;
       }
       return true;
    }
    //column 2
     if((arr[0][1]=='O'&&arr[1][1]=='O'&&arr[2][1]=='O')||(arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X')){
       print_final(arr);
       cout << "colm 2" << endl;
       if(arr[0][0] == p1){
         cout << "So the Winner we have Player 1" << endl;
       }else{
         cout << "So the Winner we have Player 2" << endl;
       }
       return true;
    }
    //column 3
     if((arr[0][2]=='O'&&arr[1][2]=='O'&&arr[2][2]=='O')||(arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X')){
       print_final(arr);
       cout << "col 3"<<endl;
       if(arr[0][0] == p1){
         cout << "So the Winner we have Player 1" << endl;
       }else{
         cout << "So the Winner we have Player 2" << endl;
       }
       return true;
    }
    //diagonal 1
     if((arr[0][0]=='O'&&arr[1][1]=='O'&&arr[2][2]=='O')||(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X')){
       print_final(arr);
       cout << "digo1"<< endl;
       if(arr[0][0] == p1){
         cout << "So the Winner we have Player 1" << endl;
       }else{
         cout << "So the Winner we have Player 2" << endl;
       }
       return true;
    }
    //diagonal 2
     if((arr[2][0]=='O'&&arr[1][1]=='O'&&arr[0][2]=='O')||(arr[2][0]=='X'&&arr[1][1]=='X'&&arr[0][2]=='X')){
       print_final(arr);
       cout << "digo2"<<endl;
       if(arr[0][0] == p1){
         cout << "So the Winner we have Player 1" << endl;
       }else{
         cout << "So the Winner we have Player 2" << endl;
       }
       return true;
    }
    return false;
}


char getentity(int player,char p1,char p2){
    if(player == 1){
       return p1;
    }
    else{
       return p2;
    }
}

bool isoccured(char arr[3][3],int r,int c,char &whatf){
    if(arr[r][c] != '0'){
        whatf = arr[r][c];
        return true;
    }
    return false;
}


bool insert(char arr[3][3], int r , int c,char val,int num,int ins_posi){
    char whatf;
    if(isoccured(arr,r,c,whatf)){
        cout << "you have already putted " << whatf << " on "<< ins_posi << " position"<<endl;
        return true;
    }else{
       arr[r][c] = val;
       cout << "correct" << endl;
       return false;
    }
}

int reinput(int player){
    if(player == 1)
    {
       return player =2;
    }else{
       return player = 1;
    }
}



int main(){
    int num = 1;
    char ch = 'y';
    

    do{
    char entity;
    bool key = true;
    char p1;
    char p2;
    int choice;
    bool end = true;
    bool who = false;
     char arr[3][3] = {
        {'0', '0' , '0'},
        {'0', '0' , '0'},
        {'0', '0' , '0'}
    };
        num = 1;
        cout << "     -> Tic Tac Toe <-" << endl;
        cout << "         1 | 2 | 3" << endl;
        cout << "        -----------"<< endl;
        cout << "         4 | 5 | 6" << endl;
        cout << "        -----------"<< endl;
        cout << "         7 | 8 | 9" << endl;
        do{
            cout << "Now time to choose O and X : " << endl;
            cout << "player 1 : ";
            cin >> p1;
            cout << "player 2 : ";
            cin >> p2;

            // Check if player 1 and player 2's choices are valid
            if (p1 != 'O' && p1 != 'X') {
                cout << "player 1, please choose either 'O' or 'X' : " << endl;
            }
            else if (p2 != 'O' && p2 != 'X') {
                cout << "player 2, please choose either 'O' or 'X' : " << endl;
            }
            // Check if both players choose the same value
            else if (p1 == p2) {
                cout << "You both have chosen the same character! Please choose different values." << endl;
            } else {
                key = false;  // Exit the loop if both choices are valid and different
            }
        }while (key);  // Loop will continue if key is true

        // Output the selected characters
        cout << "Player 1 chose: " << p1 << endl;
        cout << "Player 2 chose: " << p2 << endl;

        do{
            int player = 1;
            if(num%2 == 0){
                player = 2;
            }
          
            cout << "Where you want to insert player " << player << endl;
            scanf("%d",&choice);

            switch (choice){
                case 1 : {
                    char val = getentity(player,p1,p2);
                    if(insert(arr,0,0,val,num,1)){
                        reinput(player);
                        num--;
                        break;
                    }else{
                        cout << val <<" inserted at first position"<< endl;
                        if(num>=5){
                          who = create_result(arr,p1,p2);
                        }
                        break;
                    }
                    
                }
                case 2 : {
                    char val = getentity(player,p1,p2);
                    if(insert(arr,0,1,val,num,2)){
                        reinput(player);
                        num--;
                        break;
                    }else{
                        cout << val <<" inserted at second position"<< endl;
                         if(num>=5){
                          who = create_result(arr,p1,p2);
                        }
                        break;
                    }       
                }
                case 3 : {
                    char val = getentity(player,p1,p2);
                    if(insert(arr,0,2,val,num,3)){
                        reinput(player);
                        num--;
                        break;
                    }else{
                        cout << val <<" inserted at third position"<< endl;
                         if(num>=5){
                          who = create_result(arr,p1,p2);
                        }
                        break;
                    }
                }
                case 4 : {
                    char val = getentity(player,p1,p2);
                    if(insert(arr,1,0,val,num,4)){
                        reinput(player);
                        num--;
                        break;
                    }else{
                        cout << val <<" inserted at fourth position"<< endl;
                         if(num>=5){
                          who = create_result(arr,p1,p2);
                        }
                        break;
                    }
                }
                case 5 : {
                    char val = getentity(player,p1,p2);
                    if(insert(arr,1,1,val,num,5)){
                        reinput(player);
                        num--;
                        break;
                    }else{
                        cout << val <<" inserted at fifth position"<< endl;
                         if(num>=5){
                          who = create_result(arr,p1,p2);
                        }
                        break;
                    }
                }
                case 6 : {
                    char val = getentity(player,p1,p2);
                    if(insert(arr,1,2,val,num,6)){
                        reinput(player);
                        num--;
                        break;
                    }else{
                        cout << val <<" inserted at sixth position"<< endl;
                         if(num>=5){
                          who = create_result(arr,p1,p2);
                        }
                        break;
                    }
                }
                case 7 : {
                    char val = getentity(player,p1,p2);
                    if(insert(arr,2,0,val,num,7)){
                        reinput(player);
                        num--;
                        break;
                    }else{
                        cout << val <<" inserted at seventh position"<< endl;
                         if(num>=5){
                          who = create_result(arr,p1,p2);
                        }
                        break;
                    }
                }
                case 8 : {
                    char val = getentity(player,p1,p2);
                    if(insert(arr,2,1,val,num,8)){
                        reinput(player);
                        num--;
                        break;
                    }else{
                        cout << val <<" inserted at eight position"<< endl;
                         if(num>=5){
                          who = create_result(arr,p1,p2);
                        }
                        break;
                    }
                }
                case 9 : {
                    char val = getentity(player,p1,p2);
                    if(insert(arr,2,2,val,num,9)){
                        reinput(player);
                        num--;
                        break;
                    }else{
                        cout << val <<" inserted at ninth position"<< endl;
                         if(num>=5){
                          who = create_result(arr,p1,p2);
                        }
                        break;
                    }
                }
                default :{
                    cout << "Invalid input" << endl;
                    player = reinput(player);
                    num = num-1;
                    break;
                }
            }
            num++;
            if(who){
                break;
            }
        }while(num <= 9);
    if(!who){
        cout << "Its a draw!"<<endl;
    }
    cout << "Result calculated Yay!"<<endl;    
    cout << "One more game ? (y/n) : ";
    cin >> ch;
    cout << "THANKYOU FOR PLAYING"<<endl;
    if(ch != 'y' && ch!= 'n'){
        cout << "You have entered " << ch << " so i am terminating...." <<endl;
        return 0;
    }
    }while(ch != 'n');
    return 0;
}