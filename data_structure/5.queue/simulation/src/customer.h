#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

#define element customer
typedef struct
{
    int id;
    int arrival_time;
    int service_time;
} customer;


// make new customer object
customer* new_customer(int id, int arrival_time, int service_time);
// remove customer object
void delete_customer(customer* c);
// check new customers come
int is_new_customer(int clock);

#endif