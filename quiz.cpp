#include <iostream>
#include <cstring>
using namespace std;
// int rows;
// int cols
char numbers[49][49];
int rows;
int cols;
int bombs;
class game{
	public:
		string get_name(){
			return name;
		}
		string set_name(){
			name = "Mine Sweeper";
			return name;
		}
		int get_score(){
			return score;
		}
		int set_score(){
			score=0;
		}
	private:
		string name;
		int score;
};

class minesweeper: public game{
	private:
		int board_rows;
		int board_cols;
		int board_mines;
	public:
		// void make(){
			// int *board;
		// board = new int[board_rows][board_cols];
		// }
		void print_board(){
			cout<<endl<<"       ";
			for (int i=0; i<=board_rows; i++){
				if (i<10){cout <<"  "<< i;}
				else if (i<=50){cout<<" "<<i;}
			}
			cout <<endl<<  "       ";
			for (int k=0;k<board_rows;k++){
				cout <<"___";
			}cout<<endl;

			for (int x=0; x<=board_cols; x++){
				if(x<10){cout << "    " << x << " | ";}
				else if (x>=10){cout <<"   " << x << " | ";}
				for( int y=0; y<board_cols; y++){
					cout <<" "<< numbers[x][y] << " ";
				}	
				cout << endl;
			}

		}
		void get_square(){
			cout << "Enter a plot to check." << endl;
			//cin >> 
		}
		void get_stats(){
		board_rows = rows;
		board_cols = cols;
		board_mines = bombs;
		}
		minesweeper(){
			get_stats();
			print_board();
		}
};

int main (){
	cout<< "What size would you like your game board to be?" << endl;
	cout<< "Enter a number for rows and columns, separated with a space." << endl;
	cin>> rows >> cols;
	cout<< "How many mines should there be?" << endl;
	cin>> bombs;
	
	minesweeper ();

return 0;}