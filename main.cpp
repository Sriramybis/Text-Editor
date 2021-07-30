#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <ctime>
#include <sys/types.h>
#include <sys/stat.h>
#include <cerrno>
#include <process.h>

using namespace std;

void welcome(void);

int menu(void);

void TheEnd(void);

void create(void);

void renamefile(void);

void adddata(void);

void viewdata(void);

void filesize(void);

void filedetails(void);

void clearfile(void);

void changefile(void);

void showfile(void);

void copydesk(void);

void deletefile(void);

char filename[30];

int main()
{
    welcome();
    int option;
    menuselection:
    option=menu();
    if(option>=0&&option<12)
    {
    switch(option)
    {
        case 1:
            create();
            goto menuselection;
            break;

        case 2:
            renamefile();
            goto menuselection;
            break;

        case 3:
            adddata();
            goto menuselection;
            break;

        case 4:
            viewdata();
            goto menuselection;
            break;

        case 5:
            filesize();
            goto menuselection;
            break;

        case 6:
            filedetails();
            goto menuselection;
            break;

        case 7:
            clearfile();
            goto menuselection;
            break;

        case 8:
            deletefile();
            goto menuselection;
            break;

        case 9:
            changefile();
            goto menuselection;
            break;

        case 10:
            showfile();
            goto menuselection;
            break;

        case 11:
            copydesk();
            goto menuselection;
            break;

        case 0:
            TheEnd();
            break;
    }
    }
    return 0;
}

void welcome(void)
{
    system("color 4");
	cout<<"\n\n";
	cout<<"  [][][] [][][] []     [][][]\n";
	cout<<"  []       []   []     []\n";
	cout<<"  [][]     []   []     [][]\n";
	cout<<"  []       []   []     [] \n";
	cout<<"  []     [][][] [][][] [][][]\n\n";
	cout<<"  []    []   []   []]  [] [] [][][] []  [] []      []   [][][] [] [][][] []]  []\n";
	cout<<"  []}[]{[] []  [] [][] [] [] []  [] []  [] []    []  []   []   [] []  [] [][] []\n";
	cout<<"  [] [] [] [][][] [] [][] [] [][][] []  [] []    [][][]   []   [] []  [] [] [][]\n";
	cout<<"  []    [] []  [] []  []] [] []     []  [] []    []  []   []   [] []  [] []  []]\n";
	cout<<"  []    [] []  [] []   [] [] []     [][][] [][[] []  []   []   [] [][][] []   []\n\n";

	cout<<"\n\n\t\t       Done by: MYTHILI SEKAR SRIRAM \n\n\n\n\n\n\n";
	system("pause");
	system("cls");
}

int menu(void)
{
    int o;
    menustart:
    system("color 3");
    system("cls");
	 cout << endl<<endl<<endl;
	 cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
     cout << "          x   SIMPLE  FILE  MANIPULATION    x" << endl;
     cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
     cout << "          x [1] - Create a file             x" << endl;
     cout << "          x [2] - Rename a file             x" << endl;
     cout << "          x [3] - Add data to file          x" << endl;
     cout << "          x [4] - View file content         x" << endl;
     cout << "          x [5] - Obtain file size          x" << endl;
     cout << "          x [6] - File Details              x" << endl;
     cout << "          x [7] - Clear the file            x" << endl;
     cout << "          x [8] - Delete the file           x" << endl;
     cout << "          x [9] - Choose file to use        x" << endl;
     cout << "          x [10] - Show all files created   x" << endl;
     cout << "          x [11] - Save copy in desktop     x" << endl;
     cout << "          x [0] - Exit Program              x" << endl;
     cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl<<endl;
     cout << "          File In Use: " <<filename << endl<<endl;
     cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
     cout << "\n          Enter Your Choice:	";
     cin>>o;
     if(o>11||o<0) //if Wrong choice in menu
     {
         system("cls");
         system("color 4");
         cout<<"\n\n\n\n\n\n";
         cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
         cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
         cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
         cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
         cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
         cout<<"\t\t\tPlease input a valid number.\n";
         cout<<"\t\t\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";
         system("pause");
         system("cls");
         goto menustart;
     }
     return(o);
}

