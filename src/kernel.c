#include "printf.h"
#include "utils.h"
#include "mini_uart.h"

void kernel_main(void)
{
    uart_init();
    init_print(0, putc);

    int el = get_el();
    printf("Exception Level: %d \r\n", el);

    while(1) {
        uart_send(uart_recv());
    }
}
