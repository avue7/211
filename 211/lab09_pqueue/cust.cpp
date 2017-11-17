#include "cust.h"
using namespace std;

Cust::Cust(string name, bool robber, int arrival_time, int items)
{
    m_name = name;
    is_robber = robber;
    m_arrival_time = arrival_time;
    m_num_items = items;
}

bool isRobber(bool robber)
{
    if(robber == 1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void Cust::print(ostream &os)
{
    os << m_name;
        if(is_robber)
        {
            os << " robber ";
        }
        else 
        {
            os << " shopper ";
        }
        os << m_arrival_time << " " << m_num_items << endl;
}