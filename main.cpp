#include <iostream>
#include <conio.h>
#include <windows.h>
#include <clocale>
using namespace std;
int i;
char code;
char answer;
int main()
{
cout<<"microsoft killer ver 1.3.3.7"<<endl;
cout<<"please stand by"<<endl;
for ( i == 0 ; i<=100 ; i++){
      Sleep(1000);
    cout<<i<<"%"<<endl;
};
cout<<"enter terminated code (t)"<<endl;
cin>>code;
switch(code){
    case 'n':
        cout<<"blet nevelny destroy the system "<<endl;
cout<<"Corp of evil win again"<<endl;
        cout<<"Thank you"<<endl;
        cout<<"Your : Bill Gates xoxo"<<endl;
    break;
case 't':
     cout<<"Do you really want destroy microsoft?"<<endl;
     break;
     }
     if (code=='t'){
     cout<<"(y/n)"<<endl;
     cin>>answer;
     switch (answer){
 case 'y' :
    {
        for (i = 0; i<=100; i++){
          cout<<i<<'%'<<endl;
           cout<<'\a';
            Sleep(1000);
        }
        while (1){
           cout<<"microsoft was terminated"<<endl;
            Sleep(1000);
        }
       break;
    }
 case 'n' :
    {
        cout<<"Corp of evil win again"<<endl;
        cout<<"Thank you"<<endl;
        cout<<"Your : Bill Gates xoxo"<<endl;
        break;
    }
}
     }else {
     };
setlocale (0,"");
}
