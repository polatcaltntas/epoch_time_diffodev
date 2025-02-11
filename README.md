# C Programı: İki Tarih ve Saat Arasındaki Zaman Farkını Epoch Üzerinden Hesaplama

Bu proje, kullanıcının girdiği iki farklı tarih ve saat arasındaki zaman farkını hesaplamak için C dilinde yazılmış bir programdır. Program, tarih ve saat verilerini `struct` ve `union` kullanarak alır ve iki tarih arasındaki farkı, epoch (Unix zaman damgası) üzerinden hesaplar. Epoch, 1 Ocak 1970'ten itibaren geçen saniye sayısını ifade eder ve bu programda, tarihlerin epoch zamanları arasındaki fark hesaplanır.

## Epoch Nedir?

Epoch, bilgisayar bilimlerinde, 1 Ocak 1970, 00:00:00 UTC tarihinden itibaren geçen saniye sayısını ifade eden bir zamandır. Bu tarih, birçok sistemde zamanın sıfır noktası olarak kabul edilir. Epoch zamanı, zaman farklarını hesaplamak için yaygın olarak kullanılır, çünkü tarih ve saat verilerini sayısal bir değere dönüştürmek, aralarındaki farkları hesaplamayı kolaylaştırır.

## Kullanım

### Adımlar:
1. Programı derleyin.
2. İki farklı zamanı tüm birimleriyle girin.
3. Program, girilen tarihler arasındaki farkı saniye cinsinden hesaplayacak ve epoch zamanını çıktı olarak verecek.
