CREATE TABLE tbUczniowie (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    imie TEXT,
    plec INTEGER,
    data_ur DATA,
    awatar BLOB,
    egzamin INTEGER,
    srednia_ocen DECIMAL,
    uwagi TEXT,
);

CREATE TABLE tbOddzialy(
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    Oznaczenie TEXT,
    RokNaboru TEXT,
    RokMatury TEXT
);
