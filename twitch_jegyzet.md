# Twitch Jegyzet Szept. 16.

## Github:

.gitignore - c++

Licencse - GNU v3

SSH kulcs:

Linux && Mac:
ssh-keygen -t rsa -b 4096 -C "githubemail@gmail.com"

github.pub kulcs -> Github SSH Keys, add new

## Git clone


While a fájl végig
Terminálnál a ctrl c (mac), ctrl d (linux) ig


## ./repeating < teszt.txt /a szövegből olvassa be nem a parancssorból

# C++ 11 előtt kell mindennek értéket adni mert nélküle random-ot kap.

## auto type
auto x = 1; // int
auto s = "Howdy";




# Twitch Jegyzet Szept. 18.
# Computation

Expressions - kifejezések
pl. int length = 20;
a literal (here, 20);

Operator: pl. *, /, +, -, ==, &&, ||, < >>
Operandus: pl. length, width

Utasítás: deklaráció, vezérlő utasítás (if), egy kifejezés

Iteráció:
++i először növel aztán kiiértékel
i++ először kiértékel aztán növel


# Függvények

int -- visszatérési érték (lehet void is)
name - név
paramérter lista -- ha üres akkor, eljárásnak nevezzük
törzs

int square(int x){
	return x*x;
}

# Vektorok

vector<type> name //declare

push_back(value) //store the value of temp in the vector

# cerr - standard error output


# Függvények, Egyebek

#include "xy.h"

Ebben a header fájlban lévő deklarációk elérhetővé válnak. (cout, stb.)
Ezeket szoktuk a valóságban is használni.

Függvények, típusok, konstansdeklarációk és egyéb programrészletek találhatóak benne.
Hozzáadja a saját forráskódunkhoz a fájlt.

## Definició: Egy olyan deklaráció ami teljesen mértékben leír egy entitást.
int a = 7;
int b;
vector<double> v;
double sqrt(double){...többi kódrész...}
struct Point {int x; int y}

## Deklaráció, ami nem definició:
double sqrt(double);
struct Point;

## Nem definiálhatunk valamit többször
## Deklarálni lehet kétszer


# Scope
Próbáljuk meg minél lokálisabban tartani a változókat.

# Call by Reference
int xx = 0;
f(xx)
int f(int& a) { a = a + 1; return a;}
Az a változó egy új név lesz, de ugyanarra az x objektumra mutat.

int f(int& a) { a = a + 1; return a;} //modosítható marad
int f(const int& a) { a = a + 1; return a;} //Nem marad módositható

# Névütközés
Ugyanaz a függvény név, ugyanaz a paraméterekkel

## Névterek
namespace unideb {
//Nem indentálunk belül
}

Scope operátor:
unideb::my_find()


using namespace std;
Szegmensenként érvényes, az using direktivától

# Enum
Értékek egy halmaza

feltétel ? igaz esetén : hamis esetén elágazási szerkezet

# Memória labor

## Free Store:
Ha azt akarjuk, hogy az objektum túlélje a scope-ot amiben létrehoztuk.

Ha new-al foglalunk utána Deletelni kell

