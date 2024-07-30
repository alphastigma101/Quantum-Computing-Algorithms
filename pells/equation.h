#pragma once
#ifndef _EQUATION_H_
#define _EQUATION_H_
#define MAX(x,y,d) x + y*std::sqrt(d)



class PellEquation {
    public:
        PellEquation(int d);
        int equation(int x, int y);
        ~PellEquation(); 
    private:
        int d;
    

};

