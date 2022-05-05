#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fp1,fp2;
    fp1.open("test.txt",ios::in);
    if(!fp1)
    {
        cerr<<"open1 failed"<<endl;
        return 0;
    }
    // fp2.open("test_copy.txt",ios::out);
    // if(!fp2)
    // {   
    //     fp1.close();
    //     cerr<<"open2 failed"<<endl;
    //     return 0;
    // }
    // fp2.close();
    fp2.open("test_copy.txt",ios::out);
    if(!fp2)
    {   
        fp1.close();
        cerr<<"open2 failed"<<endl;
        return 0;
    }
    char x;
    while(fp1>>x)
    {
        fp2<<x;
    }
    fp2<<endl;
    fp1.close();
    fp2.close();
    return 0;    
}