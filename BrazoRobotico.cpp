
#include <stdio.h>
#include <iostream>
using namespace std;
class BrazoRobotico{

    private:

        float x;
        float y;
        float z;
        bool sujetando;

    public:

        BrazoRobotico(){ //BrazoRobotico
            x = 0;
            y = 0;
            z = 0;
            sujetando = false;
        }


        float getX(){
            return x;
        }


        float getY(){
            return y;
        }


        float getZ(){
            return z;
        }


        bool getSujetando(){
            return sujetando;
        }


        void setX(float _x){
            x = _x;
        }


        void setY(float _y){
            y = _y;
        }


        void setZ(float _z){
            z = _z;
        }


        void setSujetando(bool _sujetando){
            sujetando = _sujetando;
        }


        void coger(){
            sujetando = true;
        }


        void soltar(){
            sujetando = false;
        }


        void mover(double _x, double _y, double _z){
            x = _x;
            y = _y;
            z = _z;
        }

};
