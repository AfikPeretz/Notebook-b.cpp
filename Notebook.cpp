#include "Notebook.hpp"

namespace ariel {
    Notebook::Notebook(unsigned int page, unsigned int column, unsigned int row) {
        this->x=row;
        this->y=column;
        for(unsigned int i = 0; i<page; i++){
            for(unsigned int j = 0; j<column; j++){
                for(unsigned int k = 0; k<row; k++){
                    notebook[make_tuple(page,column,row)] = '_';
                }
            }
        }
    }

    Notebook::Notebook(){

    }
    Notebook::~Notebook(){
        
    }


    void Notebook::write (unsigned int page, unsigned int column, unsigned int row, Direction direction, string text){
        if (notebook[make_tuple(page,column,row)] != '_'){
            throw std::invalid_argument ("ERROR: Another character already appears in the place or has appeared and deleted");
        }
        for (size_t i = 0; i < text.length(); i++){
            if(Direction::Horizontal==direction){
                if (row + text.length() > 99){
                    for(unsigned int j = row; j<(99-row); j++ ){
                        notebook[make_tuple(page,column,row)] = text.at(j);
                        column++;
                    }
                    for(unsigned int j = 0; j<text.length()-(99-row); j++ ){
                        notebook[make_tuple(page,column,row)] = text.at(j+(99-row));
                        column++;
                    }
                    return;
                }
                else{
                    notebook[make_tuple(page,column,row)] = text.at(i);
                    column++;
                }
            }
            else{
                notebook[make_tuple(page,column,row)] = text.at(i);
                row++;
            }
        }
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
        for (size_t i = 0; i < x; i++){
            for (size_t j = 0; j <y; i++){
                cout <<read(page,j,i,Direction::Horizontal,x) << endl;;
            }
        }
    }
};