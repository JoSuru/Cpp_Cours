
# Construction d’une classe en langage C++
## 1-

En programmation orientée objet (POO), le processus de limiter le choix d'attributs d'une entité du
monde réel à un sous-ensemble fini et représentatif pour nos besoins est connu sous le nom d'**abstraction**.

## 2-
- **Objet informatique :** Un objet informatique est une entité au sein d'un programme qui possède un état et des
comportements. L'état d'un objet est défini par ses attributs ou propriétés, qui sont généralement des
variables. Les comportements sont définis par des méthodes (fonctions ou procédures) associées à l'objet.
Les objets sont des instances de classes et encapsulent des données et des fonctions qui travaillent sur ces
données.

- **Classe :** Une classe est un modèle ou un plan à partir duquel des objets sont créés. Elle définit les 
attributs (état) et les méthodes (comportements) que tous les objets créés à partir de la classe auront.
Une classe est donc une sorte de schéma ou de prototype pour des objets.

- **Instance de classe (ou objet) :** Une instance de classe, également appelée objet dans la littérature, est une
réalisation concrète d'une classe. Quand une classe est utilisée pour créer un objet, on dit qu'un objet 
est une instance de cette classe. Chaque instance possède les attributs et les méthodes définis dans la 
classe, mais les valeurs spécifiques des attributs peuvent varier d'une instance à l'autre.


## 4-
- Une méthode qui permet de créer une instance d'un objet est appelée un **constructeur**.
- L'identifiant d'une méthode constructeur est généralement écrit avec le même nom que la classe à laquelle il appartient.
La raison pour laquelle un constructeur ne renvoie pas de résultat, y compris un type void, est liée à sa
fonction principale. Le but d'un constructeur est d'initialiser une instance de la classe (c'est-à-dire un 
objet) lors de sa création. 


## 5-
Un **constructeur par défaut** d'une classe est un type de constructeur qui ne prend aucun argument. Il est 
appelé "par défaut" car il peut être utilisé pour créer une instance de la classe sans avoir besoin de 
fournir des arguments spécifiques. 

## 6-
Voici la convention proposée pour représenter un individu inconnu parmi les quatre types d'individus (étudiant, enseignant, administratif, technicien) :

- Classe de Base - **Personne** :

**Attributs Communs :** Nom, Prénom, Âge, Sexe, Lieu de naissance, Numéro de téléphone.

**Méthodes Communes :** manger(), afficher(), toString(), dormir().

- Classes **Dérivées** pour chaque type d'individu :

**Étudiant :** Attributs et méthodes spécifiques à un étudiant.

**Enseignant :** Attributs et méthodes spécifiques à un enseignant.

**Administratif :** Attributs et méthodes spécifiques à un administratif.

**Technicien :** Attributs et méthodes spécifiques à un technicien.

Représentation d’un Individu Inconnu :
Utiliser la classe Personne pour un individu dont le type spécifique n'est pas connu.
Laisser les attributs spécifiques au type d'individu vides ou avec des valeurs par défaut si ces informations sont inconnues.
Permettre la mise à jour des informations de l'individu pour ajouter des détails spécifiques au fur et à 
mesure qu'ils sont connus.

## 7-
- Un **constructeur par copie** crée une nouvelle instance d'une classe en copiant les valeurs des attributs 
d'une instance existante de la même classe.
- Le constructeur par copie est utilisé pour créer une copie d'un objet existant.
  Le constructeur par défaut est utilisé pour créer un nouvel objet sans avoir besoin de copier un objet existant.
- En C++, l'emploi du constructeur par copie peut être délicat et est souvent déconseillé pour les raisons suivantes :

  - **Gestion de la Mémoire :** Si l'objet contient des pointeurs, une copie superficielle peut entraîner des problèmes de partage et de libération double de la mémoire. 
  - **Coût en Performance :** La copie d'objets peut être coûteuse en termes de performance, particulièrement pour des objets de grande taille ou complexes.
  - **Comportement Inattendu :** Une implémentation incorrecte du constructeur par copie peut conduire à des bugs difficiles à détecter.
  - **Sémantique de Déplacement :** Depuis C++11, la sémantique de déplacement offre une alternative plus efficace pour transférer des ressources entre objets, rendant l'usage du constructeur par copie moins fréquent.
  - **Références Aliénées :** La copie d'objets contenant des références ou des pointeurs vers d'autres structures peut créer des dépendances non intentionnelles entre les objets.

- Pour interdire l'utilisation du constructeur par copie en C++, vous pouvez soit déclarer ce constructeur 
comme privé sans fournir d'implémentation, ce qui empêche sa création en dehors de la classe, soit 
utiliser la syntaxe de suppression de fonction introduite avec C++11. La méthode moderne consiste à 
marquer explicitement le constructeur par copie avec = delete dans la déclaration de la classe, par 
exemple MyClass(const MyClass&) = delete;. Cette approche est plus claire et indique explicitement que le constructeur par 
copie n'est pas autorisé, entraînant une erreur de compilation si une tentative de copie est effectuée.

