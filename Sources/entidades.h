#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

//  ----------- Classe Usuario ----------- Aluno responsável: 190042397

class Usuario { 
    private:
        Nome nome;
        Email email;
        Senha senha;
    public:
        void setNome(Nome);
        Nome getNome() const;
        void setEmail(Email);
        Email getEmail() const;
        void setSenha(Senha);
        Senha getSenha() const;
};

inline void Usuario::setNome(Nome nome) {
    this->nome = nome;
}

inline Nome Usuario::getNome() const {
    return nome;
}

inline void Usuario::setEmail(Email email) {
    this->email = email;
}

inline Email Usuario::getEmail() const {
    return email;
}

inline void Usuario::setSenha(Senha senha) {
    this->senha = senha;
}

inline Senha Usuario::getSenha() const {
    return senha;
}

// ----------- Classe Excursao ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771 

class Excursao {
    private:
        Codigo codigo;
        Titulo titulo;
        Nota nota;
        Cidade cidade;
        Duracao duracao;
        Descricao descricao;
        Endereco endereco;

    public:
        void setCodigo(const Codigo);
        Codigo getCodigo() const;
        void setTitulo(const Titulo);
        Titulo getTitulo() const;
        void setNota(const Nota);
        Nota getNota() const;
        void setCidade(const Cidade);
        Cidade getCidade() const;
        void setDuracao(const Duracao);
        Duracao getDuracao() const;
        void setDescricao(const Descricao);
        Descricao getDescricao() const;
        void setEndereco(const Endereco);
        Endereco getEndereco() const;
        
};

inline void Excursao::setCodigo(Codigo codigo) {
    this->codigo = codigo;
}

inline Codigo Excursao::getCodigo() const {
    return codigo;
}

inline void Excursao::setTitulo(Titulo titulo) {
    this->titulo = titulo;
}

inline Titulo Excursao::getTitulo() const {
    return titulo;
}

inline void Excursao::setNota(Nota nota) {
    this->nota = nota;
}

inline Nota Excursao::getNota() const {
    return nota;
}

inline void Excursao::setCidade(Cidade cidade) {
    this->cidade = cidade;
}

inline Cidade Excursao::getCidade() const {
    return cidade;
}

inline void Excursao::setDuracao(Duracao duracao) {
    this->duracao = duracao;
}

inline Duracao Excursao::getDuracao() const {
    return duracao;
}

inline void Excursao::setDescricao(Descricao descricao) {
    this->descricao = descricao;
}

inline Descricao Excursao::getDescricao() const {
    return descricao;
}

inline void Excursao::setEndereco(Endereco endereco) {
    this->endereco = endereco;
}

inline Endereco Excursao::getEndereco() const {
    return endereco;
}

//  ----------- Classe Avaliacao ----------- Aluno responsável: 190024771

class Avaliacao {
    private:
        Codigo codigo;
        Nota nota;
        Descricao descricao;
    public:
        void setCodigo(const Codigo);
        Codigo getCodigo() const;
        void setNota(const Nota);
        Nota getNota() const;
        void setDescricao(const Descricao);
        Descricao getDescricao() const;
};

inline void Avaliacao::setCodigo(const Codigo codigo) {
    this->codigo = codigo;
};

inline Codigo Avaliacao::getCodigo() const {
    return codigo;
};

inline void Avaliacao::setNota(const Nota nota) {
    this->nota = nota;
};

inline Nota Avaliacao::getNota() const {
    return nota;
};

inline void Avaliacao::setDescricao(const Descricao descricao) {
    this->descricao = descricao;
};

inline Descricao Avaliacao::getDescricao() const {
    return descricao;
};

// ----------- Classe Sessao ----------- Aluno responsável: 190089539

class Sessao {
    private:
        Codigo codigo;
        Data data;
        Horario horario;
        Idioma idioma;
    public:
        void setCodigo(const Codigo);
        Codigo getCodigo() const;
        void setData(const Data);
        Data getData() const;
        void setHorario(const Horario);
        Horario getHorario() const;
        void setIdioma(const Idioma);
        Idioma getIdioma() const;

};

inline void Sessao::setCodigo(const Codigo codigo) {
    this->codigo = codigo;
};

inline Codigo Sessao::getCodigo() const {
    return codigo;
};

inline void Sessao::setData(const Data data) {
    this->data = data;
};

inline Data Sessao::getData() const {
    return data;
};

inline void Sessao::setHorario(const Horario horario) {
    this->horario = horario;
};

inline Horario Sessao::getHorario() const {
    return horario;
};

inline void Sessao::setIdioma(const Idioma idioma) {
    this->idioma = idioma;
};

inline Idioma Sessao::getIdioma() const {
    return idioma;
};


#endif

