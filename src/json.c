#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h"
#include "json.h"

void generar_json() {
    cJSON *root = cJSON_CreateObject();

    cJSON_AddStringToObject(root, "nombre", "Karla Mendez Sanchez");
    cJSON_AddNumberToObject(root, "edad", 24);
    cJSON_AddStringToObject(root, "carnet", "B84870");
    cJSON_AddBoolToObject(root, "estudiante activo", 1);

    char *json_str = cJSON_Print(root);
    if (json_str) {
        FILE *file = fopen("datos.json", "w");
        if (file) {
            fprintf(file, "%s\n", json_str);
            fclose(file);
        }
        free(json_str);
    }

    cJSON_Delete(root);
}
