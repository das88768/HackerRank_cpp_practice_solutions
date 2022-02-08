// Problem Name -- Magic Spells.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {

/* Enter your code here. Read input from STDIN. Print output to STDOUT */
    if (Fireball *fb=dynamic_cast<Fireball*>(spell)){
        fb->revealFirepower();
    }
    else if(Frostbite *frb = dynamic_cast<Frostbite*>(spell)){
        frb->revealFrostpower();
    }
    else if(Thunderstorm *ts = dynamic_cast<Thunderstorm*>(spell)){
        ts->revealThunderpower();
    }
    else if(Waterbolt *wb = dynamic_cast<Waterbolt*>(spell)){
        wb->revealWaterpower();
    }
    else{
        string spellA = spell->revealScrollName();
        string spellB = SpellJournal::journal;
        
        int m = spellA.length();
        int n = spellB.length();
        int i, j, temp[m+1][n+1];

        for(i=0;i<m+1;i++){
            for(j=0;j<n+1;j++){
                if(i==0 || j==0){
                    temp[i][j] = 0;
                }
                else if(spellA[i-1] == spellB[j-1]){
                    temp[i][j] = temp[i-1][j-1] + 1;
                }else{
                    temp[i][j] = max(temp[i-1][j], temp[i][j-1]);
                }
            }
        }
        cout << temp[m][n] << endl;
    }
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}