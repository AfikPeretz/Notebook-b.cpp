#include "Notebook.hpp"
#include "Direction.hpp"
#include <iostream>
#include <stdexcept>
using ariel::Direction;
using namespace std;

namespace ariel {

    Notebook::Notebook(unsigned int page, unsigned int column, unsigned int row) {
        for(int i = 0; i<page; i++){
            for(int j = 0; j<column; j++){
                for(int k = 0; k<page; k++){
                    notebook[make_tuple(page,column,row)] = '_';
                }
            }
        }
    }

    void Notebook::write (unsigned int page, unsigned int column, unsigned int row, Direction direction, string text){
        if (notebook[make_tuple(page,column,row)] != '_'){
            throw std::invalid_argument ("ERROR: Another character already appears in the place or has appeared and deleted");
        }
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
     cout<< "write" <<endl;
    }


    string Notebook::read (unsigned int page, unsigned int column, unsigned int row, Direction direction, unsigned int numOfChar){
        string msg; 
        char sign='_';
        for (size_t i = 0; i < numOfChar; i++){           
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
        for (size_t i = 0; i < numOfChar; i++){
            notebook[make_tuple(page,column,row)] = '~';
        }
        if(Direction::Horizontal==direction){  //Check the direction you need 
                column++;
            }
        else{
            row++; 
        }
    }

    void Notebook::show (unsigned int page){
        

    }
};