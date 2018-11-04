int siner(){
	int number;
	while(1){
		cin>>number;
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(69, '\n');
			cout << "Invalid input " << endl;
		}
		else
			break;
		cout<<"HINT : Try entering numbers for a change"<<endl;
	}
	return number;
}
