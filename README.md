# 🚗 Log de Manutenção de Serviço

Sistema de gestão de manutenção de veículos desenvolvido com **Programação Orientada a Objetos** em **C++**, criado durante a disciplina de POO no curso de Engenharia Informática.

---

## 📸 Diagrama do Projeto

<p align="center">
  <img src="https://github.com/laisfernandasales/LogManutencaoDeServico/blob/main/trabPOO_diagrama.png" alt="Diagrama POO" width="700"/>
</p>

---

## 📌 Sobre o Projeto

O objetivo foi aplicar os conceitos fundamentais da POO em C++, criando um sistema que modela o registo e gestão de serviços de manutenção para diferentes tipos de veículos, incluindo automóveis e motociclos.

---

## 🧱 Estrutura do Projeto

```
LogManutencaoDeServico/
├── main.cpp                  # Ponto de entrada do programa
├── Veiculo.h / .cpp          # Classe base abstrata de veículos
├── Automovel.h / .cpp        # Subclasse: Automóvel
├── Motociclo.h / .cpp        # Subclasse: Motociclo
├── Proprietario.h / .cpp     # Gestão de proprietários
├── Servico.h / .cpp          # Registo de serviços
├── LogServico.h / .cpp       # Log/histórico de serviços
├── Colecao.h                 # Coleção genérica
├── ColecaoHibrida.h          # Coleção híbrida de veículos
└── tabPOO_diagrama.png       # Diagrama de classes
```

---

## 🧩 Classes Principais

| Classe | Descrição |
|--------|-----------|
| `Veiculo` | Classe base abstrata com atributos comuns a todos os veículos |
| `Automovel` | Herda de `Veiculo`, representa automóveis |
| `Motociclo` | Herda de `Veiculo`, representa motociclos |
| `Proprietario` | Gere os dados dos proprietários dos veículos |
| `Servico` | Representa um serviço de manutenção realizado |
| `LogServico` | Armazena o histórico de serviços de um veículo |
| `Colecao` | Coleção genérica de objetos |
| `ColecaoHibrida` | Coleção que suporta múltiplos tipos de veículos |

---

## 🔷 Conceitos de POO Aplicados

- ✅ **Herança** — `Automovel` e `Motociclo` herdam de `Veiculo`
- ✅ **Encapsulamento** — Atributos privados com getters e setters
- ✅ **Abstração** — Classe `Veiculo` como base abstrata
- ✅ **Agregação** — `Proprietario` associado a `Veiculo`
- ✅ **Polimorfismo** — Métodos virtuais na classe base

---

## ⚙️ Como Compilar e Executar

```bash
# Clone o repositório
git clone https://github.com/laisfernandasales/LogManutencaoDeServico.git

# Acesse a pasta
cd LogManutencaoDeServico

# Compile com g++
g++ -o programa main.cpp Automovel.cpp Motociclo.cpp Proprietario.cpp Servico.cpp LogServico.cpp Veiculo.cpp

# Execute
./programa
```

---

## 👩‍💻 Autora

Feito com 💜 por **laisfernandasales**