void TheEnd(void)
{
    system("color 0");
     	system("cls");
        cout<<"\n\n";
        cout<<"[][][] [][][] [][][] [][][] [][][]    []    []    []\n";
        cout<<"[]  [] []  [] []  [] []     []  []  []  []  [][][][]\n";
        cout<<"[][][] [][][] []  [] [] []  [][][] [][][][] [] [] []\n";
        cout<<"[]     [] []  []  [] []  [] [] []  []    [] []    []\n";
        cout<<"[]     []  [] [][][] [][][] []  [] []    [] []    []\n\n";

        cout<<"[][][] [][][]     [][][] []     [][][] [][][] [][][] []   [] [][][]\n";
        cout<<"  []   []         []  [] []     []  [] []       []   []]  [] []\n";
        cout<<"  []   [][][]     []     []     []  [] [][][]   []   [][] [] [] []\n";
        cout<<"  []       []     []  [] []     []  []     []   []   [] [][] []  []\n";
        cout<<"[][][] [][][]     [][][] [][][] [][][] [][][] [][][] []  [[] [][][]\n\n";

        cout<<"[][][]  []     [] [][][]   [] [] []\n";
        cout<<"[]   []  []  []   []       [] [] []\n";
        cout<<"[]  []     []     [][][]   [] [] []\n";
        cout<<"[]   []    []     []\n";
        cout<<"[][][]     []     [][][]   [] [] []\n\n";
 		system("pause");
}

void create(void)
{
    int x=1;
    system("cls");
    createfile:
    system("color 2");
    cout << "" << endl<< endl<< endl;
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
    cout << "        w  ENTER THE NAME OF FILE  w\n" ;	//save a string
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
    cout << "        HERE: ";
    if(x==1)
    {cin.ignore();}
    cin.getline(filename,30);
    cout << "" << endl<< endl<< endl;
    ifstream fi;
    fi.open(filename,ios::in);
    if(fi)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tFile name has been taken.\n";
        cout<<"\t\t\tPress any key to choose another name.\n\n\n\n\n\n\n";
        fi.close();
        x=0;
        system("pause");
        system("cls");
        goto createfile;
    }
    fi.close();
    system("pause");
    system("cls");
    string textToSave;
    cout << "        wwwwwwwwwwwwwwwwwwwwwww" << endl;
    cout << "        w  ENTER THE STRINGS w\n" ;	//save a string
    cout << "        wwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
    cout << "        HERE: ";
    getline(cin,textToSave);
    ofstream saveFile (filename);
    saveFile << textToSave;
    cout << "" ;
    cout<<endl<< endl<< endl<< endl<< endl<< endl;
    saveFile.close();
    system("pause");
    system("cls");
    ofstream fsf;
    fsf.open("namesheet.TXT",ios::app);
    fsf<<filename<<" ";
    fsf.close();
}

void renamefile(void)
{
    int cap=1;
    if(strcmp(filename,"")==0)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tNo file has file has been selected.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Choose preexisting file \n";
        cout<<"\t\t\t2)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        int t;
        cin>>t;
        rnerror:
        switch(t)
        {
        case 1:
            changefile();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Rename The File\n\n\n";
            system("pause");
            break;
        case 2:
            cap=0;
            break;
        default:
            system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tIncorrect option number, please re-enter.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Choose preexisting file \n";
        cout<<"\t\t\t2)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        cin>>t;
        goto rnerror;
        break;
        }
    }
    if(cap==1)
    {
    char rname1[30];
    strcpy(rname1,filename);
    newfilename:
       system("cls");
       system("color 3");
       cout << "" << endl<< endl<< endl;
       cout << "        wwwwwwwwwwwwwwwwwwwwww" << endl;
       cout << "        w  ENTER A NEW NAME  w\n" ;	//save a string
       cout << "        wwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
       cout << "        HERE: ";
    char rname2[30];
    cin.sync();
    cin.getline(rname2,30);
    ifstream fil;
    strcpy(filename,rname2);
    fil.open(filename,ios::in);
    if(fil)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tFile name has been taken.\n";
        cout<<"\t\t\tPress any key to choose another name.\n\n\n\n\n\n\n";
        fil.close();
        system("pause");
        system("cls");
        goto newfilename;
    }
    fil.close();
    strcpy(filename,rname1);
    rename(filename,rname2);
    strcpy(filename,rname2);
    ofstream fo;
    ifstream fsf;
    fsf.open("namesheet.TXT",ios::in);
    fo.open("temp.TXT",ios::app);
    while(!fsf.eof())
    {
        char ch[500];
        fsf.getline(ch,500,' ');
        if(strcmp(ch,"")==0)
        {
            break;
        }
        if(strcmp(ch,rname1)==0)
        {
            fo<<rname2<<" ";
        }
        else
        {
            fo<<ch<<" ";
        }
    }
    fsf.close();
    fo.close();
    std::remove("namesheet.TXT");
    std::rename("temp.TXT","namesheet.TXT");
    }
}

