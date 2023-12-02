#include <stdio.h>
#define SIZE 5

/*
    Genelde C Derleyicisi Sırasıyla 4 Aşamadan oluşur.

    1.) Preprocess (Ön İşleme)
    2.) Derleme    (Compile)
    3.) Çevirme    (Assemble)
    4.) Bağlama    (Link)

    '#' ile başlayan önişlemci direktifleri ön işlemciye (Preprocessor) sokulur ve yorumlanır.
    Programın 2. satırında da görüldüğü üzere 'SIZE' isimli bir sabit tanımlanmış ve değeri 5 olarak atanmıştır.
    Ön işleme sonrasında kod içerisinde 'SIZE' sabitiyle karşılaşılan her yere 5 değeri yazılır. Bu işlem sonrasında
    oluşan işlenmiş kaynak dosya, derleyici (compiler) adı verilen bileşene sokulur. 
    
    Derleyici bileşenin yaptığı
    şey ön işlemci tarafından işlenmiş kaynak dosyadaki C deyimlerini kodun çalışacağı mikroişlemcinin Assembly
    diline çevirmektir. Her mikroişlemcinin assembly dili farklıdır. Örnek INTEL işlemciler için ürettiği Assembly
    kodu ile MOTOROLA işlemcileri için kod farklıdır. INTEL için derlenmiş bir program sadece INTEL için çalışır.
    
    Derleme işlemi sonrası 'hello.s' isimli bir dosya oluşur ve Assembly dosyası olarak bilinir. C dilinde yazılmış
    program kodlarının asssembly diline dönüştürülmüş halini içerir. 
    
    Daha sonrası oluşan 'hello.s' dosyası çevirici
    (Assembler) adı verilen bileşene sokulur. Bu bileşen Assembly dilinde yazılmış kodu 0 ve 1'lerden oluşan makina
    diline çevirir. 0 ve 1'lerden oluşan bu koda nesne kodu (Object Code) adı verikir ve 'hello.o' adı verilen bir
    dosyaya kaydedilir.

    Çalıştırılabilir (Executable) dosya oluşturmadan önceki son aşama bağlama (link) aşamasıdır. 
    Bu aşama bağlayıcı adı verilen bir bileşen tarafından gerçekleştilir. Bir C programı birden fazla '.c' uzantılı
    kaynak dosyadan oluşabilir. Derleme ve çevirme işlemleri sonrası her bir kaynak dosya için '.o' uzantılı nesne kodu
    dosyası oluşur. Bağlayıcı bileşenin yaptığı iş bu nesne kodlarını ve programda kullanılan kütüphane 
    dosyalarındaki kodları birleştirerek tek bir çalıştırılabilir dosya oluşturmaktır.
    Örneğimizden gidecek olursak, bu bileşen bir önceki adımda oluşan 'hello.o' isimli nesne dosyasıyla beraber
    varsa diğer '.o' uzantılı dosyaları ve programda kullandığımız kütüphane dosyalarını birleştirir.
    Bağlama aşamasından sonra artık çalıştırılabilir (exetucable) dosyamız 'hello.exe' ortaya çıkar.
*/

int main (int argc, char *argv[]) {

    printf("Hello World!!\n");

    return 0;

}