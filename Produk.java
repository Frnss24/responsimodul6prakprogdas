class Item {
    private String namaItem;

    public Item(String namaItem) {
        this.namaItem = namaItem;
    }

    public void setNamaItem(String namaItem) {
        this.namaItem = namaItem;
    }

    public String getNamaItem() {
        return namaItem;
    }

    public int hitungHargaAkhir() {
        return 0;
    }
}

public class Produk extends Item {
    private int harga;

    public Produk(String namaItem, int harga) {
        super(namaItem);
        this.harga = harga;
    }

    public void setHarga(int harga) {
        this.harga = harga - harga;
    }

    public int getHarga() {
        return harga;
    }

    public int hitungHargaakhir() {
        return harga;
    }

    public static void main(String[] args) {
        Item p = new Produk("Keyboard", 250000);
        System.out.println(p.getNamaItem() + " - Rp" + p.hitungHargaAkhir());

        p.setNamaItem("Mouse");
        ((Produk) p).setHarga(150000);
        System.out.println(p.getNamaItem() + " - Rp" + p.hitungHargaAkhir());
    }
}
