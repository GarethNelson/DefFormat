#include "def_format.h"

int main() {
    printf("Reading test.def...\n");
    def_database_t* users_db = load_def_file("test.def");

    printf("Raw dump:\n");
    int rec=0;
    int f=0;
    for(rec=0; rec< users_db->record_count; rec++) {
        printf("SECTION %s\n",users_db->records[rec].record_type);
        for(f=0; f< users_db->records[rec].field_count; f++) {
            printf("\tFIELD %s = %s\n",users_db->records[rec].fields[f].field_name,
                                       users_db->records[rec].fields[f].field_val);
        }
    }

    printf("\n\nReading a few values:\n");
    char* server_listen_ip   = def_lookup_val(users_db,"SERVER","LISTENIP");
    char* server_listen_port = def_lookup_val(users_db,"SERVER","LISTENPORT");
    printf("Server should listen to %s:%s if this was real\n",server_listen_ip,server_listen_port);

    printf("\n\nLooking up my user profile:\n");
    def_record_t* my_profile = def_lookup_record(users_db, "USER", "USERNAME", "gareth");
    for(f=0; f< my_profile->field_count; f++) {
        printf("%s=%s\n",my_profile->fields[f].field_name,
                       my_profile->fields[f].field_val);
    }
    return 0;
}
