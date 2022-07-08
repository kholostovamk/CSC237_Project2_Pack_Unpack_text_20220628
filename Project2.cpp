//CSC237 Project2:
// Student: yourName 
// Due Date: projectDueDate // Description:
//Text Packing / Unpacking Operations
// This program reads a text document, “packs” the ASCII characters // from that document into unsigned int variables, and outputs those variables // to another text file, formatted as hexadecimal numbers.
// This program also reverses the process, converting the unsigned int numbers // back into a copy of the original text document.



#include <iostream>
#include <string>
#include <fstream>
using namespace std;


bool confirmYN(string promptText);
void displayHelpText();
string p();

int main() {

	string command;
    bool keepRunning = true;         // flag to control exit from program.

    
    
    
    
    
    
    
    
    
    
    
    while (keepRunning == true) {

		// Prompt for command input.
		cout << "Enter command (or 'h' for help): ";
		getline(cin, command);

		//   Based on the command that the user entered, call 
		//   the function that implements that command.
		if (command == "p") {
			p();
		}
		else if (command == "u") {
			
		}
		else if (command == "h") {
            	displayHelpText();
		}
		else if (command == "q") {
			// If user confirms, set flag to exit program
			keepRunning = !confirmYN("Are you sure that you want to exit the program? ");
		}
		else {
			cout << "Invalid command: " << command << endl;
		}
    }  // (end 'while')

        cout << "Exit the program." << endl;
	return 0;
}  // (end function 'main')


//command p

string p() {

       //opening file FOR INPUT
    ifstream inFile;
    string fileName;
    cout << "Enter name of input file: " << endl;
    cin>> fileName;
    inFile.open(fileName.c_str());

    //opening file FOR OUTPUT
    ofstream outFile;
    string fileName2;
    cout << "Enter name of output file: " << endl;
    cin>> fileName2;
    outFile.open(fileName2.c_str());

    
 
    //works for out put out of file
    string line1;
    while(getline(inFile, line1)){
      cout<<line1<< endl;
    }
    
	

}
























void displayHelpText() {
	// Help text.
	cout << "General command format:  \n"
		<< "     most commands consist of a single-letter \n" << endl;
	cout << "Supported commands: \n"
		<< "     a    Pack a text document into insigned integers.\n"
		<< "     u    Unpack unsigned integers to text.\n"
		<< "     h    Print help text.\n"
		<< "     q    Quit (end the program).\n"
		<< endl;
}















bool confirmYN(string promptText)
{
	string inputString;
	bool confirmationValue = false;
	bool inputIsOK = false;

	do
	{
		// input from user 
		cout << promptText;
		getline(cin, inputString);

		if (inputString == "y" || inputString == "Y")
		{
			confirmationValue = true;
			inputIsOK = true;
		}
		else if (inputString == "n" || inputString == "N")
		{
			confirmationValue = false;
			inputIsOK = true;
		}
		else
		{
			cout << "Invalid input:  " << inputString << ".  Please input y or n." << endl;
		}
	} while (inputIsOK == false);
	return confirmationValue;}




