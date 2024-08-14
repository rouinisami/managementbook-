CREATE TABLE BOOKS (
        "id" INTEGER PRIMARY KEY,
        "name" TEXT  NOT NULL,
        "auth" TEXT NOT NULL,
        "price " INTEGER NOT NULL,
        "qty" INTEGER NOT NULL
);
CREATE TABLE suppliers (
         "id" INTEGER PRIMARY KEY AUTOINCREMENT,
         "name" TEXT,
         "phn" INT,
         "addr_line1" TEXT,
         "addr_line2" TEXT,
         "addr_city" TEXT,
         "addr_state" TEXT
);

CREATE table purchases (
         "ord_id" INTEGER,
	 "book_id" INTEGER NOT NULL,
	 "sup_id" INTEGER NOT NULL,
	 "qty" INTEGER  NOT NULL,
	 "dt_ordered" DATE NOT NULL,
	 "eta" INTEGER,
	 "received" TEXT DEFAULT "F",
	 "inv" INT,
         PRIMARY KEY(ord_id),
         FOREIGN KEY(book_id) REFERENCES BOOKS(id),
         FOREIGN KEY(sup_id) REFERENCES suppliers(id)
);

 INSERT INTO purchases(book_id, sup_id, qty, dt_ordered, eta) values (1,6,2,CURRENT_DATE, DATE(CURRENT_DATE,'+1 YEAR'));