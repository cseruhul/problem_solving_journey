#include <stdio.h>
#include <string.h>

int main()
{
    char polyhedrons[20];
    int n, faces = 0;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%s", &polyhedrons);
        if (strcmp(polyhedrons, "Tetrahedron") == 0)
        {
            faces += 4;
        }
        else if (strcmp(polyhedrons, "Cube") == 0)
        {
            faces += 6;
        }
        else if (strcmp(polyhedrons, "Octahedron") == 0)
        {
            faces += 8;
        }
        else if (strcmp(polyhedrons, "Dodecahedron") == 0)
        {
            faces += 12;
        }
        else if (strcmp(polyhedrons, "Icosahedron") == 0)
        {
            faces += 20;
        }
    }

    printf("%d", faces);

    return 0;
}