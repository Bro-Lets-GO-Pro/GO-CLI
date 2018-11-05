class Board{
	int* board;
	public:
	Board();
	int move_maker(bool, int);	//to put a peice at a location. The first parameter is for side and the second for position it is to be kept. It returns 1 if the game is won by black, 3 if the game is won by white, 2 if it is a tie and 0 if the game is still on.
	void move_calculator(bool, vector<int>&);	//Takes the side as an argument and an vector. The vector when passed into it is supposed to be empty but after the function call is complete it would contain integers(all posible position it can go to)
	void disp_referance();	//display the board status for the referance of the player
};

Board::Board(){
	board = new int [siZe * siZe];
}

int Board::move_maker(bool side, int position){
	return 0;
}

void Board::move_calculator(bool side, vector<int>& moves){
	
}

void Board::disp_referance(){
	
}
