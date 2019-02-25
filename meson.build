project('gst-plugins-hack', 'c',
        version : '1.13.0.1',
        meson_version : '>= 0.40.1')

# GStreamer version check.
gst_version = meson.project_version()
version_arr = gst_version.split('.')
gst_version_major = version_arr[0].to_int()
gst_version_minor = version_arr[1].to_int()
gst_version_micro = version_arr[2].to_int()
 if version_arr.length() == 4
  gst_version_nano = version_arr[3].to_int()
else
  gst_version_nano = 0
endif
gst_req = '>= @0@.@1@.0'.format(gst_version_major, gst_version_minor)

api_version = '1.0'
soversion = 0
curversion = gst_version_minor * 100 + gst_version_micro
libversion = '@0@.@1@.0'.format(soversion, curversion)

plugins_install_dir = join_paths(get_option('libdir'), 'gstreamer-1.0')

prefix = get_option('prefix')
datadir = join_paths(prefix, get_option('datadir'))

# Create config file
cc = meson.get_compiler('c')
cdata = configuration_data()
cdata.set('GST_LICENSE', '"LGPL"')
cdata.set('GST_PACKAGE_ORIGIN', '"c"')
cdata.set('GST_PACKAGE_NAME', '"Gstreamer Plugins Hack"')
cdata.set('PACKAGE', '"gst-plugins-hss"')
cdata.set('VERSION', '"@0@"'.format(gst_version))
cdata.set('ORIGIN', '"https://foo.com"')
# Symbol visibility
if cc.get_id() == 'msvc'
  export_define = '__declspec(dllexport) extern'
elif cc.has_argument('-fvisibility=hidden')
  add_project_arguments('-fvisibility=hidden', language: 'c')
  export_define = 'extern __attribute__ ((visibility ("default")))'
else
  export_define = 'extern'
endif
# Passing this through the command line would be too messy
cdata.set('GST_API_EXPORT', export_define)

configure_file(output : 'config.h', configuration : cdata)

# Include 'config.h'.
configinc = include_directories('.')

# GStreamer dependencies
gst_dep = dependency('gstreamer-1.0', version : gst_req,
  fallback : ['gstreamer', 'gst_dep'])
gstbase_dep = dependency('gstreamer-base-1.0', version : gst_req,
  fallback : ['gstreamer', 'gst_base_dep'])

gst_plugins_hack_args = ['-DHAVE_CONFIG_H']
libsinc = include_directories('gst-libs')

subdir('gst-libs')
subdir('ext')
subdir('tests')
