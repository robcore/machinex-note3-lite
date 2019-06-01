/*
 * es325-slim.h  --  Audience eS325 slimbus interface
 *
 * Copyright 2011 Audience, Inc.
 *
 * Author: Greg Clemson <gclemson@audience.com>
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ES325_SLIM_H
#define _ES325_SLIM_H

void es325_init_slim_slave(struct slim_device *sbdev);

extern struct slim_driver es325_slim_driver;

extern struct snd_soc_dai_ops es325_slim_port_dai_ops;

#endif
