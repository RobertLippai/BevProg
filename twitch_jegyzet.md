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
