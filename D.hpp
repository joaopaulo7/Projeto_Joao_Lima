#include <cstdio>

class D{
	private:
		int D1;
		int D2;
    
    public:
        int getD1(){
            return this->D1;
        }
        int getD2(){
            return this->D2;
        }
        
        
        void setD1(int d){
            this->D1 = d;
        }
        void setD2(int d){
           this->D2 = d;
        }
        
        
        void MD1(){
            printf("MD1\n");
        }
        
        void MD2(){
            printf("MD2\n");
        }
};
