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

#include <bits/stdc++.h>
using namespace std;

class student{
public:

    //constructor
    student(){
    
        cout<<"Hello! Students"<<endl;
        
    }
    //constructor overloading
    //In c++ , defined as Having multiple constructor with same class name but with different parameterised.
    //parameterised constructor
    student(string name,int num){
        this->name = name;
        this->num = num;
        
    }
    student(int c,int d){
        cl1 = c;
        cl2 = d;
        cout<<cl1<<cl2<<endl;
    }
    
    string name;
    int num;
    int cl1;
    int cl2;
    
    //getter
    void getdetail(){
        cout<<"name : "<<name<<"age : "<<num<<endl;
    }
    
    class person{
    public:    
        string name1;
        int age1;
        
        
    };
    
    class student1 : public person{
    public:
        void getinfo(){
            cout<<"name: "<<name1<<"age"<<age<<endl;
        }
    };
    
    
};


int main() {
	// your code goes here
	student s1("arijeet",19);
	s1.getdetail();
	student s2(4,5);
	//copy constructor
	student s3(s1);
	s3.getdetail();
	
	student1 su1;
	su1.name1 = "Yash";
	su1.age1 = 19;
	su1.getinfo();
	
	
	return 0;

}

