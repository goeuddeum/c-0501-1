#include <iostream>
using namespace std;
#if 0
class Cat
{
    public:
    Cat(int age):itsAge(age){HowManyCats++;}
    virtual~Cat(){HowManyCats--;}
    virtual int GetAge(){return itsAge;}
    virtual void SetAge(int age){itsAge=age;}
    static int HowManyCats;
    private:
    int itsAge;
};
int Cat::HowManyCats=0;
int main()
{
    const int MaxCats=5;int i;
    Cat*CatHouse[MaxCats];
    for(i=0;i<MaxCats;i++)
    CatHouse[i]=new Cat(i);
    for(i=0;i<MaxCats;i++)
    {
        cout<<"There are";
        cout<<Cat::HowManyCats;
        cout<<"cats left\n";
        cout<<"Deleting the one which is ";
        cout<<CatHouse[i]->GetAge();
        cout<<"years old\n";
        delete CatHouse[i];
        CatHouse[i]=0;
    }
    return 0;
}
#endif
#if 0
class Cat
{
    public:
    Cat(int age):itsAge(age){HowManyCats++;}
    virtual~Cat(){HowManyCats--;}
    virtual int GetAge(){return itsAge;}
    virtual void SetAge(int age){itsAge=age;}
    static int GetHowMany(){return HowManyCats;}
    private:
    int itsAge;
    static int HowManyCats;
};
int Cat::HowManyCats=0;
void TelepathicFunction();
int main()
{
    const int MaxCats=5;
    Cat*CatHouse[MaxCats];int i;
    for(i=0;i<MaxCats;i++)
{
    CatHouse[i]=new Cat(i);
    TelepathicFunction();
}
for(i=0;i<MaxCats;i++);
return 0;
}
void TelepathicFunction()
{
    cout<<"There are"<<Cat::GetHowMany()<<"cats alive!\n";
}
#endif
#if 1

#endif