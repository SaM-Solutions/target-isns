/*
 * (C) Copyright 2013
 * Christophe Vu-Brugier <cvubrugier@yahoo.fr>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __ISNS_H__
#define __ISNS_H__

int isns_handle(bool is_timeout, int *timeout);

int isns_scn_handle(bool is_accept);

int isns_init(char *addr, uint16_t isns_port);

void isns_exit(void);

void isns_target_register(char *name);

void isns_target_deregister(char *name);

#endif
