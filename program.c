#include <stdio.h>
#include <math.h>


int main() 
{


double wind_angle;

    printf("Direction relative du vent de [-3.14159265 à 3.14159265] radian : ");
    scanf("%lf", & wind_angle); 

    printf("Valeur saisie : %lf\n", wind_angle);

int wind_speed;
    printf("Vitesse du vent de [0 à 150] kts : ");
    scanf("%d",& wind_speed);

    printf("Valeur saisie : %d\n", wind_speed);

/*int fuel;
    printf("Carburant disponible de [20 à 350000] litres : ");
    scanf("%d" ,& fuel);

    printf("Valeur saisie : %d\n" , fuel);

int consumption; 
    printf("Consommation de [10 à 15000] litres/h : "); 
    scanf("%d" , & consumption); 

    printf("Valeur saisie : %d\n" , consumption); 

int wind_surface; 
    printf("Surface alaire de [5 à 900] m^2 : "); 
    scanf("%d" , & wind_surface); 

    printf("Valeur saisie : %d\n" , wind_surface); 

int pressure;
    printf("Pression ambiante de [300 à 1050] hPa/mb : "); 
    scanf("%d" , & pressure);

    printf("Valeur saisie: %d\n", pressure);

int temperature;
    printf("Temperature de [-50 à 5]°C :");
    scanf("%d", & temperature);

    printf("Valeur saisie: %d\n ", temperature);

int altitude;
    printf("Altitude de [0 à 19500]ft : ");
    scanf("%d", & altitude);

    printf("Valeur saisie : %d\n", altitude);

int ias;
    printf("Indicated Air Speed de [0 à 500]kts :");
    scanf("%d", &ias);

    printf("Valeur saisie : %d\n", ias);

int weight;
    printf("Poids de [500 à 600000] :");
    scanf("%d", & weight);

    printf("Valeur saisie : %d\n", weight);*/


double headwing;
    headwing = wind_speed*cos(wind_angle);
    printf("vent de face  = %d", headwing);
     return 0;
}
  

1.03