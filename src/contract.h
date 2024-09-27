#ifndef CONTRATO_H
#define CONTRATO_H

#include <string>

class Contrato {
private:
    int id;
    int userId;  
    std::string descricao;
    std::string dataInicio;
    std::string dataFim;

public:
    Contrato(int id, int userId, const std::string &descricao, const std::string &dataInicio, const std::string &dataFim)
        : id(id), userId(userId), descricao(descricao), dataInicio(dataInicio), dataFim(dataFim) {}

    int getId() const { return id; }
    int getUserId() const { return userId; }
    std::string getDescricao() const { return descricao; }
    std::string getDataInicio() const { return dataInicio; }
    std::string getDataFim() const { return dataFim; }

    void setDescricao(const std::string &newDescricao) { descricao = newDescricao; }
    void setDataInicio(const std::string &newDataInicio) { dataInicio = newDataInicio; }
    void setDataFim(const std::string &newDataFim) { dataFim = newDataFim; }
};

#endif