void adddata(void)
{
    int cap=1;
    if(strcmp(filename,"")==0)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tNo file has file has been selected.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Create a file \n";
        cout<<"\t\t\t2)Choose preexisting file \n";
        cout<<"\t\t\t3)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        int t;
        cin>>t;
        adderror:
        switch(t)
        {
        case 1:
            create();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Add Data\n\n\n";
            system("pause");
            break;
        case 2:
            changefile();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Add Data\n\n\n";
            system("pause");
            break;
        case 3:
            cap=0;
            break;
        default:
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tIncorrect option number, please re-enter.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Create a file \n";
        cout<<"\t\t\t2)Choose preexisting file \n";
        cout<<"\t\t\t3)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        cin.ignore();
        cin>>t;
        goto adderror;
        break;
        }
    }
    if(cap==1)
    {
    system("cls");
    ofstream addinfo;
    addinfo.open(filename,ios::app);
    cout << "" << endl<< endl<< endl;
    cout << "        wwwwwwwwwwwwwwwwwwwwww" << endl;
    cout << "        w  ENTER DATA TO ADD w\n" ;	//Add data to string
    cout << "        wwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
    cout << "        HERE: ";
    char nline[40];
    cin.ignore();
    cin.getline(nline,40);
    addinfo<<nline;
    addinfo.close();
    system("color 0");
    system("cls");
    cout << "\n\n\n\n";
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
    cout << "        x      DATA SUCCESSFULLY ADDED    x\n" ;
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
    system("pause");
    system("cls");
    }
}

void viewdata(void)
{
    int cap=1;
    if(strcmp(filename,"")==0)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tNo file has file has been selected.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Create a file \n";
        cout<<"\t\t\t2)Choose preexisting file \n";
        cout<<"\t\t\t3)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        int t;
        cin>>t;
        vderror:
        switch(t)
        {
        case 1:
            create();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to View Data stored in file\n\n\n";
            system("pause");
            break;
        case 2:
            changefile();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to View Data stored in file\n\n\n";
            system("pause");
            break;
        case 3:
            cap=0;
            break;
        default:
            system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tIncorrect option number, please re-enter.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Create a file \n";
        cout<<"\t\t\t2)Choose preexisting file \n";
        cout<<"\t\t\t3)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        cin>>t;
        goto vderror;
        break;
        }
    }
    if(cap==1)
    {
    system("color 3");
    system("cls");
    ifstream loadFile;
    loadFile.open (filename, ios::in);					//View file content
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
    cout << "        w     THE FILE CONTAINS THE STRING     w\n" ;
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
    cout << "        ";
    while (loadFile.good())
    {
        cout << (char) loadFile.get();
    }
    cout << "" << endl<< endl<< endl<< endl<< endl<< endl;
    loadFile.close();
    system("pause");
    system("cls");
    }
}

void filesize(void)
{
    int cap=1;
    if(strcmp(filename,"")==0)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tNo file has file has been selected.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Create a file \n";
        cout<<"\t\t\t2)Choose preexisting file \n";
        cout<<"\t\t\t3)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        int t;
        cin>>t;
        fserror:
        switch(t)
        {
        case 1:
            create();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Calculate File Size\n\n\n";
            system("pause");
            break;
        case 2:
            changefile();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Calculate File Size\n\n\n";
            system("pause");
            break;
        case 3:
            cap=0;
            break;
        default:
            system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tIncorrect option number, please re-enter.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Create a file \n";
        cout<<"\t\t\t2)Choose preexisting file \n";
        cout<<"\t\t\t3)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        cin>>t;
        goto fserror;
        break;
        }
    }
    if(cap==1)
    {
    system("cls");
    streampos begin,end;
    ifstream myfile (filename, ios::binary);							//Obtain file size
    begin = myfile.tellg();
    myfile.seekg (0, ios::end);
    end = myfile.tellg();
    myfile.close();
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
    cout << "        x            THE FILE SIZE IS          x\n" ;
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
    cout << "\n\n\n\t\t\t";
    cout << (end-begin) << " bytes.\n";
    cout << "" << endl<< endl<< endl<< endl<< endl;
    system("pause");
    system("cls");
    }
}

