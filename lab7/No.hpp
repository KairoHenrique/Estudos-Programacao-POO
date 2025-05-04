
#ifndef NO_HPP
#define NO_HPP

template <typename T>
class No {
public:
    T dado;
    No* prox;

    No(T dado) : dado(dado), prox(nullptr) {}
};

#endif
