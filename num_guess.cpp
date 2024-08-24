/* Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number. */

#include<iostream>
#include <cstdlib> 
#include <ctime>
#include <limits>
using namespace std;

int main()
{
    srand(time(0)); 
    int num;
    int t = 0;
    int number_range = rand();
    cout<<"I have selected a number."<<endl;
    
    while(true){
        cout<<"Enter the number you have guessed"<<endl;
        cin>>num;
        if (cin.fail()) { // use to check input failures
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cout << "Invalid input. Please enter a number." << endl;
            continue; 
        }
        t++;
    
        if(num < number_range){
            cout<<"Too Low! "<<endl;
        } else if(num > number_range){
            cout<<"Too High!"<<endl;
        } else{
           cout<<"YAY! You have guessed the correct number"<<endl;
           break;
        }
    }
    return 0;
}
