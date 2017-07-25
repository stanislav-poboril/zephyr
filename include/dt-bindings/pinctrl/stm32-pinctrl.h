/*
 * Copyright (c) 2017 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _STM32_PINCTRL_H_
#define _STM32_PINCTRL_H_

#include <dt-bindings/pinctrl/stm32-pinctrl-common.h>
/**
 * @brief PIN configuration bitfield
 *
 * Pin configuration is coded with the following
 * fields
 *    Alternate Function  [ 0 : 7 ]
 *    GPIO Mode           [ 8 : 9 ]
 *    GPIO Output type    [ 10 ]
 *    GPIO Speed          [ 11 : 12 ]
 *    GPIO PUPD config    [ 13 : 14 ]
 *
 * Applicable to STM32F3, STM32F4, STM32L4 series
 */

#define STM32_AFR_MASK			0xF

/* GPIO Mode */
#define STM32_MODER_INPUT_MODE		(0x0<<STM32_MODER_SHIFT)
#define STM32_MODER_OUTPUT_MODE		(0x1<<STM32_MODER_SHIFT)
#define STM32_MODER_ALT_MODE		(0x2<<STM32_MODER_SHIFT)
#define STM32_MODER_ANALOG_MODE	 	(0x3<<STM32_MODER_SHIFT)
#define STM32_MODER_MASK	 	0x3
#define STM32_MODER_SHIFT		4

/* GPIO Output type */
#define STM32_OTYPER_PUSH_PULL		(0x0<<STM32_OTYPER_SHIFT)
#define STM32_OTYPER_OPEN_DRAIN		(0x1<<STM32_OTYPER_SHIFT)
#define STM32_OTYPER_MASK		0x1
#define STM32_OTYPER_SHIFT		6

/* GPIO speed */
#define STM32_OSPEEDR_LOW_SPEED		(0x0<<STM32_OSPEEDR_SHIFT)
#define STM32_OSPEEDR_MEDIUM_SPEED	(0x1<<STM32_OSPEEDR_SHIFT)
#define STM32_OSPEEDR_HIGH_SPEED	(0x2<<STM32_OSPEEDR_SHIFT)
#define STM32_OSPEEDR_VERY_HIGH_SPEED	(0x3<<STM32_OSPEEDR_SHIFT)
#define STM32_OSPEEDR_MASK		0x3
#define STM32_OSPEEDR_SHIFT		7

/* GPIO High impedance/Pull-up/pull-down */
#define STM32_PUPDR_NO_PULL		(0x0<<STM32_PUPDR_SHIFT)
#define STM32_PUPDR_PULL_UP		(0x1<<STM32_PUPDR_SHIFT)
#define STM32_PUPDR_PULL_DOWN		(0x2<<STM32_PUPDR_SHIFT)
#define STM32_PUPDR_MASK		0x3
#define STM32_PUPDR_SHIFT		9

/* Usefull definitions */
#define STM32_PUSHPULL_NOPULL    (STM32_OTYPER_PUSH_PULL | STM32_PUPDR_NO_PULL)
#define STM32_OPENDRAIN_PULLUP   (STM32_OTYPER_OPEN_DRAIN | STM32_PUPDR_PULL_UP)
#define STM32_PUSHPULL_PULLUP	 (STM32_OTYPER_PUSH_PULL | STM32_PUPDR_PULL_UP)

/* Alternate functions numbers*/
#define	STM32_FUNC_ALT_0 0
#define	STM32_FUNC_ALT_1 1
#define	STM32_FUNC_ALT_2 2
#define	STM32_FUNC_ALT_3 3
#define	STM32_FUNC_ALT_4 4
#define	STM32_FUNC_ALT_5 5
#define	STM32_FUNC_ALT_6 6
#define	STM32_FUNC_ALT_7 7
#define	STM32_FUNC_ALT_8 8
#define	STM32_FUNC_ALT_9 9
#define	STM32_FUNC_ALT_10 10
#define	STM32_FUNC_ALT_11 11
#define	STM32_FUNC_ALT_12 12
#define	STM32_FUNC_ALT_13 13
#define	STM32_FUNC_ALT_14 14
#define	STM32_FUNC_ALT_15 15

/* Alternate functions definitions */
#define	STM32_PINMUX_ALT_FUNC_0 (STM32_FUNC_ALT_0 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_1 (STM32_FUNC_ALT_1 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_2 (STM32_FUNC_ALT_2 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_3 (STM32_FUNC_ALT_3 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_4 (STM32_FUNC_ALT_4 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_5 (STM32_FUNC_ALT_5 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_6 (STM32_FUNC_ALT_6 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_7 (STM32_FUNC_ALT_7 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_8 (STM32_FUNC_ALT_8 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_9 (STM32_FUNC_ALT_9 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_10 (STM32_FUNC_ALT_10 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_11 (STM32_FUNC_ALT_11 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_12 (STM32_FUNC_ALT_12 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_13 (STM32_FUNC_ALT_13 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_14 (STM32_FUNC_ALT_14 | STM32_MODER_ALT_MODE)
#define	STM32_PINMUX_ALT_FUNC_15 (STM32_FUNC_ALT_15 | STM32_MODER_ALT_MODE)

#endif	/* _STM32_PINCTRL_H_ */
