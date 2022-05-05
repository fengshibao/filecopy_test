#include <iostream>
#include <fstream>

using namespace std;

int main()
{   
    ifstream in;
    ofstream out;
    //out.open("test.txt");
    out.open("test.txt",ios::app);
    if( !out )
    {
        cerr<<"open failed"<<endl;
    }
    int i;
    for(i=0;i<10;i++)
    {
        out<<i;
    }
    out << "\n";
    out << '\r';
    out.close();
    in.open("test.txt");
    if(!in)
    {
        cerr<<"open failed"<<endl; 
    }
    char x;
    while(in>>x)
    {
        if(x=='\n'||x=='\r')cout<<"\n";
        else cout<<x;
    }
    in.close();
    return 0;
}

// int main()
// {
//     fstream fp;
//     fp.open("test.txt",ios::out);
//     if(!fp)
//     {
//         cerr<<"open failed"<<endl;
//         return 0;
//     }
//     fp.close();
//     fp.open("test.txt",ios::out|ios::in);
//     if(!fp)
//     {
//         cerr<<"open failed"<<endl;
//         return 0;
//     }
//     int i;
//     for(i=0;i<10;i++)
//     {   
//         fp<<i;
//     }
//     fp<<endl;
//     char x;
//     fp.seekg(ios::beg);
//     while(fp>>x)
//     {
//         cout<<x;
//     }
//     cout<<endl;
//     fp.close();
//     return 0;    
// }