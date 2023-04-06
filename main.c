#include <stdio.h>
#include <stdlib.h>

//Bu kod, verilen ikili ağacın kök değerinin alt düğümlerin toplamına eşit olup olmadığını kontrol eder.

struct dugum {
    int data;
    struct dugum* sol;
    struct dugum* sag;
};

//sumOfChildren() fonksiyonu, root düğümünü null olmadığı sürece yürütür.
int sumOfChildren(struct dugum* root)
{
    if (root == NULL)
        return 0;

    // Sol alt ağacı ziyaret etmek için yinelemeli bir yapı kullanıyoruz
    int leftSum = sumOfChildren(root->sol);

    // Sağ alt ağacı ziyaret etmek için yinelemeli bir yapı kullanıyoruz
    int rightSum = sumOfChildren(root->sag);

    // Sol alt ağacın toplamı ile sağ alt ağacın toplamını kök değeri ile karşılaştırıyoruz
    if (root->data == leftSum + rightSum)
        return leftSum + rightSum + root->data;
    else
        return 0;
}

// Yeni düğüm oluşturma işlemi
struct node* newNode(int data)
{
    struct dugum* dugum = (struct dugum*)malloc(sizeof(struct dugum));
    dugum->data = data;
    dugum->sol = NULL;
    dugum->sag = NULL;
    return (dugum);
}

int main()
{
    struct dugum* root = newNode(8);
    root->sol = newNode(3);
    root->sag = newNode(5);
    root->sol->sol = newNode(2);
    root->sol->sag = newNode(1);
    root->sag->sag = newNode(4);

    //root düğümünün sol alt ağacını ziyaret eder ve toplamını hesaplar, sonra sağ alt ağacı ziyaret eder ve toplamını hesaplar.
    //Daha sonra, sol ve sağ alt ağaçların toplamı ile kök düğümünün değerini karşılaştırır ve eşitse toplamın değerini döndürür.
    int result = sumOfChildren(root);

    if (result == root->data)
        printf("Kök değeri alt düğümlerin toplamına eşittir");
    else
        printf("Kök değeri alt düğümlerin toplamına eşit değildir");

    return 0;
}
