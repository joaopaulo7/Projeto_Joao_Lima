#include <cstdio>

class B{
	private:
		int B1;
		float B2;
    
    public:
        int getB1(){
            return this->B1;
        }
        float getB2(){
            return this->B2;
        }
        
        
        void setB1(int b){
            this->B1 = b;
        }
        void setB2(float b){
           this->B2 = b;
        }
        
        
        void MB1(){
            printf("MB1\n");
        }
        void MB2(){
            printf("MB2\n");
        }
};
