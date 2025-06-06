
project(datos_json C)

# Archivos fuente
set(SRC_DIR src)
set(CJSON_DIR cJSON)

set(SOURCES
    ${SRC_DIR}/main.c
    ${SRC_DIR}/json.c
    ${CJSON_DIR}/cJSON.c
)

# Incluir encabezados
include_directories(${SRC_DIR} ${CJSON_DIR})

# Ejecutable
add_executable(programa ${SOURCES})
