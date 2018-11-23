#ifndef __RISCV32_MSC02_SOC_H_
#define __RISCV32_MSC02_SOC_H_

#include <soc_common.h>

/* GPIO Interrupts */
//#define MSC02_GPIO_0_IRQ           (RISCV_MAX_GENERIC_IRQ + 0)
//#define MSC02_GPIO_1_IRQ           (RISCV_MAX_GENERIC_IRQ + 1)
//#define MSC02_GPIO_2_IRQ           (RISCV_MAX_GENERIC_IRQ + 2)
//#define MSC02_GPIO_3_IRQ           (RISCV_MAX_GENERIC_IRQ + 3)
//#define MSC02_GPIO_4_IRQ           (RISCV_MAX_GENERIC_IRQ + 4)
//#define MSC02_GPIO_5_IRQ           (RISCV_MAX_GENERIC_IRQ + 5)
//#define MSC02_GPIO_6_IRQ           (RISCV_MAX_GENERIC_IRQ + 6)
//#define MSC02_GPIO_7_IRQ           (RISCV_MAX_GENERIC_IRQ + 7)
//#define MSC02_GPIO_8_IRQ           (RISCV_MAX_GENERIC_IRQ + 8)
//#define MSC02_GPIO_9_IRQ           (RISCV_MAX_GENERIC_IRQ + 9)
//#define MSC02_GPIO_10_IRQ          (RISCV_MAX_GENERIC_IRQ + 10)
//#define MSC02_GPIO_11_IRQ          (RISCV_MAX_GENERIC_IRQ + 11)
//#define MSC02_GPIO_12_IRQ          (RISCV_MAX_GENERIC_IRQ + 12)
//#define MSC02_GPIO_13_IRQ          (RISCV_MAX_GENERIC_IRQ + 13)
//#define MSC02_GPIO_14_IRQ          (RISCV_MAX_GENERIC_IRQ + 14)
//#define MSC02_GPIO_15_IRQ          (RISCV_MAX_GENERIC_IRQ + 15)
//#define MSC02_GPIO_16_IRQ          (RISCV_MAX_GENERIC_IRQ + 16)
//#define MSC02_GPIO_17_IRQ          (RISCV_MAX_GENERIC_IRQ + 17)
//#define MSC02_GPIO_18_IRQ          (RISCV_MAX_GENERIC_IRQ + 18)
//#define MSC02_GPIO_19_IRQ          (RISCV_MAX_GENERIC_IRQ + 19)
//#define MSC02_GPIO_20_IRQ          (RISCV_MAX_GENERIC_IRQ + 20)
//#define MSC02_GPIO_21_IRQ          (RISCV_MAX_GENERIC_IRQ + 21)
//#define MSC02_GPIO_22_IRQ          (RISCV_MAX_GENERIC_IRQ + 22)
//#define MSC02_GPIO_23_IRQ          (RISCV_MAX_GENERIC_IRQ + 23)
//#define MSC02_GPIO_24_IRQ          (RISCV_MAX_GENERIC_IRQ + 24)
//#define MSC02_GPIO_25_IRQ          (RISCV_MAX_GENERIC_IRQ + 25)
//#define MSC02_GPIO_26_IRQ          (RISCV_MAX_GENERIC_IRQ + 26)
//#define MSC02_GPIO_27_IRQ          (RISCV_MAX_GENERIC_IRQ + 27)
//#define MSC02_GPIO_28_IRQ          (RISCV_MAX_GENERIC_IRQ + 28)
//#define MSC02_GPIO_29_IRQ          (RISCV_MAX_GENERIC_IRQ + 29)
//#define MSC02_GPIO_30_IRQ          (RISCV_MAX_GENERIC_IRQ + 30)
//#define MSC02_GPIO_31_IRQ          (RISCV_MAX_GENERIC_IRQ + 31)

/* UART Configuration */
//#define MSC02_UART_0_BASE_ADDR         0x70001000
//#define MSC02_UART_0_LINECFG           0x1

/* GPIO Configuration */
//#define MSC02_GPIO_0_BASE_ADDR         0x70002000

/* Platform Level Interrupt Controller Configuration */
//#define MSC02_PLIC_BASE_ADDR           0x40000000
//#define MSC02_PLIC_PRIO_BASE_ADDR      MSC02_PLIC_BASE_ADDR
//#define MSC02_PLIC_IRQ_EN_BASE_ADDR    (MSC02_PLIC_BASE_ADDR + 0x2000)
//#define MSC02_PLIC_REG_BASE_ADDR       (MSC02_PLIC_BASE_ADDR + 0x200000)

//#define MSC02_PLIC_MAX_PRIORITY        7

/* Clock controller. */
//#define PRCI_BASE_ADDR               0x44000000

/* Timer configuration */
#define RISCV_MTIME_BASE             0x80000010
#define RISCV_MTIMECMP_BASE          0x80000014

/* lib-c hooks required RAM defined variables */
#define RISCV_RAM_BASE               CONFIG_RISCV_RAM_BASE_ADDR
#define RISCV_RAM_SIZE               CONFIG_RISCV_RAM_SIZE

#endif /* __RISCV32_MSC02_SOC_H_ */