void filedetails(void)
{
    int cap=1;
    if(strcmp(filename,"")==0)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tNo file has file has been selected.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Create a file \n";
        cout<<"\t\t\t2)Choose preexisting file \n";
        cout<<"\t\t\t3)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        int t;
        cin>>t;
        fderror:        switch(t)
        {
        case 1:
            create();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Display File Details\n\n\n";
            system("pause");
            break;
        case 2:
            changefile();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Display File Details\n\n\n";
            system("pause");
            break;
        case 3:
            cap=0;
            break;
        default:
            system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tIncorrect option number, please re-enter.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Create a file \n";
        cout<<"\t\t\t2)Choose preexisting file \n";
        cout<<"\t\t\t3)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        cin.ignore();
        cin>>t;
        goto fderror;
            break;
        }
    }
    if(cap==1)
    {
    system("cls");
   		struct stat fileInfo;

   		if (stat(filename, &fileInfo) != 0) {  // Use stat( ) to get the info
   		  system("color 04");
   		  cout << "\n\n\n\n\n\n\n";
	   	  cout << "        wwwwwwwwwwwwwwwwww" << endl;
          cout << "        x      ERROR     x\n" ;
          cout << "        wwwwwwwwwwwwwwwwww\n\n" << endl;
          cout << "        ";
          exit(EXIT_SUCCESS);
	      cout << "\n\n\n\n\n\n\n";
   		}

		system("color 0");
		cout << "     wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
   		cout << "     x  Size               : " << fileInfo.st_size <<"  bytes"<<'\n';     // Size in bytes
   		cout << "     x  Name of file       : " << filename<<'\n';                          // Name of file
   		cout << "     x  Drive letter saved : " << (char)(fileInfo.st_dev + 'A') << '\n';  // Device number
   		cout << "     x  Created            : " << std::ctime(&fileInfo.st_ctime);         // Creation time
   		cout << "     x  Modified           : " << std::ctime(&fileInfo.st_mtime);         // Last mod time
   		cout << "     wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
  		cout << "\n\n\n";
  		system("pause");
 		system("cls");
    }
}

void clearfile(void)
{
    int cap=1;
    if(strcmp(filename,"")==0)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tNo file has file has been selected.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Choose preexisting file \n";
        cout<<"\t\t\t2)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        int t;
        cin>>t;
        cferror:
        switch(t)
        {
        case 1:
            changefile();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Clear File Content\n\n\n";
            system("pause");
            break;
        case 2:
            cap=0;
            break;
        default:
            system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tIncorrect option number, please re-enter.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Choose preexisting file \n";
        cout<<"\t\t\t2)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        cin>>t;
        goto cferror;
            break;
        }
    }
    if(cap==1)
    {
    system("cls");
    system("color 0");
     	system("cls");
 		std::ofstream ofs (filename, std::ios::out | std::ios::trunc); // clear contents of the file
		cout << "\n\n\n\n";
 		cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
        cout << "        x      FILE SUCCESSFULLY CLEARED       x\n" ;
        cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
 		system("pause");
 		system("cls");
    }
}

void deletefile(void)
{
    int cap=1;
    if(strcmp(filename,"")==0)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tNo file has file has been selected.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Choose preexisting file \n";
        cout<<"\t\t\t2)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        int t;
        cin>>t;
        dferror:
        switch(t)
        {
        case 1:
            changefile();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Delete a file\n\n\n";
            system("pause");
            break;
        case 2:
            cap=0;
            break;
        default:
            system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tIncorrect option number, please re-enter.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Choose preexisting file \n";
        cout<<"\t\t\t2)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        cin>>t;
        goto dferror;
            break;
        }
    }
    char rname1[30];
    strcpy(rname1,filename);
    if(cap==1)
    {
    system("color 3");
     	system("cls");
    	std::remove(filename); 									//Delete the file
    	cout << "\n\n\n\n";
 		cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
        cout << "        x      FILE SUCCESSFULLY REMOVED    x\n" ;
        cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
 		system("pause");
 		system("cls");
 		strcpy(filename,"");
    }
    ofstream fo;
    ifstream fsf;
    fsf.open("namesheet.TXT",ios::in);
    fo.open("temp.TXT",ios::app);
    while(!fsf.eof())
    {
        char ch[500];
        fsf.getline(ch,500,' ');
        if(strcmp(ch,"")==0)
        {
            break;
        }
        if(strcmp(ch,rname1)==0);
        else
        {
            fo<<ch<<" ";
        }
    }
    fsf.close();
    fo.close();
    std::remove("namesheet.TXT");
    std::rename("temp.TXT","namesheet.TXT");
}

