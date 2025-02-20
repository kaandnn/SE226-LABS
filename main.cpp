
#include <iostream>

int main() {
    //q1
   
    string name;
    string student_id;
    
    cout << "What is your name" << endl;
    cin >> name;
    
    cout << "Hello" << name << "." << endl;
    
    cout << "What is the ID" << endl
    cin >> ID;
    
    cout <<"Your ID is :"<< ID<<"."<<endl;
    
    //q2
     double var1, var2;
     
     cout <<"Enter a number of var1:";
     cin >> var1;
     cout <<"Enter a number of var2";
     cin >> var2;
     
     double sum = var1 + var2;
     double diff = var1 - var2;
     double prod = var1 * var2
     
     cout << "var1 =" << var1 << edl;
     cout << "var2 =" << var2 << edl;
     cout << "sum =" << sum << edl;
     cout << "diff1 =" << diff << edl;
     cout << "prod =" << prod << edl;
     
     //q3
      string name;
    double lab, midterm, final_exam;

    cout << "Enter the student's name: ";
     getline(cin, name);

    cout << "Enter the lab grade (25%): ";
    cin >> lab;

    cout << "Enter the midterm grade (35%): ";
    cin >> midterm;

    cout << "Enter the final grade (40%): ";
    cin >> final_exam;

    double last_score = (lab * 0.25) + (midterm * 0.35) + (final_exam * 0.40);

    cout << "\nName: " << name << endl;
    cout << "Lab: " << lab << endl;
    cout << "Midterm: " << midterm << endl;
    cout << "Final: " << final_exam << endl;
    cout << "Last Score: " << last_score << endl;
    
    //q4
     cout << "\n\n*\n\n";

     
    
    

    return 0;
}
