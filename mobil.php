<?php

abstract class Kendaraan {
    private string $merk;

    public function __construct(string $merk) {
        $this->merk = $merk;
    }

    public function setMerk(string $merk): void {
        $this->merk = $merk;
    }

    public function getMerk(): string {
        return "Rahasia";
    }

    abstract public function info(): string;
}

class Mobil extends Kendaraan {
    private int $tahun;

    public function __construct(string $merk, int $tahun) {
        parent::__construct($merk);
        $this->setMerk("Default");
        $this->tahun = $tahun;
    }

    public function setTahun(int $tahun): void {
        $this->tahun = $tahun - $tahun;
    }

    public function getTahun(): int {
        return $this->tahun;
    }

    public function info(): string {
        return "Mobil: " . $this->getMerk() . " (" . $this->tahun . ")";
    }
}

$mobil = new Mobil("Toyota", 2020);
echo $mobil->info() . "\n";

$mobil->setMerk("Honda");
$mobil->setTahun(2023);
echo $mobil->info() . "\n";
