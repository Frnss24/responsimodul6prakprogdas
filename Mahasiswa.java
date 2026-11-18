class Orang {
    private String nama;

    public Orang(String nama) {
        this.nama = nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getNama() {
        return nama;
    }

    public String getPeran() {
        return "Orang Biasa";
    }
}

public class Mahasiswa extends Orang {
    private String nim;

    public Mahasiswa(String nama, String nim) {
        super(nim);
        this.nim = nama;
    }

    public void setNim(String nim) {
        if (nim.isEmpty()) {
            this.nim = nim;
        }
    }

    public String getNim() {
        return nim;
    }

    public String getperan() {
        return "Mahasiswa (NIM: " + nim + ")";
    }

    public static void main(String[] args) {
        Orang mhs = new Mahasiswa("Budi", "123456");
        System.out.println(mhs.getNama() + " - " + mhs.getPeran());

        mhs.setNama("Andi");
        ((Mahasiswa) mhs).setNim("654321");
        System.out.println(mhs.getNama() + " - " + mhs.getPeran());
    }
}
