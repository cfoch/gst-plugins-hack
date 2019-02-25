examples = ['simple_player']

foreach example : examples
  exe_name = example
  src_file = '@0@.c'.format(example)

  executable(exe_name,
    src_file,
    include_directories: [configinc, libsinc],
    dependencies: [gst_dep],
    c_args: ['-DHAVE_CONFIG_H=1'] + [ '-DGST_USE_UNSTABLE_API=1' ],
    install: false)
endforeach
