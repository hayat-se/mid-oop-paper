#include<iostream>
using namespace std;

class Laptop
{
    string S_card , g_card , processer;
    int HD_capacity , ramCapacity;

    public:

    void setS_card(string sName){
        S_card = sName;
    }
    void setG_card(string gName){
        g_card = gName;
    }
    void setProcessor(string prc){
        processer = prc;
    }
    void setHdCapacity(int cp){
        HD_capacity = cp;
    }
    void setRamCapacity(int cp)
    {
        ramCapacity = cp;
    }
    string getS_Card(){
        return S_card;
    }
    string getG_Card(){
        return g_card;
    }
    string getProcesssor(){
        return processer;
    }
    int getHdCapacity(){
        return HD_capacity;
    }
    int getRamCapacity(){
        return ramCapacity;
    }
};

int findObject(int ramSize , Laptop laptop[3])
{
    for(int i=0 ; i<3 ; i++)
    {
        if(ramSize == laptop[i].getRamCapacity())
        {
            return i+1;
        }else
        {
            return 0;
        }
    }
}


int main()
{
    Laptop laptops[3];
    for(int i=0 ; i<3 ; i++)
    {
        string sName , gName , Prsr;
        int Hd_cap,ram_cap;
        cout<<"Enter Sound Card Company Name : ";
        cin>>sName;
        cout<<"Enter Graphic Card Company Name : ";
        cin>>gName;
        cout<<"Enter Processor Company Name : ";
        cin>>Prsr;
        cout<<"Enter Hard Drive Capacity : ";
        cin>>Hd_cap;
        cout<<"Enter Ram Capacity : ";
        cin>>ram_cap; 
        laptops[i].setS_card(sName);
        laptops[i].setG_card(gName);
        laptops[i].setProcessor(Prsr);
        laptops[i].setHdCapacity(Hd_cap);
        laptops[i].setRamCapacity(ram_cap);
    }

    // for(int i=0 ; i<2 ; i++)
    // {
    //     cout<<"Sound Card Company Name :"<<laptops[i].getS_Card() <<endl;
    //     cout<<"Graphic Card Company Name :"<<laptops[i].getG_Card() <<endl;
    //     cout<<"Processor Company Name :"<<laptops[i].getProcesssor() <<endl;
    //     cout<<"Hard Drive Capacity :"<<laptops[i].getHdCapacity() <<endl;
    //     cout<<"Ram capacity:"<<laptops[i].getRamCapacity() <<endl;
    // }

    int ramFind;
    cout<<"Enter Ram to compare : ";
    cin>>ramFind ;
    if(findObject(ramFind , laptops) >= 1)
    {
        cout<<"Object finded : \n";
        cout<<"The Number of Laptop is : "<<findObject(ramFind , laptops);
    }else{
        cout<<"Laptop not found \n";
    }
}