#ifndef GAME_H
#define GAME_H

class Action {
public:
    int index;
    bool player;
    Action() {}
    Action(int idx, bool p) : index(idx), player(p) {}
};

class Game {
private:
    double **T;
    int m, n;
    int m_max, n_max;
    Action *X, *Y;
    double value_offset;

    void init(double **t_A, int t_m, int t_n);
    int compare_rows(int r1, int r2);
    int compare_columns(int c1, int c2);
    void remove_row(int r);
    void remove_column(int c);
    bool eliminate_dominated_rows();
    bool eliminate_dominated_columns();

public:
    Game(double **t_A, int t_m, int t_n);
    ~Game();

    void solve();
    void optstrat(bool t_player, double *r_weights);
    double value(bool t_player);
};

#endif // GAME_H
