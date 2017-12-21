#ifndef BOARD_H
#define BOARD_H

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/* Public types --------------------------------------------------------------*/
/* Public constants ----------------------------------------------------------*/
/* Public macro --------------------------------------------------------------*/
/* Public functions --------------------------------------------------------- */
void board_error_handler(void);
void board_irq_enable(void);
void board_irq_disable(void);
void board_init(void);
void board_deinit(void);
void board_sleep(void);

void board_delay_ms(uint32_t ms);
void board_get_unique_id(uint8_t *id);
uint32_t board_get_random_seed(void);

#endif /* BOARD_H */
