#include "UF.h"
#include <iostream>

// Конструктор
UF::UF(int N) {
    id = new int[N];  // Инициализация массива id
    sz = new int[N];  // Инициализация массива sz
    for (int i = 0; i < N; ++i) {
        id[i] = i;   // Каждый элемент указывает на себя
        sz[i] = 1;   // Изначально все множества имеют размер 1
    }
}

// Деструктор для очистки памяти
UF::~UF() {
    delete[] id;
    delete[] sz;
}

// Приватный метод для поиска представителя множества
int UF::findP(int x) {
    while (x != id[x]) x = id[x];  // Поиск представителя
    return x;
}

// Метод для проверки, принадлежат ли p и q одному множеству
int UF::find(int p, int q, int N) {
    return (findP(p) == findP(q));  // Если представители одинаковы, то они принадлежат одному множеству
}

// Метод для объединения двух множеств
void UF::unite(int p, int q, int N) {
    int i = findP(p), j = findP(q);  // Находим представителей для p и q
    if (i == j) return;  // Если они уже в одном множестве, ничего не делаем

    // Объединяем меньший набор с большим
    if (sz[i] < sz[j]) {
        id[i] = j; 
        sz[j] += sz[i];  // Увеличиваем размер нового множества
    } else {
        id[j] = i;
        sz[i] += sz[j];  // Увеличиваем размер нового множества
    }

    // Выводим размеры всех множеств после объединения
    std:: cout << "unite: ";
    for (int k = 0; k < N; ++k) {
        std::cout << sz[k] << " ";
    }
    std::cout << std::endl;

    
    std:: cout << "'p' members = "<< sz[i] << std :: endl;
    std:: cout << "'q' members = "<< sz[j] << std :: endl;
    
}

void UF::compresion(int p, int q, int N){
    for (int i = p; i != id[i]; i = id[i])
    {
        id[i] = id[id[i]];
    }
    for (int j = q; j != id[j]; j = id[j])
    {
        id[j] = id[id[j]];
    }

    std:: cout << "compresion: ";
    for (int i = 0; i < N; ++i)
    {
        std::cout << id[i] << " ";
    }
    std ::cout << std::endl;
}
