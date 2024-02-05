Methodologie Test Driven Development - TDD
------------------------------------------

- on part du main, et
- on modifie le code pour que ca compile



Compilation et edition de lien
------------------------------

`g++ -std=c++17 -Wfatal-errors -o program hello.cpp`



  compilation seule : `g++ -c a.cpp b.cpp c.cpp`

  editiion de lien : `g++ -o exe.out a.o b.o c.o`

option de compilation

  `-Wfatal-errors` : pour arreter la compilation a la 1ere erreur
  
  `-std=c++17` : pour compiler en C++17

  `-g` : pour avoir les symboles de compilation et il faut 

  - configurer le fichier .vscode/launch.json de VSCode en modifiant la ligne suivante
  - `"program": "${workspaceFolder}/chap-02/program"`

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
- git branch test         // creation de la branche en local
- git checkout test      // changement de branche
- git log                // infos et HEAD
- git push origin test   // pour pousser la branche test
- git checkout master    // on revient sur master
- git merge test         // on merge la branche test
- git vommit -m "merge de la branche de test"
- git push origin master
- git branch -d test    // suppression de la branche test en local si les merges sont ok
- git branch -D test    // suppression de la branche test en local sans verification
- git push origin -d test  // suppression de la branche test distante si les merges sont ok
- git push origin -D test  // suppression de la branche test distante sans verification


