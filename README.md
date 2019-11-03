# Game of Life
A game of life a cellular automaton invented by the English mathematician John Conway in 1970.

Komórka może znajdować się w jednym z dwóch stanów: matwa (biały kolor), żywa (czarny kolor).

Zestaw zasad przy tworzeniu nowej generacji  jest następujący:
* Martwa komórka, która ma dokładnie 3 żywych sąsiadów, staje się żywa w następnej jednostce czasu (rodzi się)
* Żywa komórka z 2 albo 3 żywymi sąsiadami pozostaje nadal żywa; przy innej liczbie sąsiadów umiera (z "samotności" albo "zatłoczenia").  
W Grze w życie stosuje się sąsiedztwo Moore'a.  

W automatach komórkowych przyjęło się, że różne stany przedstawia się za pomocą różnych kolorów komórek. W zależności od rodzaju automatu bierze się pod uwagę różne rodzaje sąsiedztwa, np w siatkach dwuwymiarowych:

- sąsiedztwo Moore'a: 8 przylegających komórek (znajdujących się: na południu, na południowym-zachodzie, na zachodzie, na północnym-zachodzie, na północy, na północnym-wschodzie, na wschodzie i na południowym-wschodzie).
- sąsiedztwo von Neumanna: 4 przylegające komórki (na południu, zachodzie, północy i wschodzie).
! [] (Gospers_glider_gun-giphy.gif)

Powyżej przedstawione zostały w działaniu automat komórkowy. Po lewej -- Gra w życie (Life) Johna Conwaya. Jak widać, w Grze w życie komórka może być w jednym z dwóch stanów (czarny/biały).

Program umożliwia:

- wczytywanie do programu początkowej konfiguracji generacji z pliku o wybranym formacie,

- przeprowadzenie zadanej liczby generacji,

- wygenerowanie N obrazów przedstawiających stan wybranych generacji (np. w postaci plików PNG),

- zapisywanie bieżącej generacji do pliku (który może zostać potem wczytany).

Należy zwrócić uwagę na prawidłowe rozdzielenie "wymiennych" elementów programu, tj. sąsiedztwo, zestaw zasad, siatka, rysowanie itp.
