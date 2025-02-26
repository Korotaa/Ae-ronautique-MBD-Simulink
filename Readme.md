### **Binome : Dodo Mamane Abari**


 **Modélisation d’un Système de carburant d’avion**

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.001.jpeg)


1. **Présentation<a name="_page2_x72.00_y72.00"></a> du projet**

Le projet consiste en la modélisation d’un système de carburant pour avion en respectant un certain nombre de contraintes. En effet, il s'agit de déterminer la masse du carburant en se basant sur les informations provenant de différents capteurs et en appliquant les formules appropriées. Ce projet s’inscrit dans le cadre du module de Mécatronique. Les objectifs du projet sont :

- La modélisation du système de carburant
- Utilisation du cycle de développement en V
- La génération du code
- Les tests unitaires et système
2. **le<a name="_page2_x72.00_y260.49"></a> systèmes de carburant**
1. **Spécification<a name="_page2_x72.00_y304.29"></a> (cahier de charge)**

Le système de carburant, est un système dont les fonctions principales peuvent être résumées à :

- Fonction de mesure : mesure du carburant dans les réservoirs de l’avion
- Fonction de Management : commande des organes du ou des circuits de circulation du carburant (ravitaillement au sol, en vol, transfert …)

L’objectif du système à modéliser est d’obtenir la masse du carburant dans les réservoirs. Pour ce faire, le système doit en mesure de modéliser les éléments suivants :

- Capteur FCS (Fuel Characteristic Sensor) qui combine les 3 capteurs suivants :
  - Une sonde de température
  - Un densimètre (capteur de densité)
  - Un CIC
- Capteurs Jauge :
  - La jauge permet de mesurer la hauteur de fluide dans les réservoirs.
- En prenant les informations données par ces capteurs, le système à modéliser doit déterminer la masse du carburant dans le réservoir.
2. **Conception<a name="_page2_x72.00_y631.60"></a> générale**

A partir des spécifications , est conçu le système suivant:

La figure ci-dessus représente le système de manière la plus générale, à l’entrée du système sont les données récupérées à partir des capteurs et à sa sortie la masse.

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.002.jpeg)

3. **conception<a name="_page3_x72.00_y347.48"></a> détaillée**
1. **Architecture du bloc de calcule de la capacité active**

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.003.png) ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.004.png)

2. **Architecture du bloc de calcul de la densité k\_CIC**

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.005.png) ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.006.png)

3. **Architecture du bloc de calcul de la température**

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.007.png) ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.008.png)

4. **Architecture du bloc de calcul de la hauteur du probe hp**

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.009.png) ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.010.png)

5. **Architecture du bloc d calcul de la densité D**

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.011.png) ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.012.png)

6. **Architecture du bloc de calcul de la Masse**

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.013.png)

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.014.png)

3. **Codage**

<a name="_page5_x72.00_y311.57"></a>Pour le codage l’outil utilisé est Simulink, pour des raisons de flexibilité et rapidité. Le model based design est aujourd’hui la tendance car il permet au programmeur de se concentrer sur la modeĺisation du système mais aussi il permet de réduire le TTM (Time To Market).

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.015.png) Simulink est une plate-forme de simulation multi-domaine et de modélisation

de systèmes dynamiques. Il fournit un environnement graphique et un ensemble de bibliothèques contenant des blocs de modélisation qui permettent le design précis, la simulation, l’implémentation et le contrôle de systèmes de communications et de traitement du signal. Simulink est intégré à MATLAB, fournissant ainsi un accès immédiat aux nombreux outils de développement algorithmique, de visualisation et d’analyse de données de MATLAB. (Source Wikipédia)

4. **Tests**
1. <a name="_page5_x72.00_y553.10"></a>**Tests<a name="_page5_x72.00_y576.91"></a> Unitaires**
1. **Tests<a name="_page5_x72.00_y595.42"></a> Systèmes**

Constantes utilisés pour le test système

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.016.png)

Pour ces valeurs on obtient les résultats suivant:

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.017.jpeg)

**Masse de carburant = -151.5 Température = 10.01**

5. **Génération<a name="_page6_x72.00_y570.19"></a> du code**

La génération est faite à partir de l’outil Embedded Coder de matlab. voir le dossier code pour consulter le code.

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.018.jpeg)

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.019.png)

6. **Conclusion**

<a name="_page7_x72.00_y505.73"></a>Les étapes de réalisation du projet suivent le cycle en V. D’abord il nous a fallu connaître les exigences du projet et à partir de ces exigences nous avons mis en place une architecture générale de notre système appelée architecture haut niveau qui correspond aux exigences de haut niveau. A partir de cette architecture nous adoptons une approche systémique en décomposant le HLR en sous système afin de mettre en évidence le LLR qui correspond aux exigences de bas niveaux. Une fois cette étape terminée nous avons entamé l’étape de l’implémentation qui consiste ici en la génération du code. Et pour finir vient la phase des tests( tests unitaires et tests systèmes). On a vérifié ici si pour les mêmes entrées le résultat obtenu en exécutant le code généré est le même que celui du schéma bloc. Cela fait partie des étapes de tests de la couverture du code.

**Annexe**

1. **Les formules Utilisées**
- La capacité électrique

  ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.020.png)

  ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.021.png)

- La capacité à vide

  ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.022.png)

- La capacité active

  ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.023.png)

- La température![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.024.png)
- La permittivité

  ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.025.png)

- La densité

  ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.026.png)

- La hauteur du probe

  ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.027.png)

- Le volume

  ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.028.png)

- La masse de carburant

  ![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.029.png)

2. **Les constantes Utilisées**

![](./markdown_img/Aspose.Words.bd2314d6-2f07-4a67-93ef-1625283f4565.030.jpeg)
