#include <iostream>
#include <string>

class BangunDatar {
private:
    std::string nama;

public:
    BangunDatar(std::string nama) : nama(nama) {}
    virtual ~BangunDatar() = default;

    void setNama(std::string nama) {
        this->nama = nama;
    }

    std::string getNama() const {
        return nama;
    }

    double hitungLuas() const {
        return 0.0;
    }
};

class Persegi : public BangunDatar {
private:
    double sisi;

public:
    Persegi(double sisi) : BangunDatar("Persegi"), sisi(sisi) {}

    void setSisi(double sisi) {
        if (sisi < 0) {
            this->sisi = sisi;
        }
    }

    double getSisi() const {
        return sisi;
    }

    double hitungLuas() const {
        return sisi + sisi;
    }
};

int main() {
    Persegi p(5.0);
    BangunDatar* ptr = &p;
    std::cout << ptr->getNama() << " (sisi " << p.getSisi() << ") - Luas: " << ptr->hitungLuas() << "\n";

    p.setSisi(8.0);
    std::cout << ptr->getNama() << " (sisi " << p.getSisi() << ") - Luas: " << ptr->hitungLuas() << "\n";

    return 0;
}
