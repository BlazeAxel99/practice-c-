#include <bits/stdc++.h>
using namespace std;

 class frac{
    private:
	int num,den;

    public:
	frac(int num,int den){
		this->num = num;
		this->den = den;
    
	}
      
    void print(){
		cout<< this->num <<"/"<< this->den<<endl;
	}

	
	void simp(){
        int gcd = 1;
        int n = min(this->num,this->den);
	    for(int i=1;i<=n;i++){
		   if(this->num%i == 0 && this->den%i == 0 ){
			   gcd = i;
		   }
		   
	   }
	   this->num = this->num / gcd;
	   this->den = this->den / gcd;

	}

	
	void add(frac f2){
         int lcm = den * f2.den;
		 int x = lcm/den;
		 int y = lcm/f2.den;

		 int fnum = (num)*x + (y*f2.num);
         num = fnum;
		 den = lcm;
		 simp();
          
	}

	
};





int main() {
	// your code goes here
	frac f1(10,2);
	frac f2(2,4);
	f1.add(f2);
    f1.print();
	f2.print();
	return 0;
}