void changefile(void)
{
    int y=0;
    cfile:
    system("cls");
       system("color 3");
       cout << "" << endl<< endl<< endl;
       cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       cout << "        w  ENTER THE NAME OF THE FILE YOU WANT TO USE   w\n" ;	//save a string
       cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
       cout << "        HERE: ";
       char rname1[30];
       if(y==0)
          {cin.ignore();}
       cin.getline(rname1,30);
       strcpy(filename,rname1);
       ifstream fi;
       fi.open(filename,ios::in);
      if(!fi)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tFile name can not be found.\n";
        cout<<"\t\t\tPress any key to choose another name.\n\n\n\n\n\n\n";
        y=1;
        system("pause");
        system("cls");
        fi.close();
        goto cfile;
    }
    fi.close();
    system("color 0");
     	system("cls");
    	cout << "\n\n\n\n";
 		cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
        cout << "        x      FILE SUCCESSFULLY CHOSEN    x\n" ;
        cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
 		system("pause");
 		system("cls");
}

void showfile(void)
{
    system("cls");
    ifstream fsf;
    fsf.open("namesheet.TXT",ios::in);
    char ch[500];
    cout<<endl<<endl<<endl<<endl;
    int a=1;
    system("cls");
    cout << "\n\n\n\n";
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwww" << endl;
    cout << "        x      File Database    x\n" ;
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwww\n" << endl;
    while(!fsf.eof())
    {
        fsf.getline(ch,500,' ');
        if(strcmp(ch,"")==0)
        {
            break;
        }
        cout<<"\t"<<a<<")"<<ch<<endl;
        a++;
    }
    cout<<endl<<endl<<endl;
    fsf.close();
    system("pause");
}

void copydesk(void)
{
    int cap=1;
    if(strcmp(filename,"")==0)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tNo file has file has been selected.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Choose preexisting file \n";
        cout<<"\t\t\t2)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        int t;
        cin>>t;
        cderror:
        switch(t)
        {
        case 1:
            changefile();
            cout<<"\n\n\n\n\n\n\t\t\tNow proceeding to Creating a copy in desktop\n\n\n";
            system("pause");
            break;
        case 2:
            cap=0;
            break;
        default:
            system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tIncorrect option number, please re-enter.\n\n\n\n\n";
        cout<<"\t\t\tChoose an option to proceed: \n";
        cout<<"\t\t\t1)Choose preexisting file \n";
        cout<<"\t\t\t2)Return to menu \n\n\n";
        cout<<"\t\t\tOption: ";
        cin>>t;
        goto cderror;
            break;
        }
    }
    char rname1[30];
    strcpy(rname1,filename);
    if(cap==1)
    {
    char fname[30];
    char ch[30];
    system("cls");
    createfile:
    system("color 2");
    cout << "" << endl<< endl<< endl;
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
    cout << "        w  ENTER THE NAME OF FILE'S COPY w\n" ;	//save a string
    cout << "        wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n\n" << endl;
    cout << "        HERE: ";
    cin.sync();
    cin.getline(fname,30);
    strcpy(ch,"C:\\Users\\Admin\\Desktop\\");
    strcat(ch,fname);
    ifstream fi;
    fi.open(ch,ios::in);
    if(fi)
    {
        system("cls");
        system("color 4");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t[][][] [][][] [][][] [][][] [][][]\n";
        cout<<"\t\t\t[]     []  [] []  [] []  [] []  []\n";
        cout<<"\t\t\t[][][] [][][] [][][] []  [] [][][]\n";
        cout<<"\t\t\t[]     [] []  [] []  []  [] [] []\n";
        cout<<"\t\t\t[][][] []  [] []  [] [][][] []  []\n\n";
        cout<<"\t\t\tFile name has been taken.\n";
        cout<<"\t\t\tPress any key to choose another name.\n\n\n\n\n\n\n";
        fi.close();
        system("pause");
        system("cls");
        goto createfile;
    }
    char content[500];
    fi.close();
    system("pause");
    system("cls");
    ifstream fsf;
    fsf.open(filename,ios::in);
    ofstream saveFile;
    saveFile.open(ch,ios::app);
    while(!fsf.eof())
    {
        fsf.getline(content,500,' ');
        if(strcmp(content," ")==0)
            break;
        saveFile<<content<<" ";
    }
    cout << "" ;
    cout<<endl<< endl<< endl<< endl<< endl<< endl;
    saveFile.close();
    fsf.close();
    ofstream fs;
    fs.open("namesheet.TXT",ios::app);
    fs<<ch<<" ";
    fs.close();
    }
}
