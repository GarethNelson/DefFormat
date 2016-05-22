//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 2016 by Gareth Nelson (gareth@garethnelson.com)
//
// This library is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// The Lambda engine is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
//
// $Log:$
//
// DESCRIPTION:
//     Actual implementation of the .def format library
//
//-----------------------------------------------------------------------------

#include "def_format.h"
#include <stdlib.h>
#include <stdio.h>

def_database_t* read_def_fd(FILE* fd) {
    def_database_t* retval = (def_database_t*)malloc(sizeof(def_database_t));
    retval->record_count = 0;
    retval->records      = 0;
}

def_database_t* load_def_file(char* filename) {
    FILE* fd = fopen(filename,'r');
    def_database_t* retval = read_def_fd(fd);
    close(fd);
    return retval;
}

void write_def_fd(FILE* fd, def_database_t* database) {
}

void save_def_file(char* filename, def_database_t* database) {
}

char* def_lookup_val(def_database_t* database, char* record_type, char* field_name) {
      return NULL;
}

char* def_lookup_record(def_database_t* database, char* record_type, char* field_name, char* field_val) {
      return NULL;
}

def_record_t* def_getall(def_database_t* database, char* record_type) {
    return NULL;
}
