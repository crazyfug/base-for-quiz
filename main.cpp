#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Qstns{
    public:
    string Question;
    string option1;
    string option2;
    string option3;
    string option4;
    int CorrectID;
    int EnteredID;
};

void mychecker(int answer, int correct){
if (answer == correct){ 
    cout << "Answer is correct!" << endl; } 
    else {
    cout << "Answer is incorrect!" << endl; }

}

int main(){
    Qstns q;
    for (int i=1; i < 11; i++){
        cin.ignore();
        cout << "For question " << i <<endl;

        cout << "Enter the question:"<< endl;
        getline(cin, q.Question);
        cout << "Enter option 1: " << endl;
         getline(cin, q.option1);
        cout << "Enter option 2: " << endl;
         getline(cin, q.option2);
        cout << "Enter option 3: " << endl;
        getline(cin, q.option3);
        cout << "Enter option 4: " << endl;
        getline(cin, q.option4);
        cout << "Enter the correct option: " << endl;
        cin >> q.CorrectID;
        cout << "Answer given: " << endl;
        cin >> q.EnteredID;
    

mychecker(q.CorrectID, q.EnteredID);
}
return 0;
}

