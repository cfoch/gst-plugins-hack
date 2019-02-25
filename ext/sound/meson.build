gst_hack_sound_sources = [
  'gsthacksound.c'
]

if (hacksounddep.found())
  gstface = library('gsthacksound',
    gst_hack_sound_sources,
    c_args : gst_plugins_hack_args + [ '-DGST_USE_UNSTABLE_API' ],
    include_directories : [configinc, libsinc],
    dependencies : [gst_dep, hacksounddep],
    install : true,
    install_dir : plugins_install_dir,
  )
endif
