#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#include <time.h>
#include <math.h>

void angle(){
    short hr,h;
    short mi,m;
    float g,degre;
    printf("enter clock 12:00 \n");
    printf("the angle between the minutes hand and the hour hand for two face\n");
    //one of the face outside angle..
    printf("enter hour: ");
    scanf("%d",&hr);
    h=(12-hr);
    printf("enter minutes: ");
    scanf("%d",&mi);
    m=60-(60-mi);
    switch (m)
    {
        case 0:g=(h-(0/60))+(12-0);
                break;
        case 1:g=(h-(1/60))+(12-(12-0.1));
                break;
        case 2:g=(h-(2/60))+(12-(12-0.2));
                break;
        case 3:g=(h-(3/60))+(12-(12-0.3));
                break;
        case 4:g=(h-(4/60))+(12-(12-0.4));
                break;
        case 5:g=(h-(5/60))+(12-(12-1));
                break;
        case 6:g=(h-(6/60))+(12-(12-1.1));
                break;
        case 7:g=(h-(7/60))+(12-(12-1.2));
                break;
        case 8:g=(h-(8/60))+(12-(12-1.3));
                break;
        case 9:g=(h-(9/60))+(12-(12-1.4));
                break;
        case 10:g=(h-(10/60))+(12-(12-2));
                break;
        case 11:g=(h-(11/60))+(12-(12-2.1));
                break;
        case 12:g=(h-(12/60))+(12-(12-2.2));
                break;
        case 13:g=(h-(13/60))+(12-(12-2.3));
                break;
        case 14:g=(h-(14/60))+(12-(12-2.4));
                break;
        case 15:g=(h-0.25)+((12-3));
                break;
        case 16:g=(h-(16/60))+(12-(12-3.1));
                break;
        case 17:g=(h-(17/60))+(12-(12-3.2));
                break;
        case 18:g=(h-(18/60))+(12-(12-3.3));
                break;
        case 19:g=(h-(19/60))+(12-(12-3.4));
                break;
        case 20:g=(h-(20/60))+(12-(12-4));
                break;
        case 21:g=(h-(21/60))+(12-(12-4.1));
                break;
        case 22:g=(h-(22/60))+(12-(12-4.2));
                break;
        case 23:g=(h-(23/60))+(12-(12-4.3));
                break;
        case 24:g=(h-(24/60))+(12-(12-4.4));
                break;
        case 25:g=(h-(25/60))+(12-(12-5));
                break;
        case 26:g=(h-(26/60))+(12-(12-5.1));
                break;
        case 27:g=(h-(27/60))+(12-(12-5.2));
                break;
        case 28:g=(h-(28/60))+(12-(12-5.3));
                break;
        case 29:g=(h-(29/60))+(12-(12-5.4));
                break;
        case 30:g=(h-0.5)+(12-6);
                break;
        case 31:g=(h-(31/60))+(12-(12-6.1));
                break;
        case 32:g=(h-(32/60))+(12-(12-6.2));
                break;
        case 33:g=(h-(33/60))+(12-(12-6.3));
                break;
        case 34:g=(h-(34/60))+(12-(12-6.4));
                break;
        case 35:g=(h-(35/60))+(12-(12-7));
                break;
        case 36:g=(h-(36/60))+(12-(12-7.1));
                break;
        case 37:g=(h-(37/60))+(12-(12-7.2));
                break;
        case 38:g=(h-(38/60))+(12-(12-7.3));
                break;
        case 39:g=(h-(39/60))+(12-(12-7.4));
                break;
        case 40:g=(h-(30/60))+(12-(12-8));
                break;
        case 41:g=(h-(41/60))+(12-(12-8.1));
                break;
        case 42:g=(h-(42/60))+(12-(12-8.2));
                break;
        case 43:g=(h-(43/60))+(12-(12-8.3));
                break;
        case 44:g=(h-(44/60))+(12-(12-8.4));
                break;
        case 45:g=(h-0.75)+(12-9);
                break;
        case 46:g=(h-(46/60))+(12-(12-9.1));
                break;
        case 47:g=(h-(47/60))+(12-(12-9.2));
                break;
        case 48:g=(h-(48/60))+(12-(12-9.3));
                break;
        case 49:g=(h-(49/60))+(12-(12-9.4));
                break;
        case 50:g=(h-(50/60))+(12-(12-10));
                break;
        case 51:g=(h-(51/60))+(12-(12-10.1));
                break;
        case 52:g=(h-(52/60))+(12-(12-10.2));
                break;
        case 53:g=(h-(53/60))+(12-(12-10.3));
                break;
        case 54:g=(h-(54/60))+(12-(12-10.4));
                break;
        case 55:g=(h-(55/60))+(12-(12-11));
                break;
        case 56:g=(h-(556/60))+(12-(12-11.1));
                break;
        case 57:g=(h-(57/60))+(12-(12-11.2));
                break;
        case 58:g=(h-(58/60))+(12-(12-11.3));
                break;
        case 59:g=(h-(59/60))+(12-(12-11.4));
                break;
        case 60:g=(h-0.60)+(12-(12-12));
                break;
        default:break;
    }
    printf("gggggggg:%f\n",g);
    degre=g*30;
    if(degre > 360){
        degre=degre-360;
    }
    printf("minute:%d\n",m);
    printf("angles one of face >>>>>>>>>>>>> %2.1f degree\n",degre);
    printf("angle other face >>>>>>>>>>>>> %2.1f degree\n",360-degre);

}
int main()
{

    while(1){
        angle();
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
