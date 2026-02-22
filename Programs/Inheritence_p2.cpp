#include<iostream>
using namespace std;

class IExam{
    protected:
    string name;
    int reg, Imark;
    public:
    void get(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter reg: ";
        cin>> reg;
        cout << "Enter Imark: ";
        cin >> Imark;
    }
};
class EExam {
    protected:
    int Emark;
    public:
    void get_data(){
        cout << "Enter Emark: ";
        cin >> Emark;
    }
};
class result : public IExam, public EExam{
    private:
    int fmark;
    char grade;
    public:
    void caluclate(){
        fmark = Imark + Emark;
        if(fmark >= 90)
            grade='S';
        else if(fmark >= 80)
            grade='S';        
        else if(fmark >= 70)
            grade='B';
        else grade ='F';
    }
    void display(){
        cout << "name: " << name << endl;
        cout << "reg: " << reg << endl;
        cout << "imark: " << Imark << endl;
        cout << "emark: " << Emark<< endl;
        cout << "fmark: " << fmark<< endl;
        cout << "grade: " << grade<< endl;
    }
};
int main(){
    result r;
    r.get();
    r.get_data();
    r.caluclate();
    r.display();
}
