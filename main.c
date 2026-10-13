#include <stdio.h>

int main() {
    float urun_tutari;
    float odenen_para;

    // 1. Kullanıcıdan giriş alma işlemini yapıyorum
    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &urun_tutari);

    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen_para);

    // 2. Para üstünü kuruş cinsine çevirme ve hassasiyet kaybını önlemek için + 0.5f ile yuvarlama yaptım.
    int toplam_kurus = (int)((odenen_para - urun_tutari) * 100.0f + 0.5f);

    // 3. Döngü ve if-else KULLANMADAN ardışık bölme ve kalan ile hesaplama yapımı
    int k200 = toplam_kurus / 20000;  //toplam kuruşun içinde kaç tane 200 TL (20.000 kuruş) olduğunu bulur ve k200 değişkenine yazar (adet cinsinden).
    int kalan1 = toplam_kurus % 20000; //200'lükleri dağıttıktan sonra geriye kalan parayı bulur ve bunu yeni bir değişkene (kalan1) kaydeder.

    int k100 = kalan1 / 10000;
    int kalan2 = kalan1 % 10000;

    int k50tl = kalan2 / 5000;
    int kalan3 = kalan2 % 5000;

    int k20tl = kalan3 / 2000;
    int kalan4 = kalan3 % 2000;

    int k10tl = kalan4 / 1000;
    int kalan5 = kalan4 % 1000;

    int k5tl = kalan5 / 500;
    int kalan6 = kalan5 % 500;

    int k1tl = kalan6 / 100;
    int kalan7 = kalan6 % 100;

    int m50kr = kalan7 / 50;
    int kalan8 = kalan7 % 50;

    int m25kr = kalan8 / 25;
    int kalan9 = kalan8 % 25;

    int m10kr = kalan9 / 10;
    int kalan10 = kalan9 % 10;

    int m5kr = kalan10 / 5;
    int m1kr = kalan10 % 5;

    // 4. Toplam verilen banknot ve madeni para sayısını hesaplama
    int toplam_banknot = k200 + k100 + k50tl + k20tl + k10tl + k5tl + k1tl + m50kr + m25kr + m10kr + m5kr + m1kr;

    // 5. Raporlama (Ekran Çıktısı)
    printf("\n--- KASA RAPORU ---\n");
    printf("Toplam Para Ustu: %.2f TL (%d kurus)\n", (float)toplam_kurus / 100.0f, toplam_kurus);
    printf("200 TL: %d adet\n", k200);
    printf("100 TL: %d adet\n", k100);
    printf(" 50 TL: %d adet\n", k50tl);
    printf(" 20 TL: %d adet\n", k20tl);
    printf(" 10 TL: %d adet\n", k10tl);
    printf("  5 TL: %d adet\n", k5tl);
    printf("  1 TL: %d adet\n", k1tl);
    printf(" 50 Kr: %d adet\n", m50kr);
    printf(" 25 Kr: %d adet\n", m25kr);
    printf(" 10 Kr: %d adet\n", m10kr);
    printf("  5 Kr: %d adet\n", m5kr);
    printf("  1 Kr: %d adet\n", m1kr);
    printf("-------------------\n");
    printf("Toplam Verilen Banknot Sayisi: %d\n", toplam_banknot);

    return 0;
}
