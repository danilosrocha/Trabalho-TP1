#include "dominios.h"

#include <cctype>
#include <regex>

using namespace std;

//----------- Métodos do domínio Nome ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771
void Nome::validarNome(string nome) {

    regex modelo("([A-Z][A-Za-z]*\\.? ?)+");

    const int min = 5, max = 20;
    bool validacao = (nome.length() >= min && nome.length() <= max) ? true : false;

    if (!validacao || !regex_match(nome, modelo)) {

        throw invalid_argument("NOME -> Argumento invalido.");
    }
}

void Nome::setNome(string nome) {

    validarNome(nome);
    this->nome = nome;
}

//----------- Métodos do domínio Email ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771

void Email::validarEmail(string email) {

    const int separador = email.find("@", 0);
    const string parteLocal = email.substr(0, separador);
    const string dominio = email.substr(separador+1, -1);
    const int maxPL = 64, maxD = 253;
    bool bEmailValida = false;

    regex model("/^[a-zA-Z0-9.!#$%&'+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)$/");

    if (!regex_match(email, model)) {
        if ((parteLocal.length() <= maxPL && dominio.length() <= maxD)) {
            if (email.find("..") == std::string::npos) {
                if (parteLocal[0] != '.' && parteLocal.back() != '.') {
                    if (dominio[0] != '.'){
                        bEmailValida = true;
                    }
                }

            if (bEmailValida == false) {
                throw invalid_argument("EMAIL -> Argumento invalido.");
            }
            }
        }
    }
}

void Email::setEmail(string email) {
    validarEmail(email);
    this->email = email;
}

//----------- Métodos do domínio Senha ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771

void Senha::validarSenha(string senha) {

    int number = senha.size();

    if (number != 6) {

        throw invalid_argument("SENHA -> Argumento invalido.");
    }

    int counter = 0;

    for (int j=0;j<senha.size();j++) {

        for(int i=0;i<senha.size();i++) {

            if(senha[i]==senha[j]) {

                counter++;
            }
        }
    }

    if (counter!=senha.size()) {

        throw invalid_argument("SENHA -> Argumento invalido.");
    }

    regex model("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)[a-zA-Z\\d]{6,}$");

    if (!regex_match(senha, model)) {

        throw invalid_argument("SENHA -> Argumento invalido.");
    }
}

void Senha::setSenha(string senha) {

    validarSenha(senha);
    this->senha = senha;
}

//----------- Métodos do domínio Titulo ----------- Aluno responsável: 190042397
void Titulo::validarTitulo(string titulo) {
    bool bTituloValida = false;
    if ((titulo >= "a" && titulo <= "z") || (titulo >= "A" && titulo <= "Z")){
        if (titulo.length() >= 5 && titulo.length() <= 20) {  //
            if (titulo.find("..") != std::string::npos || titulo.find("  ") != std::string::npos) {
                bTituloValida = false;
            } else {
                bTituloValida = true;
            }
        }
    }
    if (bTituloValida == false) {
        throw invalid_argument("TITULO -> Argumento invalido.");
    }
}

void Titulo::setTitulo(string titulo) {
    validarTitulo(titulo);
    this->titulo = titulo;
}

//----------- Métodos do domínio Cidade ----------- Aluno responsável: 190089539
void Cidade::validarCidade(string cidade) {
    string listaCidades[QUANT_CIDADES] = {"Hong Kong", "Bangkok", "Macau", "Singapura", "Londres", "Paris", "Dubai", "Delhi", "Istambul", "Kuala", "Lumpur", "Nova Iorque", "Antalya", "Mumbai", "Shenzhen", "Phuket"};
    bool bCidadeValida = false;

    for (int cont = 0; cont < QUANT_CIDADES; cont++) {
        if (cidade == listaCidades[cont]){
            bCidadeValida = true;
        }
    }
    if (bCidadeValida == false) {
        throw invalid_argument("CIDADE -> Argumento invalido.");
    }

}

void Cidade::setCidade(string cidade) {
    validarCidade(cidade);
    this->cidade = cidade;
}

//----------- Métodos do domínio Duracao ----------- Aluno responsável: 190024771
void Duracao::validarDuracao(int duracao){
    int duracoes[DURACOES_VALIDAS] = {30, 60, 60, 120, 180};
    bool bDuracaoValida = false;
    for (int cont = 0; cont < DURACOES_VALIDAS; cont++){
        if (duracao == duracoes[cont]){
            bDuracaoValida = true;
        }
    }
    if (bDuracaoValida == false) {
        throw invalid_argument("DURACAO -> Argumento invalido.");
    }
}

void Duracao::setDuracao(int duracao) {
    validarDuracao(duracao);
    this->duracao = duracao;
}

//----------- Métodos do domínio Endereco ----------- Aluno responsável: 190042397
void Endereco::validarEndereco(string endereco) {
    bool bEnderecoValida = false;
    if (endereco.length() <= 20) {
        if (endereco.find("..") != std::string::npos || endereco.find("  ") != std::string::npos) {
            bEnderecoValida = false;
        } else {
            bEnderecoValida = true;
        }
    }
    if (bEnderecoValida == false) {
        throw invalid_argument("ENDERECO -> Argumento invalido.");
    }
}

