#ifndef GAMESOLVER_H
#define GAMESOLVER_H

void* Game_new(double **t_A, int t_m, int t_n);
void Game_delete(void *__this__);
void Game_solve(void *__this__);
void Game_optstrat(void *__this__, bool t_player, double *r_weights);
double Game_value(void *__this__, bool t_player);

#endif // GAMESOLVER_H
