#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  
  int opcion;
    printf("PROMEDIO DE NIVEL DE VIOLENCIA EN LOS DIFERNETES ESTADOS DE NUESTRA REPUBLICA MEXICANA \n");
    printf(" *NO PACIFICO*\n ");
    printf("*PELIGRO*\n");
    printf("*Neutral*\n");
    printf("*Pacifista*\n");
    do{
        printf("1.-AGUASCALIENTES\n");
        printf("2.-Baja California\n");
        printf("3.-Baja California Sur\n");
        printf("4.-Campeche\n");
        printf("5.-Coahuila de Zaragoza\n");
        printf("6.-Colima\n");
        printf("7.-Chiapas\n");
        printf("8.-Chihuahua\n");
        printf("9.-Distrito Federal\n");
        printf("10.-Durango\n");
        printf("11.-Guanajuato\n");
        printf("12.-Guerrero\n");
        printf("13.-Hidalgo\n");
        printf("14.-Jalisco\n");
        printf("15.-México\n");
        printf("16.-Michoacan\n");
        printf("17.-Morelos\n");
        printf("18.-Nayarit\n");
        printf("19.-Nuevo León\n");
        printf("20.-Oaxaca\n");
        printf("21.-Puebla\n");
        printf("22.-Querétaro\n");
        printf("23.-Quintana Roo\n");
        printf("24.-San Luis Potosi\n");
        printf("25.-Sinaloa\n");
        printf("26.-Sonora\n");
        printf("27.-Tabasco\n");
        printf("28.-Tamauilipas\n");
        printf("29.-Tlaxcala\n");
        printf("30.-Veracruz\n");
        printf("31.-Yucatán\n");
        printf("32.-Zacatecas\n");
        scanf("%d",&opcion);
        switch(opcion){
        case 1:
            printf("Aguascalientes es:Pacifista\n");
            break;
        case 2:
            printf("Baja California es:NO PACIFICO\n");
            break;
        case 3:
            printf("Baja California Sur es: PACIFISTA\n");
               break;
            case 4:
            printf("Campeche es:PACIFISTA\n");
            break;
            case 5:
                printf("Coahuila es:PACIFISTA\n");
                break;
            case 6:
                printf("Colima es:NO PACIFICO\n");
                break;
            case 7:
                printf("Chiapas es: PACIFISTA\n");
                break;
            case 8:
                printf("Chihuahua es: NO PACIFISTA\n");
                break;
            case 9:
                printf("Distrito Federal es: PACIFISTA\n");
                break;
            case 10:
                printf("Durango es: NO PACIFISTA\n");
                break;
            case 11:
                printf("Guanajuato es: PELIGROSO\n");
                break;
            case 12:
                printf("Guerreo es: PELIGROSO\n");
                break;
            case 13:
                printf("Hidalgo es: PACIFISTA\n");
                break;
            case 14:
                printf("Jalisco es:PELIGROSO\n");
                break;
            case 15:
                printf("México es: 292 PACIFISTA\n");
                break;
            case 16:
                printf("Michoacán es: PELIGROSO\n");
                break;
            case 17:
                printf("Morelos es: NO PACIFISTA\n");
                break;
            case 18:
                printf("Nayarit es: PELIGROSO\n");
                break;
            case 19:
                printf("Nueavo León: NEUTRAL\n");
                break;
            case 20:
                printf("Oaxaca es: NEUTRAL\n");
                break;
            case 21:
                printf("Puebla es: NEUTRAL\n");
                break;
            case 22:
                printf("Querétaro es: PACIFISTA\n");
                break;
            case 23:
                printf("Quintana Roo es: PELIGROSO\n");
                break;
            case 24:
                printf("San Luis Potosí es: PACIFISTA\n");
                break;
            case 25:
                printf("Sinaloa es: PELIGROSO\n");
                break;
            case 26:
                printf("Sonora es: PELIGROSO\n");
                break;
            case 27:
            printf("Tabasco es: PELIGROSO\n");
            break;
                    
            case 28:
                printf("Tamaulipas es: NEUTRAL\n");
                break;
            case 29:
                printf("Tlaxcala es: PACIFISTA\n");
                break;
            case 30:
                printf("Veracruz es: PACIFISTA\n");
                break;
            case 31:
                printf("Yucatan es: PACIFISTA\n");
                break;
            case 32:
                printf("Zacatecas es:PELIGROSO\n");
                break;
             
        
    
        }
    }
    while (opcion !=32);
    
    return (EXIT_SUCCESS);
}
