class Urun {
    private:
        string adi;
        int stok;
        float fiyat;
    public:
        Urun(string, int, float);
        void setAdi(string);
        void setStok(int);
        void setFiyat(float);
        string getAdi();
        int getStok();
        float getFiyat();
};
class Envanter {
    private:
        Urun* urunler[100];
        int urunSayisi;
    public:
        Envanter();
        void urunEkle(Urun*);
        void urunSil(int);
        void urunListele();
};

int main() {
    Envanter envanter;
    Urun* urun1 = new Urun("Laptop", 10, 5000.0);
    Urun* urun2 = new Urun("Telefon", 20, 2000.0);

    envanter.urunEkle(urun1);
    envanter.urunEkle(urun2);

    envanter.urunListele();

    envanter.urunSil(1);

    envanter.urunListele();

    return 0;
}
