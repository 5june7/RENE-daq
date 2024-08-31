#!/usr/bin/env python3

import sys
import os
import sqlite3

def print_table_contents(dbfile):
    if not os.path.isfile(dbfile):
        print("Database file {} does not exist.".format(dbfile))
        sys.exit(1)

    conn = sqlite3.connect(dbfile)
    cursor = conn.cursor()
    
    cursor.execute("PRAGMA table_info(runcatalog)")
    columns = cursor.fetchall()
    
    if not columns:
        print("Table 'runcatalog' does not exist in {}.".format(dbfile))
        sys.exit(1)
    
    print("Columns:")
    for column in columns:
        print(column[1], column[2])
    
    cursor.execute("SELECT * FROM runcatalog")
    rows = cursor.fetchall()
    
    print("Rows:")
    for row in rows:
        print(row)
    
    conn.close()

def main():
    if len(sys.argv) != 2:
        print("Usage: python read_db.py <database_file>")
        sys.exit(1)

    dbfile = sys.argv[1]
    print_table_contents(dbfile)

if __name__ == '__main__':
    main()

