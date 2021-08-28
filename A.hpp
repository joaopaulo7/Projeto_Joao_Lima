#include <cstdio>

class A{
	private:
		int A1;
		float A2;
    
    public:
        int getA1(){
            return this->A1;
        }
        float getA2(){
            return this->A2;
        }
        
        
        void setA1(int a){
            this->A1 = a;
        }
        void setA2(float a){
           this->A2 = a;
        }
        
        
        void MA1(){
            printf("MA1\n");
        }
        
        void MA2(){
            printf("MA2\n");
        }
};
