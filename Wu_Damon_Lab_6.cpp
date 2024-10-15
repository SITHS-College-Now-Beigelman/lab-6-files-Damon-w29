// Damon Wu & Jovanni Sanchez 
// 10/15/2024
// Lab 6 

#include <iostream> 
#include <fstream>
#include <string> 

using namespace std;
 
int main () 
{
    // allows input files to be read and output files to be made. 
    ifstream inputfile;
    ofstream outputfile;

    // lists variables 
    int data1;
    int data2;
    char ascii;
    char following; // will be used to represent the ascii character that follows the input data. 
    string inputSTR;

    // opens a certain file in quotations
    inputfile.open("indata.txt");
    // creates a file with the name of the text in quotes
    outputfile.open("outdata.txt");
    // outputs this text before creating a file 
    cout << "Processing information \n";

    // takes data and then adds the data together in a sequence. 
    inputfile >> data1 >> data2;
    outputfile << "Sum of " << data1 << " and " << data2 << " equals "<< data1 + data2 << endl;

    // takes the input data for ascii, then 'following' will just be ascii + 1 to represent the next piece of data. 
    inputfile >> ascii;
    following = ascii + 1;
    outputfile << "The character that follows " << ascii << " in the ascii sequence is " << following  << ". \n";

    // takes data from the string and then prints it after a statement. 
    inputfile >> inputSTR;
    outputfile << "This random user decided to type " << inputSTR << ".\n";
return 0; // kills code

    /*
    Sum of 75 and 85 equals 160
    The character that follows E in the ascii sequence is F. 
    This random user decided to type Beanie.
    */
}
