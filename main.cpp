#include <iostream>
#include <vector>

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

class AlunoComp {
    float nota;
    public:
    // Set 
        void setNota(float x) {
            nota = x;
        }

        // Get
        float getNota() {
            return nota;
        }
};
class GenteBoa : public Gamer, public AlunoComp {
    private: 
        string nome;
    public:
        GenteBoa(string x) {
            nome = x;
        }
        
        // Get
        string getNome() {
            return nome;
        }
};

void swap(float *a, float *b) {
    float aux = *a;
    *a = *b;
    *b = aux;

}

void bubbleSort(vector<float> &array) {
    for (int i = 0; i< array.size(); i++)
        {
            for (int j = 0; j < array.size() - 1; j++)
            {
                if(array[j] > array[j+1])
                    swap(&array[j], &array[j+1]);
            }
            
        }
}

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
    
    // Horas Jogadas
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


    // Print final extra 1

    for(int i = 0; i < TAM; i++) {
        cout << "\n" << (gamersGB[i].getHorasJogadas() > 2000 ? "O Extreme Demon Slayer " : "") <<gamersGB[i].getNick() << " jogou " <<gamersGB[i].getJogoFavorito() << " por " << gamersGB[i].getHorasJogadas() << " horas" << "\n";        
    }


    // extra 2 
    vector<float> notas = {};

    for(int i = 0; i < TAM; i++) {
        float nota;
        cout << "\n" << "Qual foi a nota " << gamersGB[i].getNome() << " na prova?" << endl;
        cin >> nota;
        gamersGB[i].setNota(nota);
        notas.push_back(nota);
        
        if(nota > 5) {
            cout << "O " << gamersGB[i].getNome() << " tirou " << gamersGB[i].getNota() << " na prova, mesmo jogando " <<  gamersGB[i].getJogoFavorito() << " por " << gamersGB[i].getHorasJogadas()<< " horas" << endl;
        }
        else {
            cout << "O " << gamersGB[i].getNome() << " tirou " << gamersGB[i].getNota() << " na prova," << " deveria ter jogado menos " << gamersGB[i].getJogoFavorito() << endl; 
        } 

        // Bubble Sort
    }
    bubbleSort(notas);

    for(int i = 0; i< notas.size(); i++) {
        cout << notas[i] << " "; 

    }



}



