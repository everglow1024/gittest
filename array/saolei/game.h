

void game(void);

void space_intial(char space[][11], int x, int y);

void mask_intial(char mask[][11], int x, int y);

void space_show(char space[][11], int x, int y);

void space_mine(char space[][11], int x, int y, int *nums);

void play(char space[][11], char mask[][11], int *end_flag, int *mine_num);

void show_results(char space[][11], char mask[][11], int x, int y);
