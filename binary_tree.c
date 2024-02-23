# Définition de la classe Node
# Chaque nœud de l'arbre aura potentiellement un nœud enfant gauche, un nœud enfant droit, et stockera une valeur (key).
class Node:
    def __init__(self, key):
        self.left = None  # Pointeur vers le nœud enfant gauche
        self.right = None  # Pointeur vers le nœud enfant droit
        self.val = key  # Valeur du nœud

# Fonction pour insérer une nouvelle clé dans l'arbre binaire de recherche
def insert(root, key):
    if root is None:
        return Node(key)  # Si l'arbre est vide, crée un nouveau nœud et retourne-le
    else:
        # Si la valeur à insérer est supérieure à la valeur du nœud courant,
        # on l'insère dans le sous-arbre droit.
        if root.val < key:
            root.right = insert(root.right, key)
        # Sinon, on l'insère dans le sous-arbre gauche.
        else:
            root.left = insert(root.left, key)
    return root  # Retourne le nœud racine de l'arbre

# Fonction pour trouver la valeur minimale dans l'arbre binaire de recherche
# On continue de parcourir le sous-arbre gauche jusqu'à trouver le nœud le plus à gauche,
# qui représente la valeur minimale de l'arbre.
def minValue(node):
    current = node
    while current.left is not None:
        current = current.left 
    return current.val

# Création d'une liste non triée de plus de 20 éléments
numbers = [20, 5, 15, 9, 7, 12, 25, 30, 3, 4, 17, 10, 13, 19, 23, 24, 6, 8, 11, 2, 18]

# Construction de l'arbre binaire de recherche
# On commence par créer le nœud racine avec le premier élément de la liste
root = Node(numbers[0])
# Puis on insère les autres éléments de la liste dans l'arbre
for number in numbers[1:]:
    insert(root, number)

# Trouver la valeur minimale dans l'arbre
min_value = minValue(root)
print(min_value)  # Affiche la valeur minimale trouvée
