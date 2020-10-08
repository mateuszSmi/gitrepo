CREATE TABLE tbOddzialy (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    Oznaczenie CHAR(3),
    RokNaboru CHAR(4),
    RokMatury CHAR(4)
    
);

CREATE TABLE tbUczniowie (
    id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
    imie TEXT,
    nazwisko TEXT,
    plec INTEGER,
    data_ur DATE,
    awatar blob,
    egzamin INTEGER,
    srednia_ocen DECIMAL,
    uwagi TEXT,
    
    klasa_id INTEGER,
    FORGEIN KEY (klasa_id) REFERENCES tbOddzialy (id)
);
