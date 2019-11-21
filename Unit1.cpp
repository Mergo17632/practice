//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <String.h>
#include <iostream.h>
#include "Registry.hpp"
//---------------------------------------------------------------------------
using namespace std;

#pragma argsused
int main(int argc, char* argv[])
{

TStringList* list = new TStringList;
TRegistry *reg = new TRegistry();

reg->RootKey = HKEY_CURRENT_USER;

char *Adress="";
cout<<"NewPar"<<endl;
cin>>Adress;

if(reg->KeyExists(Adress))
        {
        reg->OpenKey(Adress, 0);
        cout<<"folder exists: " <<Adress<<endl;
        }
else
        {
        cout<<"Folder does not exist"<<endl;
        system("pause");
        exit(0);
        }

char*New="";
cout<<"NewName"<<endl;
cin>>New;

reg->OpenKey(Adress,0);

AnsiString test;
reg ->  GetValueNames (list);
reg->WriteString("", New);
reg->CloseKey();

system("pause");
        return 0;
}
//---------------------------------------------------------------------------
