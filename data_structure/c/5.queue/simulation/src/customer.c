#include <stdio.h>
#include <stdlib.h>

#include "customer.h"
#include "TypeCQueue.h"
#include "random.h"

// generator
customer* new_customer(int id, int arrival_time, int service_time)
{
// allocate new customer* object    
    customer* newCustomer=(customer*)malloc(sizeof(customer));
    
// copy object variables
    newCustomer->id=id;
    newCustomer->arrival_time=arrival_time;
    newCustomer->service_time=service_time;

    return newCustomer;
    
}

void delete_customer(customer* c)
{
    
    free(c);
    
}

int is_new_customer(int clock)
{
    
    int randnum=getrandom(0,10,clock);
    
    return randnum<3;
}
