#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#define QUANT_CIDADES 16
#define NOTAS_VALIDAS 6
#define DURACOES_VALIDAS 5
#define QUANT_MESES 12
#define QUANT_IDIOMAS 4
#define QUANT_DIGITO 10

#include <stdexcept>

using namespace std;

// ----------- Criacao dos dominios das classes: Usuario, Avaliacao, Excursao e Sessao -----------

// ----------- Classe Usuario -----------

// ----------- Dominio de Instancia Nome ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771

class Nome {

    private:
        string nome;

    public:
        void setNome(string);
        string getNome() const;
        void validarNome(string);
};

inline string Nome::getNome() const{
    return nome;
}

// ----------- Dominio de Instancia Email ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771

class Email {
    private:
        string email;

    public:
        void setEmail(string);
        string getEmail() const;
        void validarEmail(string);
};

inline string Email::getEmail() const{
    return email;
}

// ----------- Dominio de Instancia Senha ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771

class Senha {
    
    private:
        string senha;

    public:
        void setSenha(string);
        string getSenha() const;
        void validarSenha(string);

};

inline string Senha::getSenha() const{
    return senha;
}

// ----------- Classe Excursao -----------

// ----------- Dominio de Instancia Titulo ----------- Aluno responsável: 190042397
class Titulo {
    private:
        string titulo;
        void validarTitulo(string);
    public:
        void setTitulo(string);
        string getTitulo() const;

};

inline string Titulo::getTitulo() const{
    return titulo;
}

// ----------- Dominio de Instancia Cidade ----------- Aluno responsável: 190089539
class Cidade {
    private:
        string cidade;
        void validarCidade(string);
    public:
        void setCidade(string);
        string getCidade() const;
};

inline string Cidade::getCidade() const{
    return cidade;
}

// ----------- Dominio de Instancia Duracao ----------- Aluno responsável: 190024771
class Duracao {
    private:
        int duracao;
        void validarDuracao(int);
    public:
        void setDuracao(int);
        int getDuracao() const;
};

inline int Duracao::getDuracao() const{
    return duracao;
}


// ----------- Dominio de Instancia Endereco ----------- Aluno responsável: 190042397
class Endereco {
    private:
        string endereco;
        void validarEndereco(string);
    public:
        void setEndereco(string);
        string getEndereco() const;
};

inline string Endereco::getEndereco() const{
    return endereco;
}

// ----------- Classe Sessao -----------

// ----------- Dominio de Instancia Data ----------- Aluno responsável: 190089539
class Data {
    private:
        string data;
        void validarData(string);
    public:
        void setData(string);
        string getData() const;
};

inline string Data::getData() const{
    return data;
}

// ----------- Dominio de Instancia Horario ----------- Aluno responsável: 190024771
class Horario {
    private:
        string horario;
        void validarHorario(string);
    public:
        void setHorario(string);
        string getHorario() const;

};

inline string Horario::getHorario() const{
    return horario;
}


// ----------- Dominio de Instancia Idioma ----------- Aluno responsável: 190042397
class Idioma {
    private:
        string idioma;
        void validarIdioma(string);
    public:
        void setIdioma(string);
        string getIdioma()const;
};

inline string Idioma::getIdioma() const{
    return idioma;
}

// ----------- Dominios Gerais -----------

// ----------- Dominio de Instancia Codigo ----------- Aluno responsável: 190089539
class Codigo {
    private:
        string codigo;
        void validarCodigo(string);
    public:
        void setCodigo(string);
        string getCodigo() const;
};

inline string Codigo::getCodigo() const{
    return codigo;
}

// ----------- Dominio de Instancia Nota ----------- Aluno responsável: 190024771
class Nota {
    private:
        int nota;
        void validarNota(int);

    public:
        void setNota(int);
        int getNota() const;
};

inline int Nota::getNota() const{
    return nota;
}

// ----------- Dominio de Instancia Descricao ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771
class Descricao {
    private:
        string descricao;
        void validarDescricao(string);
    public:
        void setDescricao(string);
        string getDescricao() const;
};

inline string Descricao::getDescricao() const{
    return descricao;
}

#endif