## 8-
- Une méthode qui a été définie plusieurs fois dans une classe, mais avec des signatures différentes, 
est décrite comme étant surchargée. La surcharge de méthode est un concept de programmation orientée objet
qui permet à plusieurs méthodes dans une classe d'avoir le même nom mais des listes de paramètres 
différentes (c'est-à-dire des signatures différentes).
- La surcharge de méthodes est une pratique essentielle en programmation orientée objet qui augmente
la flexibilité, la lisibilité et la clarté du code. Elle permet à une classe de gérer différentes variantes
d'une opération sous le même nom de méthode, mais avec des paramètres différents, offrant ainsi une
meilleure conception d'API et un code plus intuitif

## 10-

- En C++, un destructeur est une méthode spéciale d'une classe qui est automatiquement appelée lorsque 
l'objet de cette classe est sur le point d'être détruit. Son rôle principal est de 
libérer les ressources allouées par l'objet et de réaliser toutes les opérations de nettoyage nécessaires.
- l'utilisation de destructeurs virtuels est une bonne pratique en C++ pour assurer la sécurité et la robustesse des 
programmes utilisant le polymorphisme.
- En C++, chaque classe nécessite un seul destructeur car chaque objet a un unique processus de destruction.

## 13-
En C++, il est nécessaire de détruire manuellement les objets créés dynamiquement pour prévenir les fuites de mémoire et assurer la libération appropriée des ressources. 

## 15-
L'utilisation de constructeurs avec liste d'initialisation en C++ offre une généralisation efficace pour
définir plusieurs constructeurs d'une classe. Elle permet une initialisation
directe et moins redondante des membres, y compris ceux qui sont const ou de types de référence. 


# Mise en œuvre de l’encapsulation

## 1-
- Pour que les attributs d'une classe en C++ soient accessibles de n'importe où, ils doivent être déclarés dans la section public de la classe.
- Rendre les attributs d'une classe public en C++ compromet l'encapsulation et peut entraîner plusieurs 
failles de sécurité et problèmes de conception. Cette pratique expose les détails internes de la classe, 
permettant une modification directe et non contrôlée des données, ce qui peut mener à des états d'objet 
invalides ou incohérents.

## 2- 
- Les attributs déclarés comme protected dans une classe C++ offrent un équilibre entre l'accessibilité et
la protection des données. Ils sont accessibles non seulement dans la classe elle-même, mais aussi dans 
ses classes dérivées, facilitant ainsi l'héritage et la réutilisation du code.
- Les attributs protected facilitent certaines formes d'héritage et de réutilisation du code, ils peuvent
compromettre l'encapsulation, rendre le code plus difficile à maintenir et à refactoriser, et augmenter le
couplage entre les classes, ce qui peut aboutir à un code moins robuste et plus sujet aux erreurs.

## 3-
L'utilisation de la zone private pour les attributs d'une classe favorise une conception solide et 
cohérente, en renforçant l'encapsulation, en réduisant le couplage, et en améliorant la maintenabilité et
la sécurité du code.

## 4-
Les méthodes de modification des attributs d'un objet, ou "setters", sont essentielles en programmation 
orientée objet pour plusieurs raisons. Elles permettent un contrôle d'accès sécurisé et centralisé aux 
attributs, facilitant la validation et la mise en œuvre de règles de gestion avant toute modification de 
l'état de l'objet.

## 5-
Les méthodes permettant de récupérer les attributs d'un objet, communément appelées "getters", sont
cruciales en programmation orientée objet pour assurer l'encapsulation et la sécurité des données. Elles 
offrent un accès contrôlé en lecture aux attributs internes d'une classe, tout en protégeant ces attributs
de modifications directes. Les getters permettent une abstraction de l'état interne de l'objet, 
garantissant que l'interface publique de la classe reste cohérente même si les détails d'implémentation 
changent. 


# Héritage et protection des membres de l’objet

## 3-Messages d'erreur et instructions problématiques :
Accès aux membres privés et protégés : Les classes filles ne peuvent pas accéder directement aux membres privés (attrPrivMere) de la classe Mere. De plus, les membres protégés (attrProtMere) ne sont accessibles que dans les classes filles et leurs sous-classes, mais pas en dehors.
Héritage privé et protégé : Avec l'héritage privé (FillePriv) et protégé (FilleProt), les membres publics et protégés de la classe Mere deviennent respectivement privés et protégés dans la classe fille. Cela signifie qu'ils ne sont pas accessibles en dehors de la classe fille et de ses sous-classes.

## 4- Compter les instances de Mere :
Pour compter les instances créées et détruites, vous pouvez ajouter un attribut statique dans la classe Mere qui est incrémenté dans le constructeur et décrémenté dans le destructeur.

## 5- Nombre d'instances de Mere et FillePub créées :
En créant une instance de chaque classe, vous créez une instance de Mere chaque fois qu'une classe fille est instanciée, car les constructeurs des classes filles appellent implicitement ou explicitement le constructeur de Mere. Ainsi, pour chaque instance de FillePub, FillePriv, FilleProt, FillePubPub, FillePubProt, FilleProtPub, et FilleProtProt, une instance de Mere est également créée. Donc, si vous créez une instance de chacune des classes, y compris Mere et FillePub, vous créez 8 instances de Mere et 1 instance de FillePub.

## 6- Appeler le constructeur de Mere avec trois arguments :
Pour systématiquement appeler le constructeur de Mere ayant trois arguments dans les constructeurs des FilleX ayant six arguments, vous devez le faire au début du constructeur de FilleX en utilisant la liste d'initialisation.

## 7-Méthode checkPolyMorphisme :
(a) Mere : Affichera "Fonction checkPolyMorphisme ‘checkant’ de la classe Mere".

(b) FillePriv : Affichera "Fonction checkPolyMorphisme ‘checkant’ de la classe FillePriv".

(c) FillePubPub : Si checkPolyMorphisme n'est pas redéfinie dans FillePubPub, elle héritera de la version de FillePub (ou Mere si non redéfinie dans FillePub). Si redéfinie, elle affichera le message correspondant.

(d) FilleProtProt : Semblable à FillePubPub, l'affichage dépendra de la redéfinition de la méthode dans les classes parentes. Si checkPolyMorphisme est définie dans FilleProtProt, elle affichera le message correspondant à FilleProtProt.
Cette méthode démontre le polymorphisme, où la méthode spécifique à appeler dépend de la classe de l'objet.


