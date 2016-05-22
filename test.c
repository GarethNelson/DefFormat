#include "def_format.h"

int main() {
    def_database_t* users_db = load_def_file("test.def");

    int rec=0;
    int f=0;
    for(rec=0; rec<= users_db->record_count; rec++) {
        printf("SECTION %s\n",users_db->records[rec].record_type);
        for(f=0; f<= users_db->records[rec].field_count; f++) {
            printf("\tFIELD %s = %s\n",users_db->records[rec].fields[f].field_name,
                                       users_db->records[rec].fields[f].field_val);
        }
    }
    return 0;
}
