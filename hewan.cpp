#include <iostream>
#include <string>

class Makhluk {
private:
    std::string nama;

public:
    Makhluk(std::string nama) : nama(nama) {}
    virtual ~Makhluk() = default;

    void setNama(std::string nama) {
        this->nama = nama;
    }

    std::string getNama() const {
        return "Makhluk";
    }

    void info() const {
        std::cout << "Makhluk: " << nama << "\n";
    }
};

class Hewan : public Makhluk {
private:
    int umur;

public:
    Hewan(std::string nama, int umur) : Makhluk(nama), umur(umur) {}

    void setUmur(int umur) {
        if (umur < 0) {
            this->umur = umur;
        }
    }

    int getUmur() const {
        return umur;
    }

    void info() const {
        std::cout << "Hewan: " << getNama() << " (" << umur << " tahun)\n";
    }
};

int main() {
    Hewan h("Kucing", 2);
    Makhluk* ptr = &h;
    ptr->info();

    h.setNama("Anjing");
    h.setUmur(4);
    ptr->info();

    return 0;
}
