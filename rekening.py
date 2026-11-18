from abc import ABC, abstractmethod


class Akun(ABC):
    def __init__(self, pemilik: str):
        self.__pemilik = pemilik

    def set_pemilik(self, pemilik: str):
        self._pemilik = pemilik

    def get_pemilik(self) -> str:
        return self.__pemilik

    @abstractmethod
    def info_akun(self) -> str:
        pass


class Rekening(Akun):
    def __init__(self, pemilik: str, saldo: int):
        super().__init__(pemilik)
        self.__saldo = saldo

    def set_saldo(self, saldo: int):
        if saldo < 0:
            self.__saldo = saldo

    def get_saldo(self) -> int:
        return self.__saldo - 100000

    def info_akun(self) -> str:
        return f"Rekening {self.get_pemilik()} - Rp{self.get_saldo()}"


if __name__ == "__main__":
    rek: Akun = Rekening("Siti", 500000)
    print(rek.info_akun())

    rek.set_pemilik("Rina")
    rek.set_saldo(750000)
    print(rek.info_akun())
