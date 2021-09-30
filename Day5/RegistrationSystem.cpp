//C++ program for user registartion system

#include<iostream>
#include<fstream>

using namespace std;

struct mail{
    char un[25];
    char pwd[25];
    void reg(int);
}obj[5];

void mail :: reg(int k){

    int i =k;
    cout<<"\nEnter Username : ";
    cin>>un;

    cout<<"\nEnter Password : ";
    cin>>pwd;

    ofstream fout;
    fout.open("Registration.txt");
    if(!fout){
        cout<<"\nUnable to open the file :(";

    }else{
        cout<<'\n';
        fout.write((char*)&obj[i],sizeof(mail));
        fout.close();
    }

    cout<<"\nRegistration Successfull";

}

int main(){
    int t;
    cout<<"\nEnter Registration Details For User 1 : \n";
    obj[0].reg(0);

    cout<<"\nEnter Registration Details For User 2 : \n";
    obj[1].reg(1);

    cout<<"\nEnter Registration Details For User 1 : \n";
    obj[1].reg(1);

    mail obj2;

    ifstream fin;

    fin.open("Registrtaion.txt");
    if(!fin){
        cout<<"\nUnable to open file ";
    }else{
        cout<<"\nRegistration Details Of All Users : \n";

        fin.read((char *)&obj2,sizeof(obj2));
        while(fin){
             cout<<"\nUsername :: "<<obj2.un<<"\nPasswword :: "<<obj2.pwd<<"\n";
            fin.read((char *)&obj2,sizeof(obj2));
        }

        fin.close();

    }

}

