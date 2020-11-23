#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "customer.h"
#include "TypeCQueue.h"
#include "random.h"


int main()
{
    int clock=0;
    int total_customers=0;
    int service_time=0;
    int total_wait=0;
    customer* serving_customer;
    int serving_customer_id=0;
    
    
//  make new queue for new customers
    cqueue* serviceQ=(cqueue*)malloc(sizeof(cqueue));
    init_cQueue(serviceQ);
    
    int customer_id=0;

    while(clock<60)
    {
// 시작시 clock 증가
        clock++;
        printf("====================================\n");
        printf("clock:%d\n",clock);
// 매 clock마다 새로운 손님이 올 수도 있음
        if(is_new_customer(clock))
        {
            
            // 새 손님을 복사해서 큐에 넣는다
            
            serving_customer=new_customer(customer_id,clock,getrandom(1,10,clock));
            enqueue(serviceQ,*serving_customer);
            // printf("new customer(id=%d, arrival_time=%d,service_time=%d)\n",serving_customer->id,serving_customer->arrival_time,serving_customer->service_time);
            
            customer_id++;
        }
// 현재 서비스중인 손님이 없다면
        if(service_time==0)
        {
            // 대기중인 손님도 없다면
            if(is_empty(serviceQ))
            {
                continue;
            }
            total_customers++;
            // 큐에서 새 손님을 빼서 service_time을 갱신한다.
            *serving_customer=dequeue(serviceQ);
            service_time=serving_customer->service_time;
            serving_customer_id=serving_customer->id;
            printf("new customer(id=%d, arrival_time=%d,service_time=%d)\n",serving_customer->id,serving_customer->arrival_time,serving_customer->service_time);
            
            printf("customer %d가 업무처리중입니다.\n",serving_customer->id);
            
               
        }
        // 현재 서비스중인 손님이 있다면
        else
        {
            printf("customer %d가 업무처리중입니다.\n",serving_customer_id);
            // 큐에서 기다리는 고객 수만큼 total_wait을 증가시킨다.
            total_wait+=serviceQ->count;
        }
        service_time--;
    }
    printf("total_customers:%d\ntotal_wait:%d",total_customers,total_wait);
}