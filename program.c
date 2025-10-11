#include <stdio.h>
#include <math.h>
#include<stdbool.h>


int main() 
{
    bool b_headwing = false;
    bool b_pressure_altitude = false;
    bool b_tas = false;
    bool b_ground_speed = false;
    bool b_range = false;
    bool b_takeoff = false;
    bool b_wing_loading = false;
    bool b_rate_of_climb = false;
    bool b_no_return = false;
    bool b_descent_speed = false;
    bool b_wind_angle = false;
    bool b_wind_speed = false;
    bool b_fuel = false;
    bool b_cossumption = false;
    bool b_wing_surface = false;
    bool b_pressure = false;
    bool b_temperature = false;
    bool b_altitude = false;
    bool b_ias = false;
    bool b_weight = false;

    int choix;
    printf("1) Altitude-pression\n");
    printf("2) Vitesse vraie\n ");
    printf("3) Vitesse-sol\n");
    printf("4) Distance franchissable\n");
    printf("5) Distance de décollage\n");
    printf("6) Charge alaire\n");
    printf("7) Taux de montée\n");
    printf("8) Point de non-retour\n");
    printf("9) Vitesse de descente\n");
    scanf("Votre Choix est le %d");

    if(choix==1 || choix == 7)//press alti et rate of climb good
    {
        b_rate_of_climb = true;

        b_pressure_altitude = true;
        b_pressure = true;
        
        b_temperature = true;
    }

    if (choix==2) // tas good
    {
        b_tas = true;
        b_ias = true;

        b_pressure_altitude = true;
        b_pressure = true;
    }

    if(choix == 3)//ground speed et descent speed good
    {
        b_descent_speed = true;
        b_ground_speed = true;
        b_tas = true;
        b_ias = true;

        b_pressure_altitude = true;
        b_pressure = true;

        b_headwing = true;
        b_wind_speed = true;
        b_wind_angle = true;
    }

    if (choix == 4) // range good
    {
        b_range = true;
        b_fuel = true;

        b_ground_speed = true;
        b_tas = true;
        b_ias = true;
        b_pressure_altitude = true;
        b_pressure = true;
        b_headwing = true;
        b_wind_speed = true;
        b_wind_angle = true;
        b_cossumption= true;
    }

    if (choix == 5)// takeoff good
    {
        b_takeoff = true;

        b_pressure_altitude = true;
        b_pressure = true;

        b_temperature = true;

        b_headwing= true;
        b_wind_speed = true;
        b_wind_angle = true;

        b_ground_speed= true;
        b_tas = true;
        b_ias = true;
        
        b_weight= true;
    }

    if(choix == 6) // wind loading
    {
        b_wing_loading = true;
        b_weight = true;
        b_wing_surface= true;
    }

    if (choix == 8)// no return
    {
        b_no_return = true;
    }

double wind_angle;
if (b_wind_angle)
    {
        printf("Direction relative du vent de [-3.14159265 à 3.14159265] radian : ");
        scanf("%lf", & wind_angle); 

        printf("Valeur saisie : %lf\n", wind_angle);
    }

int wind_speed;
if (b_wind_speed)
    {
        printf("Vitesse du vent de [0 à 150] kts : ");
        scanf("%d",& wind_speed);

        printf("Valeur saisie : %d\n", wind_speed);
    }

int fuel;
if (fuel)
    {
        printf("Carburant disponible de [20 à 350000] litres : ");
        scanf("%d" ,& fuel);

        printf("Valeur saisie : %d\n" , fuel);
    }

int conssumption; 
if(b_cossumption)
    {
        printf("Consommation de [10 à 15000] litres/h : "); 
        scanf("%d" , & conssumption); 

        printf("Valeur saisie : %d\n" , conssumption);
    } 

int wing_surface; 
if(b_wing_surface)
    {
        printf("Surface alaire de [5 à 900] m^2 : "); 
        scanf("%d" , & wing_surface); 

        printf("Valeur saisie : %d\n" , wing_surface);
    }

int pressure;
if(b_pressure)
    {
        printf("Pression ambiante de [300 à 1050] hPa/mb : "); 
        scanf("%d" , & pressure);
        printf("Valeur saisie: %d\n", pressure);
    }

int temperature;
if(b_temperature)
    {
        printf("Temperature de [-50 à 5]°C :");
        scanf("%d", & temperature);

        printf("Valeur saisie: %d\n ", temperature);
    }

int altitude;
if (b_altitude)
    {
        printf("Altitude de [0 à 19500]ft : ");
        scanf("%d", & altitude);

        printf("Valeur saisie : %d\n", altitude);
    }

int ias;
if (b_ias)
    {
        printf("Indicated Air Speed de [0 à 500]kts :");
        scanf("%d", &ias);

        printf("Valeur saisie : %d\n", ias);
    }

int weight;
if (b_weight)
    {
        printf("Poids de [500 à 600000] :");
        scanf("%d", & weight);

        printf("Valeur saisie : %d\n", weight);
    }



double headwing;
if (b_headwing)
    {
        headwing = wind_speed*cos(wind_angle);
        printf("vent de face  = %lf\n", headwing);
    }

int pressure_altitude;
if(b_pressure_altitude)
    {
        pressure_altitude = altitude+(1023-pressure)*30;
        printf("prssion-altitude =%d\n",pressure_altitude);
    }

int tas;
if(b_tas)
    {
        tas = ias*(1+2*pressure_altitude/1000);
        printf("Vitesse vraie = %d\n",tas);
    }

int ground_speed;
if (ground_speed)
    {   
        ground_speed = tas - headwing;
        printf("Vitesse-sol = %d\n", ground_speed);
    }

double range;
if (b_range)
    {
        range = fuel*ground_speed*1.852/conssumption;
        printf("Distance franchissable = %lf\n", range);
    }

double takeoff;
if(b_takeoff)
    {
        takeoff = 300*(1+pressure_altitude/1000)*(1-0.01*fmax(0, temperature-15))*(1-headwing/ground_speed)*(weight/1157)*(weight/1157);
        printf (" distance de décollage = %lf\n",takeoff); 
    }

int wing_loading;
if (b_wing_loading)
    {
        wing_loading = weight/wing_surface;
        printf ("charge alaire = %d\n", wing_loading); 
    }

double rate_of_climb;
if (b_rate_of_climb)
    {
        rate_of_climb = 700*(1-pressure_altitude/10000)*(1-0.01*fmax(0,temperature-15));
        printf ("taux de montée = %lf\n", rate_of_climb); 
    }
int no_return;
if (b_no_return)
    {
        no_return = range/2;
        printf ("point de non retour = %d\n",  no_return); 
    }

int descent_speed;
if(b_descent_speed)
    {
        descent_speed = ground_speed*tan(3);
        printf ("vitesse de descente = %d\n", descent_speed); 
    }
    
     return 0;
}
  
