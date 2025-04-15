#include <iostream>

using namespace std;

class Gamer {
    protected:
        string nick;
        string jogoFavorito;
        float horasJogadas;

    public:
        // Set
        void setNick(string apelido) {
            nick = apelido;
        }
        void setJogoFavorito(string jogo) {
            jogoFavorito = jogo;
        }
        void setHorasJogadas(float horas) {
            horasJogadas = horas;
        }
        // Get
        string getNick() {
            return nick;
        }
        string getJogoFavorito() {
            return jogoFavorito;
        }
        float getHorasJogadas() {
            return horasJogadas;
        }
};

class GenteBoa : public Gamer {
    private: 
        string nome;
    public:
        GenteBoa(string x) {
            nome = x;
        }

        string getNome() {
            return nome;
        }
};

int main() {
    int TAM = 4;
    string jogos[4] = {"Geometry Dash", "Game of War", "LoL", "DotA 2"};

    // Criação dos Gente Boa via construtor

    GenteBoa Kaua("Kaua");
    GenteBoa Alisson("Santana");
    GenteBoa Fabiano("Fabiano");
    GenteBoa Delfino("Delfino");

    GenteBoa gamersGB[4] = {Kaua, Alisson, Fabiano, Delfino};


    // Atribuir o jogo preferido

    for(int i = 0; i<TAM; i++) {
        gamersGB[i].setJogoFavorito(jogos[i]);
    }

    // Perguntas

    for (int i=0; i<TAM; i++) {
        float horas;
        cout << "Quantas horas de " << gamersGB[i].getJogoFavorito() << " tem o jogador " << gamersGB[i].getNome() << "?" << "\n" ;
        cin >> horas;
        gamersGB[i].setHorasJogadas(horas);

    }

    // Nick

    for(int i = 0; i < TAM; i++) {
        string nick;  
            cout << "Qual o nick do jogador " << gamersGB[i].getNome() << "?" << "\n" ;
            cin >> nick;
            gamersGB[i].setNick(nick);
        
    }

    // Print final

    for(int i = 0; i < TAM; i++) {
        cout << "\n" << (gamersGB[i].getHorasJogadas() > 2000 ? "O Extreme Demon Slayer " : "") <<gamersGB[i].getNick() << " jogou " <<gamersGB[i].getJogoFavorito() << " por " <<gamersGB[i].getHorasJogadas() << " horas" << "\n";        
        

    }
}



