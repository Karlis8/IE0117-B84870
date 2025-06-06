project('mi_programa', 'c')

cjson_dep = dependency('cjson', required: true)

srcs = ['src/main.c', 'src/json.c']

executable('programa', srcs, dependencies: cjson_dep, include_directories: 'src')
