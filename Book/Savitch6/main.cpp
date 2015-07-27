#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>//IO Manipulators
#include <cstdlib>//C standard library 
#include <ctime>//C Time library
 
using std::cout;
using std::endl;
 
int main() {
    const char filename[] = "answers.txt";
    std::ifstream in(filename);
    std::string question;
    while(in) {
        cout<<endl<<"Ask your question or type 'quit' to exit program:"<<endl;
        getline(std::cin,question);
        if(question == "quit") break;
        char ch;
        while((in.get(ch))&&(ch!='\n'))
        {
            if(ch=='#')
                cout<<rand()%18+1;
            else
                cout<<ch;
        }
        cout<<endl;
        if(in.eof())
        {
            in.close();
            in.clear();
            in.open(filename);
        }
    }
    if(in)
    {
        return 0;
    }
    else
    {
        std::cerr<<"ERROR: "<<filename<<endl;
        return 1;
    }
}