void Endereco::setEndereco(string endereco) {
    validarEndereco(endereco);
    this->endereco = endereco;
}

//----------- Métodos do domínio Data ----------- Aluno responsável: 190089539
void Data::validarData(string data){
    string meses[QUANT_MESES] = {"Jan","Fev","Mar","Abr","Mai","Jun","Jul","Ago","Set","Out","Nov","Dez"};
    int dia = stoi(data.substr(0, 2));
    int ano = stoi(data.substr(7, 4));
    string mes = data.substr(3, 3);
    bool bDataValida = false;
    if (data.length() == 11) {
        if(data.substr(2, 1) == "-" && data.substr(6, 1) == "-") {
            if (ano >= 2000 && ano <= 9999){
                if(mes == "Jan" || mes == "Mar" || mes == "Mai" || mes == "Jul" || mes == "Ago" || mes == "Out" || mes == "Dez") {
                    if(dia > 0 && dia <= 31){
                        bDataValida = true;
                    }
                }
                if(mes == "Abr" || mes == "Jun" || mes == "Set" || mes == "Nov") {
                    if(dia > 0 && dia <= 30){
                        bDataValida = true;
                    }
                }
                if(ano % 4 == 0) { // Ano bissexto
                    if(mes == "Fev") {
                        if(dia > 0 && dia <= 29){
                            bDataValida = true;
                        }
                    }
                } else { // Ano normal
                    if(mes == "Fev") {
                        if(dia > 0 && dia <= 28){
                            bDataValida = true;
                        }
                    }
                }
            }
        }
    }
    if (bDataValida == false) {
        throw invalid_argument("DATA -> Argumento invalido.");
    }
}

void Data::setData(string data) {
    validarData(data);
    this->data = data;
}

//----------- Métodos do domínio Horario ----------- Aluno responsável: 190024771
void Horario::validarHorario(string horario){
    int hora = stoi(horario.substr(0, 2));
    int minuto = stoi(horario.substr(3, 2));
    bool bHorarioValida = false;
    if(horario.length() == 5) {
        if(horario.substr(2, 1) == ":"){
            if(hora <= 23 && minuto <= 59){
                bHorarioValida = true;
            }
        }
    }
    if (bHorarioValida == false) {
        throw invalid_argument("HORARIO -> Argumento invalido.");
    }
}
void Horario::setHorario(string horario) {
    validarHorario(horario);
    this->horario = horario;
}

//----------- Métodos do domínio Idioma ----------- Aluno responsável: 190042397
void Idioma::validarIdioma(string idioma){
    string listaIdiomas[QUANT_IDIOMAS] = {"Portugues", "Espanhol", "Ingles", "Frances"};
    bool bIdiomaValida = false;

    for (int cont = 0; cont < QUANT_IDIOMAS; cont++) {
        if (idioma == listaIdiomas[cont]){
            bIdiomaValida = true;
        }
    }
    if (bIdiomaValida == false) {
        throw invalid_argument("IDIOMA -> Argumento invalido.");
    }

}
void Idioma::setIdioma(string idioma) {
    validarIdioma(idioma);
    this->idioma = idioma;
}

//----------- Métodos do domínio Codigo ----------- Aluno responsável: 190089539
void Codigo::validarCodigo(string codigo) {
    char digitoValido[QUANT_DIGITO] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool bCodigoValida = false;
    if (codigo.length() == 6) {
        for (int cont = 0; cont < QUANT_DIGITO; cont++) {
            for (int cont2 = 0; cont2 < codigo.length(); cont2++) {
                if (codigo[cont2] == digitoValido[cont] && codigo != "000000") {
                    bCodigoValida = true;
                }
            }
        }
    }

    if (bCodigoValida == false) {
        throw invalid_argument("CODIGO -> Argumento invalido.");
    }
}

void Codigo::setCodigo(string codigo) {
    validarCodigo(codigo);
    this->codigo = codigo;
}

//----------- Métodos do domínio Nota ----------- Aluno responsável: 190024771
void Nota::validarNota(int nota){
    int notas[NOTAS_VALIDAS] = {0, 1, 2, 3, 4, 5};
    bool acharNota = false;
    for (int cont = 0; cont < NOTAS_VALIDAS; cont++){
        if (nota == notas[cont]){
            acharNota = true;
        }
    }
    if (acharNota == false) {
        throw invalid_argument("NOTA -> Argumento invalido.");
    }
}

void Nota::setNota(int nota){
    validarNota(nota);
    this->nota = nota;
}

//----------- Métodos do domínio Descricao ----------- Alunos responsáveis: 190042397 / 190089539 / 190024771
void Descricao::validarDescricao(std::string descricao) {
    bool bDescricaoValida = false;
    if (descricao.length() <= 30) {
        if (descricao.find("..") != std::string::npos || descricao.find("  ") != std::string::npos) {
            bDescricaoValida = false;
        } else {
            bDescricaoValida = true;
        }
    }
    if (bDescricaoValida == false) {
        throw invalid_argument("DESCRICAO -> Argumento invalido.");
    }
}

void Descricao::setDescricao(string descricao) {
    validarDescricao(descricao);
    this->descricao = descricao;
}
