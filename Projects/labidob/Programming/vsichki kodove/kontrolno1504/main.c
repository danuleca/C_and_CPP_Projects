#include <stdio.h>
#include <string.h>

int isValidSeason(char *season){
    return !strcmp(season, "summer") || !strcmp(season, "spring")
        || !strcmp(season, "autumn") || !strcmp(season, "winter");
}

int getInt(char *prompt, int from, int to)
{
    int i;
    do
    {
        printf("%s",prompt);
        scanf("%d",&i);
    }
    while(i < from || i > to);
    return i;
}

void getSeason(char season[], int n)
{
    do
    {
        printf("Season: ");
        fgets(season, n, stdin);
        char *p = strchr(season,'\n');
        if (p) *p=0;
    }while(!isValidSeason(season));
}

struct Packet
{
    int people;
    char season[10];
    int nights;
};

double discount(struct Packet *packet)
{
    double pricePerNight = (packet->people<=5) ? 5.5 : 4.5;
    double seasonDiscount = 0;
    if (strcmp(packet->season,"summer")==0) seasonDiscount = 0.15;
    else if (strcmp(packet->season,"winter")==0) seasonDiscount = -0.08;
    double nightsDiscount = (packet->nights<=3) ? 0 : 0.1;
    return packet->people * packet->nights * pricePerNight * (1-seasonDiscount) * (1-nightsDiscount);
}

int main ()
{
    struct Packet packet;
    packet.people = getInt("People: ", 1, 20);
    getchar();
    getSeason(packet.season,10);
    packet.nights = getInt("Nights: ", 1, 20);
    double price = discount(&packet);
    //printf("Екскурзия за %d човека, за %d нощувки през %s ще струва %.2lf лева.\n",hora,dni,season,price);
    printf("The tour for %d people, for %d nights in %s costs %.2lf leva.\n",packet.people,packet.nights,packet.season,price);
}
