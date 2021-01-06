#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  
  int opcion;
    printf("Selecciona un numero para el estado que quieras concoer el promedio de esperanza de vida\n");
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
            printf("La esperanza de vida en Aguascalientes es:75 años\n");
            break;
        case 2:
            printf("La esperanza de vida en Baja California es:73 años\n");
            break;
        case 3:
            printf("La esperanza de vida en Baja California Sur es: 75 años\n");
               break;
            case 4:
            printf("La esperanza de vida en Campeche es:74 años\n");
            break;
            case 5:
                printf("La esperanza de vida en Coahuila es:74 años\n");
                break;
            case 6:
                printf("La esperanza de vidad en Colima es:75 años\n");
                break;
            case 7:
                printf("La esperanza de vida en Chiapas es: 72 años\n");
                break;
            case 8:
                printf("La esperanza de vida en Chihuahua es: 68 años\n");
                break;
            case 9:
                printf("La esperanza de vida en Distrito Federal es: 75 años\n");
                break;
            case 10:
                printf("La esperanza de vida en Durango es: 73 años\n");
                break;
            case 11:
                printf("La esperanza de vida en Guanajuato es: 74 años\n");
                break;
            case 12:
                printf("La esperanza de vida en Guerreo es:71 años\n");
                break;
            case 13:
                printf("La esperanza de vida en Hidalgo es: 73 años\n");
                break;
            case 14:
                printf("La esperanza de vida en Jalisco es:74 años\n");
                break;
            case 15:
                printf("La esperanza de vida en México es: 74 años\n");
                break;
            case 16:
                printf("La esperanza de vida en Michoacán es: 73 años\n");
                break;
            case 17:
                printf("La esperanza de vida en Morelos es: 74 años\n");
                break;
            case 18:
                printf("La esperanza de vida en Nayarit es: 73 años\n");
                break;
            case 19:
                printf("La esperanza de vida en Nueavo León: 75 años\n");
                break;
            case 20:
                printf("La esperanza de vida en Oaxaca es: 71 años\n");
                break;
            case 21:
                printf("La esperanza de vida en Puebla es: 74 años\n");
                break;
            case 22:
                printf("La esperanza de vida en Querétaro es: 74 años\n");
                break;
            case 23:
                printf("La esperanza de vida en Quintana Roo es: 74 años\n");
                break;
            case 24:
                printf("La esperanza de vida en San Luis Potosí es: 73 años\n");
                break;
            case 25:
                printf("La esperanza de vida en Sinaloa es: 73 años\n");
                break;
            case 26:
                printf("La esperanza de vida en Sonora es: 74 años\n");
                break;
            case 27:
            printf("La esperanza de vida en Tabasco es: 74 años\n");
            break;
                    
            case 28:
                printf("La esperanza de vida en Tamaulipas es: 74 años\n");
                break;
            case 29:
                printf("La esperanza de vida en Tlaxcala es: 74 años\n");
                break;
            case 30:
                printf("La esperanza de vida en Veracruz es: 73 años\n");
                break;
            case 31:
                printf("La esperanza de vida en Yucatan es: 74 años\n");
                break;
            case 32:
                printf("La esperanza de vida en Zacatecas es:74 años\n");
                break;
             
        
    
        }
    }
    while (opcion !=32);
    
    return (EXIT_SUCCESS);
}
