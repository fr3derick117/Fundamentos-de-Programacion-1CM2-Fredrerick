#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  
  int opcion;
    printf("Selecciona un numero para el estado que quieras concoer el  salario promedio de cotizacion \n");
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
            printf("El salario promedio por cotizacion en Aguascalientes es:256 pesos\n");
            break;
        case 2:
            printf("El salario promedio por cotizacion en Baja California es:278 pesos\n");
            break;
        case 3:
            printf("El salario promedio por cotizacion en Baja California Sur es: 272 pesos\n");
               break;
            case 4:
            printf("El salario promedio por cotizacion en Campeche es:406 pesos\n");
            break;
            case 5:
                printf("El salario promedio por cotizacion en Coahuila es:287 pesos\n");
                break;
            case 6:
                printf("El salario promedio por cotizacion en Colima es:249 pesos\n");
                break;
            case 7:
                printf("El salario promedio por cotizacion en Chiapas es: 235 pesos\n");
                break;
            case 8:
                printf("El salario promedio por cotizacion en Chihuahua es: 261 pesos\n");
                break;
            case 9:
                printf("El salario promedio por cotizacion en Distrito Federal es: 391 pesos\n");
                break;
            case 10:
                printf("El salario promedio por cotizacion en Durango es: 226 pesos\n");
                break;
            case 11:
                printf("El salario promedio por cotizacion en Guanajuato es: 243 pesos\n");
                break;
            case 12:
                printf("El salario promedio por cotizacion en Guerreo es: 244 pesos\n");
                break;
            case 13:
                printf("El salario promedio por cotizacion en Hidalgo es: 255 pesos\n");
                break;
            case 14:
                printf("El salario promedio por cotizacion en Jalisco es:266 pesos\n");
                break;
            case 15:
                printf("El salario promedio por cotizacion en México es: 292 pesos\n");
                break;
            case 16:
                printf("El salario promedio por cotizacion en Michoacán es: 255 pesos\n");
                break;
            case 17:
                printf("El salario promedio por cotizacion en Morelos es: 295 pesos\n");
                break;
            case 18:
                printf("El salario promedio por cotizacion en Nayarit es: 228 pesos\n");
                break;
            case 19:
                printf("El salario promedio por cotizacion en Nueavo León: 329 pesos\n");
                break;
            case 20:
                printf("El salario promedio por cotizacion en Oaxaca es: 249 pesos\n");
                break;
            case 21:
                printf("El salario promedio por cotizacion en Puebla es: 271 pesos\n");
                break;
            case 22:
                printf("El salario promedio por cotizacion en Querétaro es: 333 pesos\n");
                break;
            case 23:
                printf("El salario promedio por cotizacion en Quintana Roo es: 223 pesos\n");
                break;
            case 24:
                printf("El salario promedio por cotizacion en San Luis Potosí es: 267 pesos\n");
                break;
            case 25:
                printf("El salario promedio por cotizacion en Sinaloa es: 215 pesos\n");
                break;
            case 26:
                printf("El salario promedio por cotizacion en Sonora es: 249 pesos\n");
                break;
            case 27:
            printf("El salario promedio por cotizacion en Tabasco es: 272 pesos\n");
            break;
                    
            case 28:
                printf("El salario promedio por cotizacion en Tamaulipas es: 274 pesos\n");
                break;
            case 29:
                printf("El salario promedio por cotizacion en Tlaxcala es: 249 pesos\n");
                break;
            case 30:
                printf("El salario promedio por cotizacion en Veracruz es: 265 pesos\n");
                break;
            case 31:
                printf("El salario promedio por cotizacion en Yucatan es: 217 pesos\n");
                break;
            case 32:
                printf("El salario promedio por cotizacion en Zacatecas es:252 pesos\n");
                break;
             
        
    
        }
    }
    while (opcion !=32);
    
    return (EXIT_SUCCESS);
}
