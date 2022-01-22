#include <stdio.h>
#include <stdlib.h>


int main() { 
    char *userIme;
    userIme = getenv("USERPROFILE");
    char izbor[50];
    printf("[c] Dobrodosli na Cache Cleaner v1.0.0\n[i] Usage : [ fivem ] [ temp ] [ all ]");
    scanf("49%s", izbor);
    izvrsiZadatak(userIme, izbor);
    return 0;
}

void izvrsiZadatak(path, izbor) {
    char fivem[] = "fivem";
    char temp[] = "temp";
    char all[] = "all";
    char cmd[40]; 
    if (strcmp(fivem, izbor) == 0) { 
        sprintf(cmd, "rmdir /Q /S %s\\AppData\\Local\\FiveM\\FiveM.app\\data", path);
        printf("[i] Uspesno si obrisao FiveM cache.");
    }
    else if (strcmp(temp, izbor) == 0) {
        sprintf(cmd, "rmdir /Q /S %s\\AppData\\Local\\Temp", path);
        printf("[i] Uspesno si obrisao Temp cache");
    }
    else if (strcmp(all, izbor) == 0) { 
        sprintf(cmd, "rmdir /Q /S %s\\AppData\\Local\\FiveM\\FiveM.app\\data", path);
        sprintf(cmd, "rmdir /Q /S %s\\AppData\\Local\\Temp", path);
        printf("[i] Uspesno si obrisao FiveM i Temp cache");
    }else { 
        printf('[x] Error : Uneo si nevazecu opciju');
    }
}