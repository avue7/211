#ifndef CUST_H
#define CUST_H
#include <iostream>
using namespace std;

class Cust
{
    public:
        Cust(string name, bool robber, int arrival_time, int num_items);
        void print(ostream &os);
        bool isRobber(bool robber);
        
        bool get_isRobber()
        {return is_robber;}
    private:
        string m_name;
        bool is_robber;
        int m_arrival_time;
        int m_num_items;
};

#endif