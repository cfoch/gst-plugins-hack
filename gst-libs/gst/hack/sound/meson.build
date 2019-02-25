hack_sound_sources = [
  'gsthacksoundplayer.c'
]

hack_sound_headers = [
  'gsthacksoundplayer.h',
  'hacksound-prelude.h'
]

gsthacksound = library('gsthacksound-@0@'.format(api_version),
  hack_sound_sources + hack_sound_headers,
  c_args : gst_plugins_hack_args + ['-DBUILDING_GST_HACK_SOUND'],
  include_directories : [configinc, libsinc],
  version : libversion,
  soversion : soversion,
  install : true,
  dependencies : [gst_dep, gstbase_dep]
)

hacksounddep = declare_dependency(
  link_with: gsthacksound,
  include_directories : [libsinc],
  dependencies : [gst_dep]
)

install_headers(hack_sound_headers, subdir : 'gstreamer-1.0/gst/hack/sound')
