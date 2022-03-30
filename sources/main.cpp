#include "Notebook.hpp"
#include <iostream>
#include <math.h>
#include <exception>
#include <algorithm>
#include "Notebook.cpp"
// #include "sources/Notebook.hpp"
// #include "sources/Direction.hpp"





using namespace std;
using namespace ariel;

    int main() {

        // Notebook notebook;

        int page,row,colum;
    //     cout<<"To create a notebook please choose the num of page :"<<endl;
    //     cin>>page;
    //     cout<<"Please choose the num of rows :"<<endl;
    //     cin>>row;
    //     cout<<"Please choose the num of colums :"<<endl;
    //     cin>>colum;
    //    // create my nootbook
        // Notebook notebook (page,row,colum);
        // Notebook notebook;
        int x = 1;
        int y = 3;
        int z = 4;
        string input = "elad";
        Notebook note2;
        // notebook.write (x,y,z,Direction::Horizontal,input);   // work
        // notebook.write(0,0,0,Direction::Vertical,"eladgamal");
        // cout<<"finis write"<<endl;
        // cout<<  notebook.read(0,0,0,Direction::Vertical,9)<<endl; 
        // notebook.show(0);
        // for ( int i=100; i<200;i++){
            
        //     note.write(1,i-100,0,Direction::Vertical,"Look at me");
        //     //note.write(1,i-100,2,Direction::Horizontal,"I'm Mr. meeseeks");
        //     // note.read(1,i-100,0,Direction::Vertical,10);
        //     // note.read(1,i-100,2,Direction::Horizontal,16);
            cout<<"imdsaasdasdas";

        // }
        note2.show(1);
        return 0;
	}