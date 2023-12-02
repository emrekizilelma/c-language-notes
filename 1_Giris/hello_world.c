// Tek satırlık yorum satırı.

/*
    Çoklu Metinlerde, yapılacak açıklamalarda çoklu satır kullanılır.
    Örnek:

    Dosya ismi: hello_world.c
    Yazan kişi: Emre
    Tarih     : 01 / 12 / 2023

*/

/*

Gördüğünüz üzere bu bir yorum satırıdır. Derleyici tarafından program kodu olarak görülmediğinden ihmal edilir.
Yorum satırının amacı yazılan kodu okuyacak kişiye bilgi vermesini sağlar.*/

/* Aşağıdaki program ekrana komut satırında "Hello World!" yazdırır. */

#include <stdio.h>                      //"stdio.h" isimli Standard Output Input (Standart Giriş Çıkış) kütüphanesini programa dahil (include) eder.

int main (int argc, char *argv[]) {     /* Bir C programlama dilinde mutlaka main fonksiyonu olmalıdır.
                                        C programları çalışmaya main fonksiyonun ilk komutundan başlar ve main fonksiyonu çalışmayı tamamladığı zaman, 
                                        program tamamlanmış demektir.*/

                                        /*{ } Açık ve kapalı süslü parantezler kod bloğunu temsil eder, 
                                        böylece fonksiyonun nerede başladığını bittiğini anlayabiliriz*/

    printf ("Hello World!\n");           /* stdio.h kütüphanesinde tanımlı olan printf fonksiyonu kullanılarak ekrana "Hello World!" yazdırır.
                                        \n ise sonraki satıra geçmesini sağlar.*/ 

    return 0;                           // return 0; sayesinde main fonksiyonundan çıkış yapıldığını ve programın başarıyla tamamlandığını gösterir.
}