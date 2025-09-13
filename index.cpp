//object oriented programming
#include <bits/stdc++.h>
using namespace std;

class hero{
    
    //properties;
    private:
    int health;
    
    public:
    char level;
    
    void print(){
        cout<<level<<endl;
    }
    
    
    int getHealth(){
        return health;;
    }
    
    char getLevel(){
        return level;
    }
    
    
    void setHealth(int h , char name){
        if(name=='A'){
            health=h;
        }
        else{
            cout<<"Access Denied: name is not A"<<endl;
        }
    
    }
    
    void setLevel(char ch){
        level = ch;
    }
};


//empty class;
class king{
    
};
int main() {
	// your code goes here
	
	//static allocation;
	hero a;
	
	a.setHealth(80,'A');//Both Arguments
	a.setLevel('A');
	cout<<"level is "<<a.level<<endl;
	cout<<"health is"<<a.getHealth()<<endl;
	
	//dynamically allocation;
	
	hero *b = new hero;
	b->setLevel('A');
	b->setHealth(70,'A');
	
	
	
	
	//Two Correct Ways to Access members from pointer:
	cout<<"level is"<<(*b).level<<endl;
	cout<<"health is"<<(*b).getHealth()<<endl;
	
	cout<<"level is"<< b->level<<endl;
	cout<<"health is"<<b->getHealth()<<endl;
	
	
	cout<<"Level of c is"<< c->level<<endl;
	cout<<"health is"<<c->getHealth()<<endl;
	
	delete b; // good practice: free heap memory;
	
	
	
	return 0;

}
