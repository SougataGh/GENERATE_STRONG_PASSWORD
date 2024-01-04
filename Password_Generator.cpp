string Password_Generator:: get_Password(){
	    int charSize = characters.size();
	    srand(time(0));
	    int randomIndex;
	    for(int i=0 ; i<length ; i++){
	        randomIndex = rand() % charSize; // This rand() func^n will return a random value & according to that an random index from characters string will be selected .
			// The modulo operat^n will ensure that randomIndex is not > (length of string characters - 1) [as 0 based indexing is concerned]
	        Password = Password + characters[randomIndex];
	    }
	    return Password;
}
