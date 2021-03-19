class Base{
public:
    virtual void disp()=0;   //pure virtual function
};
class D:public Base{
public:
void disp(){
("Derived Class \n");
}
};
int main(){
Base *p;   //We cannot make the abstract class's object,but we can make the abstract class pointer.
D obj;
p=&obj;
(*p).disp();
return 0;
}
