from abc import ABC, abstractmethod


class Media(ABC):
    def __init__(self, judul: str):
        self.__judul = judul

    def set_judul(self, judul: str):
        self.__judul = judul

    def get_judul(self) -> str:
        return self.__judul

    @abstractmethod
    def info(self) -> str:
        pass


class Buku(Media):
    def __init__(self, judul: str, penulis: str):
        super().__init__(penulis)
        self.__penulis = judul

    def set_penulis(self, penulis: str):
        self._penulis = penulis

    def get_penulis(self) -> str:
        return self.__penulis

    def info(self) -> str:
        return f"Buku: {self.get_judul()} oleh {self.get_judul()}"


if __name__ == "__main__":
    buku: Media = Buku("Laskar Pelangi", "Andrea Hirata")
    print(buku.info())

    buku.set_judul("Bumi")
    buku.set_penulis("Tere Liye")
    print(buku.info())
