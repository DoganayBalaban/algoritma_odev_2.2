# algoritma_odev_2.2

<h2>Amaç</h2>
<p>Bu programın amacı, verilen bir binary tree'nin kök düğümünün alt düğümlerinin toplamının kök düğümünün değerine eşit olup olmadığını kontrol etmektir.</p>

<h2>Açıklamalar</h2>
Bunun için sumOfChildren() fonksiyonu kullanılır. Bu fonksiyon, verilen root düğümünü null olmadığı sürece yürütülür ve sol alt ağacı ziyaret eder, sağ alt ağacı ziyaret eder, sonra sol ve sağ alt ağaçların toplamı ile kök düğümünün değerini karşılaştırır ve eşitse toplamın değerini döndürür. Main() fonksiyonunda, bir binary tree oluşturulur ve sumOfChildren() fonksiyonu çağrılır. Sonuç, kök düğümünün alt düğümlerinin toplamının kök düğümünün değerine eşit olup olmadığını belirlemek için kök düğümünün değeri ile karşılaştırılır.

<h2>Nasıl Çalışır ? </h2>
<p>sumOfChildren() fonksiyonu, özyinelemeli bir yapı kullanarak, verilen düğümün alt düğümlerinin toplamını hesaplar. İlk olarak, sol alt ağacı ziyaret eder ve alt düğümlerin toplamını hesaplar, sonra sağ alt ağacı ziyaret eder ve alt düğümlerin toplamını hesaplar. Daha sonra, sol ve sağ alt ağaçların toplamı ile kök düğümünün değerini karşılaştırır ve eşitse toplamın değerini döndürür.</p>
<p>newNode() fonksiyonu, verilen bir değere sahip yeni bir düğüm oluşturur.</p>
<p>main() fonksiyonu, bir örnek ikili ağacı oluşturur ve sumOfChildren() fonksiyonunu çağırarak kök düğümünün alt düğümlerinin toplamını hesaplar. Daha sonra, hesaplanan toplamın kök düğümünün değerine eşit olup olmadığını kontrol eder ve sonucunu ekrana yazdırır.</p>
