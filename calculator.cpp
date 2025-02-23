#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

struct dataa{
    float num_1, num_2, res;
    char oper;
};

int main(){
    vector<dataa> his;
    cout << "Simple 4 types of caluclations can be done between 1st and 2nd number: " << endl << "+ Addtion" << endl << "- Subtraction" << endl << "* Multiplication" << endl << "/ Division" << endl;
    int choice;
    while(1){
        cout << "1.Caluclate" << endl << "2.View History" << endl << "3.Exit" << endl;
        cin >> choice;
        if(choice == 1){
            dataa temp;
            cout << "Enter 1st number: ";
            cin >> temp.num_1;
            cout << "Enter 2nd number: ";
            cin >> temp.num_2;
            cout << "Enter the operator: ";
            cin >> temp.oper;
            if(temp.oper == '+'){
                temp.res = temp.num_1 + temp.num_2;
                cout << fixed << setprecision(2) << temp.res << endl;
                his.push_back(temp);
            }
            else if(temp.oper == '-'){
                temp.res = temp.num_1 - temp.num_2;
                cout << fixed << setprecision(2) << temp.res << endl;
                his.push_back(temp);
            }
            else if(temp.oper == '*'){
                temp.res = temp.num_1 * temp.num_2;
                cout << fixed << setprecision(2) << temp.res << endl;
                his.push_back(temp);
            }
            else if(temp.oper == '/'){
                temp.res = temp.num_1 / temp.num_2;
                cout << fixed << setprecision(2) << temp.res << endl;
                his.push_back(temp);
            }
            else{
                cout << "Please enter valid operation." << endl << "Ended without computing result.";
            }
        }
        else if(choice == 2){
            for(int i = 0; i < his.size(); i++){
                cout << fixed << setprecision(2) << his[i].num_1 << " " << his[i].oper << " " << his[i].num_2 << " = " << his[i].res << endl;
            }
        }
        else if(choice == 3){
            cout << "Exiting the program."
            return 0;
        }
        else {
            cout << "Please enter VALID option.";
        }
    }

    return 0;
}