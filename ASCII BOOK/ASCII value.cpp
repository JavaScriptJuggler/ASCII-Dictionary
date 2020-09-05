#include<iostream>
#include<fstream>
#include<conio.h> //for TURBO C++
using namespace std;
class ascii_cal{
    public: string path="";
public:
void open_file()
{   system("color 0");
    cout<<"Enter the path for creating dictionary file followed by"<<"( \\ )"<<": ";
    cin>>path;
       ofstream createfile;    //creating object of file creator,output stream
    createfile.open(path+"ASCII dictionary.txt");
    if(!createfile)
    {
    cout<<"Unable to create file.Try again";
    exit(1);    //calling system to exit
    }
    createfile<<"ASCII CODES"<<"\n---------------------------"<<endl;
    for(int i=32;i<=128;i++)
    {
        createfile<<(char)i<<" "<<"="<<" "<<i<<endl;
    }
    createfile.close();
}

};


int main()
{
    ascii_cal obj;   //constructor will be called by default
    obj.open_file();
   // system("color %"); //to know color codes
   // system("color A1"); for backcolor
    system("color C");  //for font color(minGW)
    cout<<"\n\t\tDICTIONARY CREATED...";
    cout<<"\n\t\tYou can find your ASCII DICTIONARY in "<<obj.path+"ASCII dictionary.txt";
    cout<<"\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Thanks for using \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ";
  getch();
    return 0;

}