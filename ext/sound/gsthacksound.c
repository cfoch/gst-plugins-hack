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
#include <gst/hack/sound/gsthacksoundplayer.h>

static gboolean
hack_sound_init (GstPlugin * cheesefaceeffects)
{
  gst_element_register (cheesefaceeffects, "hacksoundplayer",
      GST_RANK_NONE, gst_hack_sound_player_get_type ());

  return TRUE;
}

GST_PLUGIN_DEFINE (GST_VERSION_MAJOR,
    GST_VERSION_MINOR,
    hacksound,
    "Template cheesefaceeffects",
    hack_sound_init,
    VERSION, GST_LICENSE, PACKAGE, ORIGIN)
