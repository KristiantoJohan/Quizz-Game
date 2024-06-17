#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int q_no =1;
int correct =0;
int wrong =0;
bool ask[10]= {true, true, true, true, true, true, true, true, true, true};

void timer(int h, int m, int s);
void display_random_question();
void display();
void question(string question, string a, string b, string c, string d, char correct_answer);
void result();

int main() {
     int h, m, s;
    cout<<"Hours: "; cin>>h;
    cout<<"Minutes: "; cin>>m;
    cout<<"Seconds: "; cin>>s;
    timer(h,m,s);
    for (int i = 100; ; i = i + 50)
        Beep(i,1000);
    display();
    return 0;
}

void display(){
    system("cls");
    cout<<"question No:"<<q_no<<"     correct answer:"<<correct<<"      wrong answer:"<<wrong<<endl<<endl;
    display_random_question();
}

void display_random_question(){
    srand(time(0));
    bool is_question_remaining =false;
    for(int i=0; i<10; i++)
    {
        if(ask[i])
        {
            is_question_remaining =true;
            break;
        }
    }
    while(is_question_remaining)
    {
        int no= rand()%10;
        if(ask[no])
        {
            ask[no]= false;
            switch(no)
            {
            case 0:
                 question ("bandung berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            case 1:
                 question ("jakarta berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            case 2:
                 question ("indonesia berada di?", "mamarika", "china", "asia", "afrika", 'c');
                 break;
            case 3:
                 question ("bandung berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            case 4:
                 question ("bandung berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            case 5:
                 question ("bandung berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            case 6:
                 question ("bandung berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            case 7:
                 question ("bandung berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            case 8:
                 question ("bandung berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            case 9:
                 question ("bandung berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            case 10:
                 question ("bandung berada di?", "jawa", "kalimantan", "sulawesi", "sumatera", 'a');
                 break;
            }
        }
    }
    result();
}

void result(){
    system("cls");
    cout<<"total question ="<<q_no-1<<endl;
    cout<<"correct answers ="<<correct<<endl;
    cout<<"wrong answer ="<<wrong<<endl;
    if(correct>wrong)
        cout<<"result = pass"<<endl;
    else if(wrong > correct)
        cout<<"result = fail"<<endl;
    else
        cout<<"result = tie"<<endl;
}

void question(string question, string a, string b, string c, string d, char correct_answer){
    cout<<question<<endl;
    cout<<"A. "<<a<<endl;
    cout<<"B. "<<b<<endl;
    cout<<"C. "<<c<<endl;
    cout<<"D. "<<d<<endl;
    char answer;
    cin>>answer;
    if(answer == correct_answer)
        correct++;
    else
        wrong++;
    q_no++;
    display();
}

void timer(int h, int m, int s)
{
    for(;;)
    {
        if (h == 0 && m == 0 && s == 0)
        {
            break;
        }
        if (s == 0 && m ==0)
        {
            m = 60;
            h--;
        }
        if (s == 0)
        {
            s = 60;
            m--;
        }
        system("cls");
        cout<<h<<":"<<m<<":"<<s--;
        Sleep(1000);
    }
}