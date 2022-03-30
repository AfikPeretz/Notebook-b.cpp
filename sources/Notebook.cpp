#include "Notebook.hpp"
constexpr int MAX = 5;
constexpr int MAXPAGE = 5000;

namespace ariel{
    // Notebook::Notebook(int page, int column, int row) {
    //     this->x=row;
    //     this->y=column;
    //     for(size_t i = 0; i<page; i++){
    //         for(size_t j = 0; j<column; j++){
    //             for(size_t k = 0; k<row; k++){
    //                 notebook[make_tuple(page,column,row)] = '_';
    //             }
    //         }
    //     }
    // }

    Notebook::Notebook(){
        this->x = 2;

        this->y = MAX;
        this->z = MAX;
        
        for(size_t i = 0; i<x; i++){
            for(size_t j = 0; j<y; j++){
                for(size_t k = 0; k<z; k++){
                    notebook[make_tuple(i,j,k)] = '_';
                }
            }
        }

    }

    void Notebook::write (int page, int column, int row, Direction direction, string text){
        if (notebook[make_tuple(page,column,row)] != '_'){
            throw std::invalid_argument ("ERROR: Another character already appears in the place or has appeared and deleted");
        }
        for (size_t i = 0; i < text.length(); i++){
            notebook[make_tuple(page,column,row)] = text.at(i);
            if(Direction::Horizontal==direction){
                if((unsigned int)column + text.length() > 99){
                    if(i==(99-row)){
                        column = 0;
                        row++;
                    }
                }
                column++;
            }
            else{
                if((unsigned int)row + text.length() > 99){
                    if(i==(99-column)){
                        row = 0;
                        column++;
                    }
                }
                row++;
            }
        }
    }



    string Notebook::read (int page, int column, int row, Direction direction, int numOfChar){
        string msg; 
        char sign = '_';
        for (size_t i = 0; i < numOfChar; i++){     
            sign = notebook[make_tuple(page,column,row)];
            msg+=sign;
            if(Direction::Horizontal==direction){  //Check the direction you need 
                // column++;
                row++; 
            }
            else{
                column++;
                // row++; 
            }   
        }       
        return msg;
    }

    void Notebook::show (int page){
        for (int j = 0; j < 5; j++){
            for (int k = 0; k < 5; j++){
                cout<< j;
                cout<<notebook[make_tuple(page,j,k)];
            }
        }
        return;
    }


    void Notebook::erase (int page, int column, int row, Direction direction, int numOfChar){
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


 
};