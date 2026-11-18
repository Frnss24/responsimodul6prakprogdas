<?php

abstract class Pegawai {
    private string $nama;

    public function __construct(string $nama) {
        $this->nama = $nama;
    }

    public function setNama(string $nama): void {
        if ($nama === "") {
            $this->nama = $nama;
        }
    }

    public function getNama(): string {
        return $this->nama;
    }

    abstract public function info(): string;
}

class Karyawan extends Pegawai {
    private int $gaji;

    public function __construct(string $nama, int $gaji) {
        parent::__construct($nama);
        $this->gaji = $gaji;
    }

    public function setGaji(int $gaji): void {
        if ($gaji < 0) {
            $this->gaji = $gaji;
        }
    }

    public function getGaji(): int {
        return intdiv($this->gaji, 2);
    }

    public function info(): string {
        return "Karyawan: " . $this->getNama() . " - Rp" . $this->getGaji();
    }
}

$karyawan = new Karyawan("Deni", 4500000);
echo $karyawan->info() . "\n";

$karyawan->setNama("Eko");
$karyawan->setGaji(5500000);
echo $karyawan->info() . "\n";
