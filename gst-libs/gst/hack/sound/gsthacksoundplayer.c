/*
 * GStreamer Plugins Hack
 * Copyright (C) 2018 Fabian Orccon <cfoch.fabian@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gst/gst.h>

#include "gsthacksoundplayer.h"

GST_DEBUG_CATEGORY_STATIC (gst_hack_sound_player_debug);
#define GST_CAT_DEFAULT gst_hack_sound_player_debug

enum
{
  /* FILL ME */
  LAST_SIGNAL
};

enum
{
  PROP_0
};

static void
gst_hack_sound_player_class_init (GstHackSoundPlayerClass * klass)
{
}

static void
gst_hack_sound_player_init (GstHackSoundPlayer * filter)
{
}

GstElement *
gst_hack_sound_player_new (const gchar * name)
{
  return gst_element_factory_make ("hacksoundplayer", name);
}

