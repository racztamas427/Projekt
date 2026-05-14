#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char * string;

const string c =
"#include <stdio.h>\n"
    "\n"
    "int main()\n"
    "{\n"
    "     printf(\"hello\\n\");\n"
    "     return 0;\n"
    "}\n";
const string java ="public class Main {\n"
    "public static void main(String[] args) {\n"
    "System.out.println(\"Hello World\");\n"
    "\t}\n"
    "}\n";

const string python ="print(\"Hello, World!\")\n";

const string cs = "using System;\n"
    "\n"
    "namespace HelloWorld\n"
    " {\n"
    "  class Program\n"
    "  {\n"
    "\tstatic void Main(string[] args)\n"
    "\t{\n"
    "\t Console.WriteLine(\"Hello World!\");\n"    
    "\t}\n"
    "  }\n"
    "}\n";
const string cpp="#include <iostream>\n"
    "using namespace std;\n"
    "\n"

    "int main() {\n"
    "  cout << \"Hello World!\";\n"
    "  return 0;\n"
    "}\n";

const string bash =" #!/bin/bash\n"
        "echo \"Hello, Bash!\"\n";

void c_create()
{
    printf("%s", c);
    

}
void java_create()
{
    printf("%s", java);
}
void python_create()
{
    printf("%s", python);
}
void cs_create()
{
    printf("%s", cs);
}
void help()
{
    printf("alap v0.9.2\n"
    "\n"
    "Usage: alap <template_id> [option]\n"
    "\n"
    "Available options:\n"
    "\n"
    "-h, --help\tshow this help\n"
    "-v, --version\tversion info\n"
    "--stdout\tdon't create source file, print result to stdout\n"
    "\n"
    "Available templates:\n"
    "\n"
    "* c\t-C source code [main.c]\n"
    "* cs\t-C# source code [Program.cs]\n"
    "* java\t-Java source code [Main.java]\n"
    "* py\t-Pyton source code [main.py]\n"
    "* sh\t-Bash source code [main.sh]\n"
    );
}
void cpp_create()
{
    printf("%s", cpp);
}
void version()
{
    printf("alap v0.1.5\n");
}
void bash_create()
{
    printf("%s", bash);
}

int main(int argc, char const *argv[])
{
    if (argc ==3)
    {
        if (strcmp(argv[2], "--stdout")==0 && strcmp(argv[1], "c")==0)
        {
            c_create();
        }
        if (strcmp(argv[2], "--stdout")==0 && strcmp(argv[1], "py")==0)
        {
            python_create();
        }
        if (strcmp(argv[2], "--stdout")==0 && strcmp(argv[1], "cs")==0)
        {
            cs_create();
        }

        if (strcmp(argv[2], "--stdout")==0 && strcmp(argv[1], "java")==0)
        {
            java_create();
        }
        if (strcmp(argv[2], "--stdout")==0 && strcmp(argv[1], "sh")==0)
        {
            bash_create();
        }
       
    }
    if (argc ==2)
    {
        if (strcmp(argv[1], "-h")==0 || strcmp(argv[1], "--help")==0)
        {
            help();
        }
        if (strcmp(argv[1], "-v")==0 || strcmp(argv[1], "--version")==0)
        {
            version();
        }


        if (strcmp(argv[1], "c")==0)
        {
            string fajlnev = "main.c";
           

            FILE * fp= fopen(fajlnev, "w");
            if ( fp!= NULL)
            {
                fclose(fp);
                printf("Error!: the file '%s' already exists\n", fajlnev);
                exit(1);
            }
            else
            {
                FILE * fp= fopen(fajlnev, "w");
                fprintf(fp,"%s", c);
                fclose(fp);
            }

            
            

        }
        if ( strcmp(argv[1], "py")==0)
        {
            string fajlnev = "main.py";
            FILE * fp= fopen(fajlnev, "r");
            

            if ( fp!= NULL)
            {
                fclose(fp);
                printf("Error!: the file '%s' already exists\n", fajlnev);
                exit(1);
            }
            else
            {
                FILE * fp= fopen(fajlnev, "w");
                fprintf(fp, "%s",python);
                fclose(fp);
            }
            

            
            

        }
        if ( strcmp(argv[1], "cs")==0)
        {
            string fajlnev = "program.cs";
            FILE * fp= fopen(fajlnev, "r");
            if ( fp!= NULL)
            {
                fclose(fp);
                printf("Error!: the file '%s' already exists\n", fajlnev);
                exit(1);
            }
            else
            {
                FILE * fp= fopen(fajlnev, "w");
                fprintf(fp, "%s",cs);
                fclose(fp);
            }

            
        }

        if ( strcmp(argv[1], "java")==0)
        {
            string fajlnev = "Main.java";
            FILE * fp= fopen(fajlnev, "r");
            if ( fp!= NULL)
            {
                fclose(fp);
                printf("Error!: the file '%s' already exists\n", fajlnev);
                exit(1);
            }
            else
            {
                FILE * fp= fopen(fajlnev, "w");
                fprintf(fp, "%s",java);
                fclose(fp);
            }
            
            
        }
        if ( strcmp(argv[1], "sh")==0)
        {
            string fajlnev = "main.sh";
            FILE * fp= fopen(fajlnev, "r");
            if ( fp!= NULL)
            {
                fclose(fp);
                printf("Error!: the file '%s' already exists\n", fajlnev);
                exit(1);
            }
            else
            {
                FILE * fp= fopen(fajlnev, "w");
                fprintf(fp, "%s",bash);
                fclose(fp);
            }

            
        }
        
        


    }

    
    



    

    return 0;
}
