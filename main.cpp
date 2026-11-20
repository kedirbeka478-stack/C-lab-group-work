#include <iostream>
using namespace std;

int arr[5][4] = {
   {0, 0, 0, 0},
   {0, 0, 0, 0},
   {0, 0, 0, 0},
   {0, 0, 0, 0},
   {0, 0, 0, 0},
};

int row,col,free_seat=0,booked=0;

void showSeat() {
    free_seat = 0;
    booked = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j]== 0){
                free_seat++;
            }else{
                booked++;
            }
        }
    }

    cout << endl;
    cout << "Number of free seats: " << free_seat << endl;
    cout << "Number of booked seats: " << booked << endl << endl;
    cout << "Book a seat by row and column: \n";
    cout << "Enter row: ";
    cin >> row;
    cout << "Enter column: ";
    cin >> col;


}

void book_seat() {
      cout << endl;
      cout << "The seat is already booked. Choose another one:" << endl;
      cout << "Enter row: ";
      cin >> row;
      cout << "Enter column: ";
      cin >> col;
}

int main() {
cout<<"********************* BUS TICKET BOOKING SITE *********************\n\n" ; 

bool their_is_seat = true;
int countFree = 0;
char choice;

while(their_is_seat == true) {
  countFree = 0;
  showSeat();

  while (arr[row][col] == 1) {
      book_seat();
    }

    arr[row][col] = 1;
    cout << endl;
    cout << "Your seat is booked.\n";
    cout<<"do you want to cancel your booking: y/n"<<endl;
    cin>>choice;
  if(choice =='y' ){
    arr[row][col]=0;
    cout<<"your seat is canceled."<<endl;
  }
    for(int i=0; i<5; i++) {
        for(int j=0; j<4; j++){
            if(arr[i][j] == 0) countFree++;
        }
    }
    if (countFree == 0) their_is_seat = false; 
}
cout << "All the seats are booked. Thank you !!\n";

}
  