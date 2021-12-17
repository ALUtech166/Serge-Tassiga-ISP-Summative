/** 
 * Traffic lights similation using
 * pthreads
 * they are 4 direction
 * 3 light: red, green yellow
 *  let say 2 cars from each direction
 *  **/




/** 
 * if green && car1 from sud diretion to going to Nord
 * printf it can move;
 * continue
 * else if green && car2 from East direction to nord
 * printf it can move;
 * continue
 * else 
 * printf it can not move stop!!!;
 * break
 * if red && car3
 * if car1 from Sud direcion is going to
 * 
 * 
 * void main
 * 
 * 
 * 
 *  **/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


pthread_mutex_t locked;
int x;

void *func() {
    // Handling the pthread mutex lock
    pthread_mutex_lock(&locked);
    int i;
    
    while (i < 10 )
    {
        /* code */
        printf("%d", x);
        i++;
    }

    printf("Done...");
    

    // pthread mutex unlock
    pthread_mutex_unlock(&locked);
    

    printf("Multithread in C");
    
}

void main() {

    

    char traffic_light[25];
    char postion[25];
    char move_to[25];
    int car;
   
    

    int error;

    if (pthread_mutex_init(&locked, NULL) != 0)
    {
        /* code */
        printf("Mutex unsucessfull");
        exit(1);
    }
    
    pthread_t th_id;
    for (int i = 0; i < 8; i++)
    {
        /* code */
        pthread_create(&th_id, NULL, func, NULL);
    }

    pthread_join(th_id, NULL);
    
    
   // This Input is letting the Cars whether the Light is Red or Green

    printf("Welcome to Traffic Lights Simulaion, Tell me which color is it at the moment: ");
    scanf("%s", traffic_light);

    //  While the ligh is red

    while (traffic_light == "red")
    {
        /* code */
        printf(" Which Postion are you in: ");
        scanf("%s", postion);
        
        printf(" Which direction are you moving in: ");
        scanf("%s", move_to);

        if ( postion  == "Sud" && move_to == "Nord" || move_to == "East" || move_to == "West") {
            printf(" Stop! You cannot move to that direction\n");
            break;
            pthread_mutex_t lock;     
        }else if ( postion  == "Nord" && move_to == "Sud" || move_to == "West" || move_to == "East")
        {
            /* code */
            printf(" Stop! You cannot move to that direction\n");
            break;
            pthread_mutex_t lock; 

        }else if ( postion  == "West" && move_to == "East" || move_to == "Sud" || move_to == "Nord") {

            /* code */
            printf(" Stop! You cannot move to that direction\n");
            break;
            pthread_mutex_t lock; 
        }else if ( postion  == "East" && move_to == "West" || move_to == "Sud" || move_to == "Nord") {
            
            /* code */
            printf(" Stop! You cannot move to that direction\n");
            break;
            pthread_mutex_t lock; 
        }
        else
        {
            /* code */
            printf("Ouff, Warming impossible input");
            exit(1);
        }
        
    }

    // if the light is green
    while (traffic_light == "green")
    {
        /* code */
        /* code */
        printf(" Which Postion are you in: ");
        scanf("%s", postion);
        
        printf(" Which direction are you moving in: ");
        scanf("%s", move_to);

        if ( postion  == "Sud" && move_to == "Nord" || move_to == "East" || move_to == "West") {
            printf(" You can move from %s to %s\n", postion, move_to);
            pthread_mutex_t unlock;     
        }else if ( postion  == "Nord" && move_to == "Sud" || move_to == "West" || move_to == "East")
        {
            /* code */
            printf(" You can move from %s to %s\n", postion, move_to);
            pthread_mutex_t unlock; 

        }else if ( postion  == "West" && move_to == "East" || move_to == "Sud" || move_to == "Nord") {

            /* code */
            printf(" You can move from %s to %s\n", postion, move_to);
            pthread_mutex_t unlock; 
        }else if ( postion  == "East" && move_to == "West" || postion  == "East" && move_to == "Sud" || postion  == "East" && move_to == "Nord") {
            
            /* code */
            printf(" You can move from %s to %s\n", postion, move_to);
            pthread_mutex_t unlock; 
        }
        else
        {
            /* code */
            printf("Ouff, Warming impossible input");
            exit(1);
        }
        
        
    }

    // else the program should exit

    while (traffic_light != "red" || traffic_light != "green")
    {
        /* code */
        printf("Invalid Input");
        exit(1);
    }
    
    printf("After the Thread \n");
    exit(1);

}