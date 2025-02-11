#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 
struct tarih_saat {
    int yil;
    int ay;
    int gun;
    int saat;
    int dakika;
    int saniye;
};

union zaman_birlesimi {
    struct tarih_saat ts;  
    time_t epoch_zamani;   
};

// 
time_t epoch_hesapla(struct tarih_saat ts) {
    struct tm zaman_bilgisi = {0};

    zaman_bilgisi.tm_year = ts.yil - 1900; 
    zaman_bilgisi.tm_mon = ts.ay - 1;     
    zaman_bilgisi.tm_mday = ts.gun;       
    zaman_bilgisi.tm_hour = ts.saat;      
    zaman_bilgisi.tm_min = ts.dakika;     
    zaman_bilgisi.tm_sec = ts.saniye;     

    return mktime(&zaman_bilgisi);  
}

void epoch_farkini_yazdir(time_t epoch1, time_t epoch2) {
    
    double fark = difftime(epoch2, epoch1);
    
    if (fark < 0) {
        printf("İlk tarih, ikinci tarihten sonra.\n");
    } else {
        printf("Zaman farkı: %.0f saniye.\n", fark);
    }
}

int main() {
    union zaman_birlesimi zaman1, zaman2;  

    
    printf("Birinci tarihi ve saati giriniz (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &zaman1.ts.yil, &zaman1.ts.ay, &zaman1.ts.gun, 
                                &zaman1.ts.saat, &zaman1.ts.dakika, &zaman1.ts.saniye);

   
    printf("İkinci tarihi ve saati giriniz (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &zaman2.ts.yil, &zaman2.ts.ay, &zaman2.ts.gun, 
                                &zaman2.ts.saat, &zaman2.ts.dakika, &zaman2.ts.saniye);

    
    time_t epoch1 = epoch_hesapla(zaman1.ts);
    time_t epoch2 = epoch_hesapla(zaman2.ts);

    epoch_farkini_yazdir(epoch1, epoch2);

    printf("Epoch zamanı, 1 Ocak 1970, 00:00:00 UTC'den itibaren geçen saniye sayısını temsil eder.\n");
    printf("Bu, bilgisayar sistemlerinde genellikle zaman ölçümü ve hesaplamaları için kullanılır.\n");
    
    return 0;
}
