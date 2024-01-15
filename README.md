
Compilation
-----------

`g++ -std=c++17 -o hello hello.cpp`

ou bien 

  compilation seule : `g++ -c a.cpp b.cpp c.cpp`

  editiion de lien : `g++ -o exe.out a.o b.o c.o`

option de compilation

  `-Wfatal-errors` : pour arreter la compilation a la 1ere erreur

Execution
---------

`./hello-world`


Commandes Git
-------------

- git status
- git add fichier.cpp
- git commit -m "first commit"
- git pull origin master (pour mettre a jour le depot distant sur le local)
- git push origin master (pour mettre a jour le depot local sur le distant)
