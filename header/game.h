class Game{
	Board b;
	vector<int> all_poss_moves;
	bool chance;	//If true then white chance else black.
	void display_moves();	//used to display possible moves the player has
	public:
	Game();
	void start();
};

Game::Game(){
	this->all_poss_moves.clear();
	this->chance = false;
}

void Game::start(){
	bool k;
	k = true;
	int option;
	for(;k;this->chance = !this->chance){
		this->all_poss_moves.clear();
		this->b.move_calculator(this->chance, this->all_poss_moves);
		this->b.disp_referance();
		if(this->all_poss_moves.empty()){
			cout<<"\nNo Moves for this player";
			continue;
		}
		this->display_moves();
		while(1){
			option = siner();
			if((option >= 0) && (option < this->all_poss_moves.size()))
				break;
			cout<<"\nTry Again\n\n";
		}
		switch(this->b.move_maker(this->chance, this->all_poss_moves[option])){
			case 1 :cout<<"\nBlack Won";
				k = false;
				break;
			case 2 :cout<<"\nTie";
				k = false;
				break;
			case 3 :cout<<"\nWhite Won";
				k = false;
				break;
		}
	}
}

void Game::display_moves(){
	
}
