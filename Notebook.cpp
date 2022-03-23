#include "Notebook.hpp"
#include "Direction.hpp"
#include <iostream>
#include <stdexcept>
using ariel::Direction;
using namespace std;

namespace ariel {
    void Notebook::write (unsigned int page, unsigned int column, unsigned int row, Direction direction, string text){
        for (size_t i = 0; i < text.length(); i++)
        {
            notebook[make_tuple(page,column,row)] = text.at(i); 
            
            //Check the direction you need to go
            if(Direction::Horizontal==direction){
                column++;
            }
            else{
                row++;    
            }
        }
     cout<< "post" <<endl;
    }
    string Notebook::read (unsigned int page, unsigned int column, unsigned int row, Direction direction, unsigned int numOfChar){
        string msg; 
        char sign='_';
        for (size_t i = 0; i < numOfChar; i++)
        {           
          if(notebook[make_tuple(page,column,row)] > 0){ 
              sign = notebook[make_tuple(page,column,row)];
          }
          else{
                sign='_'; //A place without a signal
            }
            msg+=sign;
            if(Direction::Horizontal==direction){  //Check the direction you need 
                column++;
            }
            else{
                row++; 
            }   
        }       
        return msg;
    }

    void Notebook::erase (unsigned int page, unsigned int column, unsigned int row, Direction direction, unsigned int numOfChar){

    }

    void Notebook::show (unsigned int page){

    }
};