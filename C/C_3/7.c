Pliki nagłówkowe 
Plik nagłówkowy zawiera deklaracje naszych funkcji - jeśli 
popełniliśmy błąd i deklaracja nie zgadza się z definicją, kompilator od razu nas o tym powiadomi. 
Oprócz tego plik nagłówkowy może zawierać definicje istotnych typów lub makr

Deklaracje to uproszczona forma funkcji, która nie zawiera jej ciała. 
Umieszczając w pliku nagłówkowym .h takie formy, powodujemy, że kompilator dowiaduje się o istnieniu takich funkcji, więc wstępnie może wykonać kod, 


a w procesie linkowania, odnajdzie już definicje z pliku źródłowego sam (linkowanie łączy właśnie wszystkie pliki .cpp by powstał 1 plik .exe). 
Działa to jak klucz do skrzyni.