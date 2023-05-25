#include "graphics.h"
#include <libc.h>
#include <game.h>
#include <map.h>

char buff[24];

int pid = 0;
int mutex = 0;

/* ============== HEADERS ============= */
void trigger_page_fault();
// void write_wrapper(char *msg);
// void write_msg_n_num(char *msg, int num);
void print_stats(struct stats st);
/* ==================================== */

/* ========== IMPEMENTATIONS ========== */
void trigger_page_fault() {
    write_wrapper("Imma trigger a page fault");
    char *p = 0;
    *p = 0x69;
}


void print_stats(struct stats st) {
    char *separator = "========================================\n";
    write_wrapper(separator);
    write_msg_n_num("User ticks: ", st.user_ticks);
    write_msg_n_num("System ticks: ", st.system_ticks);
    write_msg_n_num("Blocked ticks: ", st.blocked_ticks);
    write_msg_n_num("Ready ticks: ", st.ready_ticks);
    write_msg_n_num("Elapsed total ticks: ", st.elapsed_total_ticks);
    write_msg_n_num("Total transitions: ", st.total_trans);
    write_msg_n_num("Remaining ticks: ", st.remaining_ticks);
    write_wrapper(separator);
}
/* ==================================== */

void func(int i) {
    // char b[4];
    // read(b, 4);

    // write_wrapper(b);
    // write_wrapper("\n");

    mutex_lock(&mutex);
    pid = 10;
    mutex_unlock(&mutex);

    write_wrapper("Func is over\n");
    exit_thread();
}


    int __attribute__ ((__section__(".text.main")))
main(void)
{
    /* Next line, tries to move value 0 to CR3 register. This register is a privileged one, and so it will raise an exception */
    /* __asm__ __volatile__ ("mov %0, %%cr3"::"r" (0) ); */    

    struct game* game = game_new(1);
    if (game == 0) write_wrapper("Error creating game\n");
    else game_loop(game);

    g_write_xy("HolaHolacaracola", 15, 20, 10, BLACK, WHITE);
    g_draw_num(1231, 20, 11, BLACK, WHITE);

    g_draw_line('a', 10, 10, 20, 25, GREEN, GREEN);

    for(;;);
}
