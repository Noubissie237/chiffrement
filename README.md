# CHIFFREMENT

## Ce programme a été crée dans le but de pouvoir chiffrer et dechiffrer le contenu des fichier txt.

<h1 align="center">Fonctionnement</h1>

<h2>Crypter</h2>

<p>
    Si vous avez un fichier txt que vous souhaitez crypter, il vous suffit d'executer le programme <a href="./crypte.c">crypte</a> en tapant les commandes : <br/>
    -   <strong>gcc crypte.c -o crypte</strong><br/>
    -   <strong>./crypte nom_du_fichier_a_crypter.txt nom_du_fichier_crypté.txt</strong><br/>

</p>

<h2>Décrypter</h2>

<p>
    Si vous avez un fichier txt (préalablement crypté) que vous souhaitez décrypter, il vous suffit d'executer le programme <a href="./decrypte.c">decrypte</a> en tapant les commandes : <br/>
    -   <strong>gcc decrypte.c -o decrypte</strong><br/>
    -   <strong>./decrypte nom_du_fichier_a_decrypter.txt nom_du_fichier_décrypté.txt</strong><br/>

</p>

### NB : <mark>Pour un bon fonctionnement, il est important de donner à chaque fois les noms différents</mark>

<mark>Exemple:</mark> : si vous voulez crypter un fichier nommé testament.txt, vous pouvez executer en tapant le ./crypte testament.txt testament_crypte.txt. puis, vous pouvez supprimer le fichier testament.txt et (si vous le voulez), renommer le fichier testament_crypte.txt en testament.txt 

Si vous avez une incomprehension, vous pouvez <a href="https://wa.me/message/5M3EXSM2BMNKD1">me contacter via mon whatsApp</a>