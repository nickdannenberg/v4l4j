/*
* Copyright (C) 2007-2008 Gilles Gigan (gilles.gigan@gmail.com)
* eResearch Centre, James Cook University (eresearch.jcu.edu.au)
*
* This program was developed as part of the ARCHER project
* (Australian Research Enabling Environment) funded by a   
* Systemic Infrastructure Initiative (SII) grant and supported by the Australian
* Department of Innovation, Industry, Science and Research
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public  License as published by the
* Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE.  
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#ifndef H_PWC_PROBE
#define H_PWC_PROBE

#include "v4l2-input.h"

#define PWC_PROBE_INDEX	0
int pwc_driver_probe(struct capture_device *, struct control_list*);
int pwc_list_ctrl(struct capture_device *, struct control_list *, struct v4l2_queryctrl *);
int pwc_get_ctrl(struct capture_device *,  struct v4l2_queryctrl *);
int pwc_set_ctrl(struct capture_device *, struct v4l2_queryctrl *, int);

#endif /*H_PWC_PROBE*/