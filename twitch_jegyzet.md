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

# 19.5-ös kell 
A templatek majd prog1en.

# Prezentácó:

* Változtatható legyen a vektor mérete
* Működjön többféle típusra is ne csak doublekre

Mi a változtatható mérettel, a range checkingel és a kivételekkel foglalkozunk.

## resize és push_back:
A new és delete nagyon erőforrásigényes, ezért jó lenne ha nem kellene minden egyes híváskor ezt elvégezni.
Ezért amikor pl. betellik egy 10 elemű vektor, nem 11-elemnek foglalunk helyet hanem 20-nak. Így nem kell minden egyes alkalomkor lefoglalni. Mert elég akkor ha a 20 elemű betelt. 

Így ketté van osztva a vektor: egy olyan részre amit ténylegesen használunk, és egy olyanra ahol csak előre levannak a helyek foglalva.


és másolás

## Reserve függvény: Nem módosít semmit, csak memóriát alokkál. 
Előtte megnézni, hogy nehogy kevesebb területre foglaljunk területet, mint most van, mert akkor elvesznének elemek a vektorból.
Foglal területet, majd átmásoljuk a régi vektorból az eleemeket, törli a régi mem. területet és végül átállítja a mutatót az új területre.

## Resize függvény: Ez már nem memória foglalás, hanem, hogy ténylegesen hány elem van a vektorban
Az új elemeket kinulláza, (amennyivel nevüljük csak azokat!) A régiek ugyanúgy maradnak.
A size-ot beállítjuk az új méretre, annyire amivel átakartuk méretezni.

## Push_Back függvény:
Átadunk neki egy számot pl.
Megnézni, hogy nem e üres a vektor, ha igen foglal memóriát pl. 8 elemnek.
Majd megnézi, hogy pontsan annyi vektorunk van e mint amit lefoglaltunk: ha igen foglal 2x annyi helyet 
Majd átálítja az utolsó értéket a megadott számra és eggyel növeli a size-ot.

## This pointer:
Minden osztálynak, típusnak tagja. Az adott objektum címét adja vissza az osztályon belül.

## Assignment Optimalizálása
(Copy and swap)-van alapból. Lemásoljuk az elemeket aztán swap-eljük a pointert de ez nem mindig hatékony

Ha saját magunkra akarunk másolni: return *this; self referencia visszadása*

Ha van elegendő helyünk: azaz amit átakarunk másolni kisebb vagy egyenlő, mint amink van. 
Ekkor csak másoljuk az elemeket, mert van elegendő mem. majd  a free-spacet megnöveljük, a size-ot átírjuk.

### 19.3as fejezet a templatek

## 19.5-ös drill
New-el foglalunk, akkor majd felkell szabadítani

unique pointer: 
std::unique_ptr<vector<int>>
Egy unique pointer ami egy int vectorra fog mutatni


## sus4 és sus5 kell majd védésen

## Unique Ptr Függvény:
készít egy unique_ptr-t olyan típussal amit a jobb oldalán adunk meg neki (= jel)
pl. egy vector<int> -nek foglalal memóriát

