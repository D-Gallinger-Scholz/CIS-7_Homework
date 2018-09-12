#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int main(){
	//create variables
  string formula;
	string testValues = "ABCDEFGHIJKLMNOPQRSTUVWXYZv^!->";
	string testStatements = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
	char lastCharacter;
	bool isValidWFF = true;
	bool isFirst = true;
	bool isValidChar = false;
	bool statementFollowsNegation = false;
  bool closingTime = true;
  //cycle through the program until the user quits
  while(closingTime == true){
	  //ask user to input a formula
	  cout << "Enter a formula or '0' to quit: ";
	  getline(cin, formula);
	  //cycle through the characters in the formula
	  for(unsigned int i = 0; i<formula.length(); i++){
	  	//place the current character of the formula in a separate  variable
	  	char current = formula[i];
      //if the user entered a zero, end the program
     if(current == '0'){
        exit(0);
     }
	  	//make sure if there is a '-' then '>' follows it without any spaces
	  	if(lastCharacter == '-' && current != '>'){
	  		isValidWFF = false;
        lastCharacter = current;
	  		break;
	  	}
	  	else if(lastCharacter == '-' && current == '>'){
	  		lastCharacter = current;
	  		continue;
	  	}
	  	//ignore all other spaces
		  if(current == ' '){
		    	continue;
	  	}
	  	//make sure the current character is a valid formula component
		  for(unsigned int j = 0; j<testValues.length(); j++){
		  	char currentTest = testValues[j];
		  	if(current == currentTest){
		  		isValidChar = true;
		  	}
		  }
		  if(!isValidChar){
		  	isValidWFF = false;
        lastCharacter = current;
		  	break;
		  }
	  	else{
	  		isValidChar = false;
	  	}
		  //make sure the formula doesn't begin with a connector
		  if(isFirst){
		  	if(current == '-' || current == 'v' || current == 'V' ||  current == '^'){
		  		isValidWFF = false;
         lastCharacter = current;
			  	break;
		  	}
		  	else{
		  		isFirst = false;
		  	}
		  }
		  //make sure a connector isn't followed by another connector, except '!'
		  if(lastCharacter == '>' || lastCharacter == 'v' ||  lastCharacter == 'V' || lastCharacter == '^'){
		  	if(current == '-' || current == 'v' || current == 'V' ||  current == '^'){
			  	isValidWFF = false;
         lastCharacter = current;
			  	break;
		  	}
		  }
		  //make sure '!' is followed by a statement
		  if(lastCharacter == '!'){
		  	for(unsigned int k = 0; k<testStatements.length(); k++){
			  	char currentStatement = testStatements[k];
			  	if(current == currentStatement){
			  		statementFollowsNegation = true;
			  	}
		  	}
		    if(!statementFollowsNegation){
			    isValidWFF = false;
         lastCharacter = current;
		    	break;
		    }
	  	  else{
	  	  	statementFollowsNegation = false;
	  	  }
	  	}
      lastCharacter = current;
    }
	  //make sure the formula doesn't end with a connector
	  if(lastCharacter == '>' || lastCharacter == 'v' || lastCharacter == 'V' || lastCharacter == '^' || lastCharacter == '!'){
	  	isValidWFF = false;
	  }
	  if(isValidWFF){
	  	cout << "The formula is a WFF!" << endl << endl;
  	}
	  //otherwise, state that it is not a WFF
  	else{
	  	cout << "The formula is not a WFF you dummy!" << endl << endl;
  	}
    isValidWFF = true;
  }
  return 0;
}
