
    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>
    #include<windows.h>
    #include<string.h>

    char player1[101] = "Player 1";
    char player2[101] = "Cirilla Fiona Elen Riannon";

    /** IMPORTANT NOTE:
        This program is being tried to use random player1 names.
        Not yet completed. Running now might result errors! */

    void wait();
    void names( int player );
    void rules();

    /// Single player computer functions

    void computer_names();
    int computer_random( int ability1, int ability2, int ability3 );

    /// Battle functions

    void battle_wizard_wizard(int player);

    void battle_wizard_knight(int player);
    void battle_knight_wizard(int player);

    void battle_wizard_archer(int player);
    void battle_archer_wizard(int player);

    void battle_knight_knight(int player);

    void battle_knight_archer(int player);
    void battle_archer_knight(int player);

    void battle_archer_archer(int player);

    /// Animations

    void random_player1();
    void random_player2();

    void wizard_vs_wizard_hit();
    void wizard_vs_knight_hit();
    void wizard_vs_archer_hit();
    void wizard_vs_wizard_heal();
    void wizard_vs_knight_heal();
    void wizard_vs_archer_heal();
    void wizard_vs_wizard_nothit();
    void wizard_vs_knight_nothit();
    void wizard_vs_archer_nothit();

    void knight_vs_knight();
    void knight_vs_wizard();
    void knight_vs_archer();

 /**void knight_vs_knight_lance();
    void knight_vs_wizard_lance(); /// Lance animation function will be completed later
    void knight_vs_archer_lance();*/

    void archer_vs_archer_hit();
    void archer_vs_wizard_hit();
    void archer_vs_knight_hit();
    void archer_vs_archer_nothit();
    void archer_vs_wizard_nothit();
    void archer_vs_knight_nothit();


    /// Action functions

    int wizard_fire();
    int wizard_thunder();
    int wizard_heal();
    int wizard_freeze();

    int knight_sword();
    int knight_lance();

    int archer_arrow();
    int archer_farrow();
    int archer_triarrow();

    /// Main Function Starts------------------------------------------------------------------

    int main()
    {
        srand(time(NULL));

        int player; /// 1 player or 2 player
        int a;      /// game rules skip or not
        int p1, p2; /// player 1/2 character choice
        char yesno;



        /// will be organized after one player mode

        while ( 1 )/// For yes no question
        {
            system("cls");
            puts("\n      Welcome To 1 versus 1 Duel Game!\n");
            Sleep(500);
            puts("Please enter 1 to play one player\nPlease enter 2 to play two player ");
            scanf("%d", &player);

            switch ( player )
            {

                case 1: /// will be completed
                //*player2 = computer();  // trying to add random names

                    puts("Please wait few seconds. Preparing game\n");
                    wait();
                    Sleep(300);
                    system("cls");

                    names(player);
                    Sleep(1000);
                    system("cls");

                    printf("Welcome one player mode %s!\n\n", player1);
                    Sleep(1000);

                    puts("In order to learn game rules please press 1 ");
                    Sleep(500);
                    puts("In order to skip game rules page, please press 2 ");
                    scanf("%d", &a);


                    if ( a == 1 )
                        rules();

                        system("cls");

                    printf("%s, please choose your character\n\n", player1);
                    Sleep(250);
                    puts("Press 1 to Wizard");
                    Sleep(250);
                    puts("Press 2 to Knight");
                    Sleep(250);
                    puts("Press 3 to Archer");
                    scanf("%d", &p1);
                    puts("");
                    Sleep(1000);

                    printf("%s, please choose your character\n\n", player2);
                    Sleep(250);
                    puts("Press 1 to Wizard");
                    Sleep(250);
                    puts("Press 2 to Knight");
                    Sleep(250);
                    puts("Press 3 to Archer");

                    p2 = 1 + rand() % 3;


                    while ( p2 == p1 ) {
                        p2 = 1 + rand() % 3;
                    }

                    Sleep(250);
                    printf("%d\n",p2);

                    Sleep(1000);
                    puts("");

                    puts("Please wait few seconds. Preparing game\n");
                    wait();
                    Sleep(300);
                    system("cls");

                    if ( p1 == 1 && p2 == 1 ){
                        battle_wizard_wizard(player);
                    }
                    else if ( p1 == 1 && p2 == 2 ){
                        battle_wizard_knight(player);
                    }
                    else if ( p1 == 2 && p2 == 1 ){
                        battle_knight_wizard(player);
                    }
                    else if ( p1 == 1 && p2 == 3  ){
                        battle_wizard_archer(player);
                    }
                    else if ( p1 == 3 && p2 == 1 ){
                        battle_archer_wizard(player);
                    }
                    else if ( p1 == 2 && p2 == 2 ){
                        battle_knight_knight(player);
                    }
                    else if ( p1 == 2 && p2 == 3  ){
                        battle_knight_archer(player);
                    }
                    else if ( p1 == 3 && p2 == 2 ){
                        battle_archer_knight(player);
                    }
                    else if ( p1 == 3 && p2 == 3 ){
                        battle_archer_archer(player);
                    }
                    else {
                        printf("What are you trying to do!\n");
                    }
                    break;

                case 2:
                    puts("Please wait few seconds. Preparing game\n");
                    wait();
                    Sleep(300);
                    system("cls");

                    names(player);
                    system("cls");

                    printf("Welcome two player mode %s and %s!\n\n", player1, player2);
                    Sleep(1000);

                    puts("In order to learn game rules please press 1 ");
                    Sleep(500);
                    puts("In order to skip game rules page, please press 2 ");
                    scanf("%d", &a);

                    if ( a == 1 )
                        rules();

                        system("cls");

                    printf("%s, please choose your character\n\n", player1);
                    Sleep(250);
                    puts("Press 1 to Wizard");
                    Sleep(250);
                    puts("Press 2 to Knight");
                    Sleep(250);
                    puts("Press 3 to Archer");
                    scanf("%d", &p1);
                    puts("");
                    Sleep(1000);

                    printf("%s, please choose your character\n\n", player2);
                    Sleep(250);
                    puts("Press 1 to Wizard");
                    Sleep(250);
                    puts("Press 2 to Knight");
                    Sleep(250);
                    puts("Press 3 to Archer");
                    scanf("%d", &p2);
                    Sleep(1000);
                    puts("");

                    puts("Please wait few seconds. Preparing game\n");
                    wait();
                    Sleep(300);
                    system("cls");

                    if ( p1 == 1 && p2 == 1 ){
                        battle_wizard_wizard(player);
                    }
                    else if ( p1 == 1 && p2 == 2 ){
                        battle_wizard_knight(player);
                    }
                    else if ( p1 == 2 && p2 == 1 ){
                        battle_knight_wizard(player);
                    }
                    else if ( p1 == 1 && p2 == 3  ){
                        battle_wizard_archer(player);
                    }
                    else if ( p1 == 3 && p2 == 1 ){
                        battle_archer_wizard(player);
                    }
                    else if ( p1 == 2 && p2 == 2 ){
                        battle_knight_knight(player);
                    }
                    else if ( p1 == 2 && p2 == 3  ){
                        battle_knight_archer(player);
                    }
                    else if ( p1 == 3 && p2 == 2 ){
                        battle_archer_knight(player);
                    }
                    else if ( p1 == 3 && p2 == 3 ){
                        battle_archer_archer(player);
                    }
                    else {
                        printf("What are you trying to do!\n");
                    }
                    break;

                default:
                    printf("Invalid choice!");
                    break;
            }

            Sleep(2500);
            system("cls");
            printf("Do you want to play again?\nPlease enter \"y\" for Yes, \"n\" for No\n");
            scanf("%s", &yesno);

            if ( yesno == 'n' || yesno == 'N')
            {
                system("cls");
                printf("Are you sure?\n");
                Sleep(1500);
                printf("Anyway...");
                Sleep(750);
                printf("By By\n\n\n");
                Sleep(500);
                break;
            }
            else
            {
                system("cls");
                puts("Preparing new game...\n");
                wait();
                Sleep(300);
                system("cls");
            }
        }





        return 0;
    }

    /// Main Function Finishes--------------------------------------------------------------------

    void names( int player )
    {
        int i = 0;
        char c;

        while ( ( i < 100 ) && ( c = getchar()) != '\n' ) /// This while is for obstruct error
        {
            player1[i++] = c;
        }

        i = 0;
        printf("Enter first player's name: \n"); /// Get first players name
        while ( ( i < 100 ) && ( c = getchar()) != '\n' )
        {
            player1[i++] = c;
        }

        player1[i] = '\0';
        printf("Player 1 is %s\n\n", player1);


        /*if ( player == 1 )
        {
            /// This part is not working !!!

            int r = 1 + rand() % 10;

            char *computerplayer[10] = { "Gandalf the Grey", "Aragorn", "Ahsoka Tano", "Anakin Skywalker", "Legolas",
                                     "Gimli, son of Gloin", "Sauron", "Saruman the White", "Arya Stark", "Eddard Stark"};

            strcpy(computerplayer, player2);
        }*/


        if ( player == 2 )
        {
            i = 0;
            printf("Enter second player's name: \n"); /// Get second players name
            while ( ( i < 100 ) && ( c = getchar()) != '\n' )
            {
                player2[i++] = c;
            }
            player2[i] = '\0';
            printf("Player 2 is %s\n", player2);
        }

        Sleep(1000);
    }

    void rules()
    {
        system("cls");
        char key;
        puts("");
        puts("  Welcome to our duel game...\n");
        Sleep(750);
        puts("  Your aim is beat your enemy.");
        Sleep(750);
        puts("  You will choice one of the three different character.");
        Sleep(750);
        puts("  One is Archer, one is Knight and other is Wizard.");
        Sleep(750);
        puts("  Each character has different abilities.");
        Sleep(750);
        puts("  Each turn you will choose one of your abilities and you will attack your opponent.");
        Sleep(750);
        puts("  Maybe you miss your target or you will harm less than you expect.");
        Sleep(750);
        puts("  Program choose randomly who is going to start first.");
        Sleep(750);
        puts("  Here comes the detail specifications of character.");
        Sleep(750);
        puts("  Have good game...");
        Sleep(750);
        puts("  Made by Yusuf Emre BAYSAL... \n");
        Sleep(750);
        puts("  Press any key to continue.");
        getche();
        system("cls");


        puts(" \n                                      W I Z A R D \n ");
        puts("      Life        Fireball            Freeze              Thunder             Heal            ");
        puts("      40          Damage: 11-35       Damage: 4-6         Damage:24-56        Health: +20     ");
        puts("                  Precision: 75%      Precision: 50%      Precision: 50%      Precision: 100% ");
        puts("                  Infinitive times    +1 each 4 turn      +1 each 3 turn      +1 each 4 turn        ");
        puts("                                      Firstly 3. turn     Firstly 2. turn     Firstly 4. turn     ");
        puts("\n      Freeze ability will freeze your enemy for one turn and allow you to attack one more time");
        puts("");
        Sleep(1000);

        puts("                                      K N I G H T \n  ");
        puts("      Life        Sword Attack        Lance Attack    ");
        puts("      100         Damage: 6-8         Damage 10-14    ");
        puts("                  Precision: 100%     Precision: 100% ");
        puts("                  Infinitive times    +1 each 3 turn");
        puts("                                      Firstly 2. turn ");
        puts("");
        Sleep(1000);

        puts("                                      A R C H E R \n  ");
        puts("      Life        Release Arrow       Fire Shot           Triple Shot");
        puts("      70          Damage: 8-12        Damage: 14-20       Damage: 8-12 each");
        puts("                  Precision: 75%      Precision: 75%      Precision: 50% each");
        puts("                  Infinitive times    +1 each 3 turn      +1 each 4 turn");
        puts("                                      Firstly 2. turn     Firstly 3. turn ");
        puts("");
        Sleep(1000);

        puts("Press any key to continue.");
        getche();
        system("cls");


    }

    void wait()
    {
        printf("            <|");
        for ( int i = 1 ; i <= 21 ; i++ )
        {
            printf("%c", 177);
            Sleep(80);
        }
        puts("|>");
    }

    /// Not working in this way
    /*char *computer()
    {
        int r = 1 + rand() % 10;

        char *computerplayer[10] = { "Gandalf the Grey", "Aragorn", "Ahsoka Tano", "Anakin Skywalker", "Legolas",
                                     "Gimli, son of Gloin", "Sauron", "Saruman the White", "Arya Stark", "Eddard Stark"};

        return computerplayer[r];

    }*/

    void random_player1()
    {
        system("cls");
        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      * ----@     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *   |   *              ");
        puts("      *     |     *            ");
        puts("      *     @     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      *     @---- *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      *     @     *            ");
        puts("      *     |     *            ");
        puts("        *   |   *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      * ----@     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *   |   *              ");
        puts("      *     |     *            ");
        puts("      *     @     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      *     @---- *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      *     @     *            ");
        puts("      *     |     *            ");
        puts("        *   |   *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      * ----@     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *   |   *              ");
        puts("      *     |     *            ");
        puts("      *     @     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(2000);
        system("cls");
    }
    void random_player2()
    {
        system("cls");
        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      * ----@     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *   |   *              ");
        puts("      *     |     *            ");
        puts("      *     @     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      *     @---- *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      *     @     *            ");
        puts("      *     |     *            ");
        puts("        *   |   *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      * ----@     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *   |   *              ");
        puts("      *     |     *            ");
        puts("      *     @     *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      *     @---- *            ");
        puts("      *           *            ");
        puts("        *       *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(100);
        system("cls");

        printf("       %s\n", player1);
        puts("          * * *                ");
        puts("        *       *              ");
        puts("      *           *            ");
        puts("      *     @     *            ");
        puts("      *     |     *            ");
        puts("        *   |   *              ");
        puts("          * * *                ");
        printf("       %s\n", player2);
        Sleep(2000);
        system("cls");
    }

    int computer_random( int ability2, int ability3, int ability4 )
    {
        if      ( ability4 > 0 )
            return 4;
        else if ( ability3 > 0 )
            return 3;
        else if ( ability2 > 0 )
            return 2;
        else
            return 1;
    }

    void battle_wizard_wizard(int player)/// +++ +++
    {



        int r;
        int action;
        int movement;
        int wizard1_life = 40;
        int wizard2_life = 40;
        int error = 0;
        int turn = 0;

        /// wizard 1 abilities
        int w1_freeze = 0;
        int if1_freeze = 10;
        int w1_thunder = 0;
        int w1_heal = 0;

        /// wizard 2 abilities
        int w2_freeze = 0;
        int if2_freeze = 10;
        int w2_thunder = 0;
        int w2_heal = 0;

        system("cls");

        printf("Wizard %s versus Wizard %s\n\n", player1, player2);
        Sleep(1000);

        r = 1 + rand() % 2;

        if ( r == 1 ) /// player 1 starts
        {
            random_player1();
            printf("Wizard %s is going to start first\n", player1);
            Sleep(1000);

            while ( wizard1_life > 0 && wizard2_life > 0 ) /// both players alive
            {


                /// Wizard 1 action ---------------------------"

                while (wizard1_life > 0 ) /// while for in case of error
                {
                    if ( if2_freeze == 100 ){ /// if wizard uses freeze pass knight
                        if2_freeze = 10;
                        break;
                    }


                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Wizard %s life = %d\n\n", player1, wizard1_life, player2, wizard2_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w1_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w1_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w1_heal);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player1);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_wizard_nothit();
                                printf("Wizard %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                wizard_vs_wizard_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                wizard2_life -= action;
                            }
                            break;

                        case 2:

                            if ( w1_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player1);
                                Sleep(2000);
                                action = wizard_freeze();
                                w1_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_wizard_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n", player1);
                                }
                                else
                                {
                                    wizard_vs_wizard_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player1);
                                    wizard2_life -= action;
                                    if1_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w1_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player1);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w1_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_wizard_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player1);
                                    }
                                    else
                                    {
                                        wizard_vs_wizard_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                        wizard2_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w1_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player1);
                                Sleep(2000);
                                w1_heal--;
                                wizard_vs_wizard_heal();
                                wizard1_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player1);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            wizard2_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                /// Wizard 2 action ---------------------------"

                while (wizard2_life > 0 ) /// while for in case of error
                {
                    if ( if1_freeze == 100 ){ /// if wizard uses freeze pass knight
                        if1_freeze = 10;
                        break;
                    }


                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Wizard %s life = %d\n\n", player1, wizard1_life, player2, wizard2_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w2_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w2_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w2_heal);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(w2_freeze, w2_thunder, w2_heal);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }



                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player2);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_wizard_nothit();
                                printf("Wizard %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                wizard_vs_wizard_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                wizard1_life -= action;
                            }
                            break;

                        case 2:

                            if ( w2_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player2);
                                Sleep(2000);
                                action = wizard_freeze();
                                w2_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_wizard_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n",player2);
                                }
                                else
                                {
                                    wizard_vs_wizard_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player2);
                                    wizard1_life -= action;
                                    if2_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w2_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player2);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w2_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_wizard_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player2);
                                    }
                                    else
                                    {
                                        wizard_vs_wizard_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                        wizard1_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w2_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player2);
                                Sleep(2000);
                                w2_heal--;
                                wizard_vs_wizard_heal();
                                wizard2_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player1);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            wizard2_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                turn++;

                if ( turn % 3 == 1 )
                    w1_thunder++;
                if ( turn % 4 == 2 )
                    w1_freeze++;
                if ( turn % 4 == 3 )
                    w1_heal++;
                if ( turn % 3 == 1 )
                    w2_thunder++;
                if ( turn % 4 == 2 )
                    w2_freeze++;
                if ( turn % 4 == 3 )
                    w2_heal++;


            }
            if ( wizard1_life > 0 )
                printf("Wizard %s has won the battle!\n", player1);

            else if ( wizard2_life > 0 )
                printf("Wizard %s has won the battle!\n", player2);

        }

        else if ( r == 2 ) /// player 2 starts
        {
            random_player2();
            printf("Wizard %s is going to start first\n", player2);
            Sleep(1000);

            while ( wizard1_life > 0 && wizard2_life > 0 ) /// both players alive
            {


                /// Wizard 2 action ---------------------------"

                while (wizard2_life > 0 ) /// while for in case of error
                {
                    if ( if1_freeze == 100 ){ /// if wizard uses freeze pass knight
                        if1_freeze = 10;
                        break;
                    }


                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Wizard %s life = %d\n\n", player1, wizard1_life, player2, wizard2_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w2_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w2_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w2_heal);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(w2_freeze, w2_thunder, w2_heal);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player2);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_wizard_nothit();
                                printf("Wizard %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                wizard_vs_wizard_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                wizard1_life -= action;
                            }
                            break;

                        case 2:

                            if ( w2_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player2);
                                Sleep(2000);
                                action = wizard_freeze();
                                w2_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_wizard_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n" ,player2);
                                }
                                else
                                {
                                    wizard_vs_wizard_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player2);
                                    wizard1_life -= action;
                                    if2_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w2_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player2);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w2_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_wizard_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player2);
                                    }
                                    else
                                    {
                                        wizard_vs_wizard_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                        wizard1_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w2_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player2);
                                Sleep(2000);
                                w2_heal--;
                                wizard_vs_wizard_heal();
                                wizard1_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player2);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            wizard1_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                /// Wizard 1 action ---------------------------"

                while (wizard1_life > 0 ) /// while for in case of error
                {
                    if ( if2_freeze == 100 ){ /// if wizard uses freeze pass knight
                        if2_freeze = 10;
                        break;
                    }


                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Wizard %s life = %d\n\n", player1, wizard1_life, player2, wizard2_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w1_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w1_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w1_heal);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player1);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_wizard_nothit();
                                printf("Wizard %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                wizard_vs_wizard_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                wizard2_life -= action;
                            }
                            break;

                        case 2:

                            if ( w1_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player1);
                                Sleep(2000);
                                action = wizard_freeze();
                                w1_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_wizard_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n",player1);
                                }
                                else
                                {
                                    wizard_vs_wizard_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player1);
                                    wizard2_life -= action;
                                    if1_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w1_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player1);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w1_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_wizard_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player1);
                                    }
                                    else
                                    {
                                        wizard_vs_wizard_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                        wizard2_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w1_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player1);
                                Sleep(2000);
                                w1_heal--;
                                wizard_vs_wizard_heal();
                                wizard1_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player1);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            wizard2_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                turn++;

                if ( turn % 3 == 1 )
                    w1_thunder++;
                if ( turn % 4 == 2 )
                    w1_freeze++;
                if ( turn % 4 == 3 )
                    w1_heal++;
                if ( turn % 3 == 1 )
                    w2_thunder++;
                if ( turn % 4 == 2 )
                    w2_freeze++;
                if ( turn % 4 == 3 )
                    w2_heal++;


            }
            if ( wizard1_life > 0 )
                printf("Wizard %s has won the battle!\n", player1);

            else if ( wizard2_life > 0 )
                printf("Wizard %s has won the battle!\n", player2);
        }
    }

    void battle_wizard_knight(int player)/// +++ +++
    {








        int r;
        int action;
        int movement;
        int wizard_life = 40;
        int knight_life = 100;
        int error = 0;
        int turn = 0;

        int w_freeze = 0;
        int if_freeze = 10;
        int w_thunder = 0;
        int w_heal = 0;

        int k_lance = 0;

        system("cls");

        printf("Wizard %s versus Knight %s\n\n", player1, player2);
        Sleep(1000);

        r = 1 + rand() % 2;

        if ( r == 1 ) /// player 1 starts
        {
            random_player1();
            printf("Wizard %s is going to start first\n", player1);
            Sleep(1000);

            while ( wizard_life > 0 && knight_life > 0 ) /// both players alive
            {


                while (wizard_life > 0 ) /// while for in case of error
                {

                /// Wizard action ---------------------------

                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Knight %s life = %d\n\n", player1, wizard_life, player2, knight_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w_heal);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player1);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_knight_nothit();
                                printf("Wizard %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                wizard_vs_knight_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                knight_life -= action;
                            }
                            break;

                        case 2:

                            if ( w_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player1);
                                Sleep(2000);
                                action = wizard_freeze();
                                w_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_knight_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n", player1);
                                }
                                else
                                {
                                    wizard_vs_knight_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player1);
                                    knight_life -= action;
                                    if_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player1);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_knight_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player1);
                                    }
                                    else
                                    {
                                        wizard_vs_knight_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                        knight_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player1);
                                Sleep(2000);
                                w_heal--;
                                wizard_vs_knight_heal();
                                wizard_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player1);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            knight_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                /// Knight Action ------------------------------------------------------------------

                while ( knight_life > 0 ) /// in case of error
                {
                    if ( if_freeze == 100 ){ /// if wizard uses freeze pass knight
                        if_freeze = 10;
                        break;
                    }


                    error = 0;

                    printf("\n");
                    printf("    Wizard %s life = %d         Knight %s life = %d\n\n", player1, wizard_life, player2, knight_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k_lance);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(k_lance,0 , 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player2);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_wizard();
                            printf("Knight %s hit his opponent and damaged %d\n", player2, action);
                            wizard_life -= action;

                            break;

                        case 2:

                            if ( k_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player2);
                                Sleep(2000);
                                k_lance--;
                                action = knight_lance();

                                knight_vs_wizard();
                                printf("Knight %s hit his opponent and damaged %d", player2, action);
                                wizard_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                turn++;

                if ( turn % 3 == 1 )
                    w_thunder++;
                if ( turn % 4 == 2 )
                    w_freeze++;
                if ( turn % 4 == 3 )
                    w_heal++;
                if ( turn % 3 == 1 )
                    k_lance++;

            }
            if ( wizard_life > 0 )
                printf("Wizard %s has won the battle!\n", player1);

            else if ( knight_life > 0 )
                printf("Knight %s has won the battle!\n", player2);

        }

        else if ( r == 2 ) /// player 2 starts
        {
            random_player2();
            printf("Knight %s is going to start first\n", player2);
            Sleep(1000);

            while ( wizard_life > 0 && knight_life > 0 ) /// both players alive
            {
                while ( knight_life > 0 ) /// in case of error
                {
                    if ( if_freeze == 100 ){ /// if wizard uses freeze pass knight
                        if_freeze = 10;
                        break;
                    }


                    error = 0;

                    printf("\n");
                    printf("    Wizard %s life = %d         Knight %s life = %d\n\n", player1, wizard_life, player2, knight_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k_lance);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(k_lance,0 , 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player2);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_wizard();
                            printf("Knight %s hit his opponent and damaged %d\n", player2, action);
                            wizard_life -= action;

                            break;

                        case 2:

                            if ( k_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player2);
                                Sleep(2000);
                                k_lance--;
                                action = knight_lance();

                                knight_vs_wizard();
                                printf("Knight %s hit his opponent and damaged %d", player2, action);
                                wizard_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }


                    else
                        break;


                }

                while ( wizard_life > 0 ) /// while for in case of error
                {

                /// Wizard action ---------------------------

                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Knight %s life = %d\n\n", player1, wizard_life, player2, knight_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w_heal);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player1);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_knight_nothit();
                                printf("Wizard %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                wizard_vs_knight_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                knight_life -= action;
                            }
                            break;

                        case 2:

                            if ( w_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player1);
                                Sleep(2000);
                                action = wizard_freeze();
                                w_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_knight_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n", player1);
                                }
                                else
                                {
                                    wizard_vs_knight_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player1);
                                    knight_life -= action;
                                    if_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player1);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_knight_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player1);
                                    }
                                    else
                                    {
                                        wizard_vs_knight_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                        knight_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player1);
                                Sleep(2000);
                                w_heal--;
                                wizard_vs_knight_heal();
                                wizard_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player1);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            knight_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }


                    else
                        break;

                }

                turn++;

                if ( turn % 3 == 1 )
                    w_thunder++;
                if ( turn % 4 == 2 )
                    w_freeze++;
                if ( turn % 4 == 3 )
                    w_heal++;
                if ( turn % 3 == 1 )
                    k_lance++;

            }

            if ( wizard_life > 0 )
                printf("Wizard %s has won the battle!\n", player1);

            else if ( knight_life > 0 )
                printf("Knight %s has won the battle!\n", player2);

        }
    }
    void battle_knight_wizard(int player)/// +++ +++
    {
        int r;
        int action;
        int movement;
        int wizard_life = 40;
        int knight_life = 100;
        int error = 0;
        int turn = 0;

        int w_freeze = 0;
        int if_freeze = 10;
        int w_thunder = 0;
        int w_heal = 0;

        int k_lance = 0;

        system("cls");

        printf("Wizard %s versus Knight %s\n\n", player2, player1);
        Sleep(1000);

        r = 1 + rand() % 2;

        if ( r == 1 ) /// player 2 starts
        {
            random_player2();
            printf("Wizard %s is going to start first\n", player2);
            Sleep(1000);

            while ( wizard_life > 0 && knight_life > 0 > 0 ) /// both players alive
            {


                while (wizard_life > 0) /// while for in case of error
                {

                /// Wizard action ---------------------------

                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Knight %s life = %d\n\n", player2, wizard_life, player1, knight_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w_heal);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(w_freeze, w_thunder, w_heal);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player2);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_knight_nothit();
                                printf("Wizard %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                wizard_vs_knight_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                knight_life -= action;
                            }
                            break;

                        case 2:

                            if ( w_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player2);
                                Sleep(2000);
                                action = wizard_freeze();
                                w_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_knight_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n", player1);
                                }
                                else
                                {
                                    wizard_vs_knight_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player2);
                                    knight_life -= action;
                                    if_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player2);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_knight_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player2);
                                    }
                                    else
                                    {
                                        wizard_vs_knight_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                        knight_life -= action;
                                    }
                                }

                            break;

                        case 4:

                            if ( w_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player2);
                                Sleep(2000);
                                w_heal--;
                                wizard_vs_knight_heal();
                                wizard_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player2);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            knight_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                /// Knight Action ------------------------------------------------------------------

                while ( knight_life > 0 ) /// in case of error
                {
                    if ( if_freeze == 100 ){ /// if wizard uses freeze pass knight
                        if_freeze = 10;
                        break;
                    }


                    error = 0;

                    printf("\n");
                    printf("    Wizard %s life = %d         Knight %s life = %d\n\n", player2, wizard_life, player1, knight_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k_lance);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player1);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_wizard();
                            printf("Knight %s hit his opponent and damaged %d\n", player1, action);
                            wizard_life -= action;

                            break;

                        case 2:

                            if ( k_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player1);
                                Sleep(2000);
                                k_lance--;
                                action = knight_lance();

                                knight_vs_wizard();
                                printf("Knight %s hit his opponent and damaged %d", player1, action);
                                wizard_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                turn++;

                if ( turn % 3 == 1 )
                    w_thunder++;
                if ( turn % 4 == 2 )
                    w_freeze++;
                if ( turn % 4 == 3 )
                    w_heal++;
                if ( turn % 3 == 1 )
                    k_lance++;

            }
            if ( wizard_life > 0 )
                printf("Wizard %s has won the battle!\n", player2);

            else if ( knight_life > 0 )
                printf("Knight %s has won the battle!\n", player1);

        }

        else if ( r == 2 ) /// player 1 starts
        {
            random_player1();
            printf("Knight %s is going to start first\n", player1);
            Sleep(1000);

            while ( wizard_life > 0 && knight_life > 0 ) /// both players alive
            {
                ///Knight turn

                while ( knight_life > 0 ) /// in case of error
                {
                    if ( if_freeze == 100 ){ /// if wizard uses freeze pass knight
                        if_freeze = 10;
                        break;
                    }


                    error = 0;

                    printf("\n");
                    printf("    Wizard %s life = %d         Knight %s life = %d\n\n", player2, wizard_life, player1, knight_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k_lance);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player1);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_wizard();
                            printf("Knight %s hit his opponent and damaged %d\n", player1, action);
                            wizard_life -= action;

                            break;

                        case 2:

                            if ( k_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player1);
                                Sleep(2000);
                                k_lance--;
                                action = knight_lance();

                                knight_vs_wizard();
                                printf("Knight %s hit his opponent and damaged %d", player1, action);
                                wizard_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }


                    else
                        break;


                }

                while ( wizard_life > 0 ) /// while for in case of error
                {

                /// Wizard action ---------------------------

                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Knight %s life = %d\n\n", player2, wizard_life, player1, knight_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w_heal);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(w_freeze, w_thunder, w_heal);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player2);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_knight_nothit();
                                printf("Wizard %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                wizard_vs_knight_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                knight_life -= action;
                            }
                            break;

                        case 2:

                            if ( w_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player2);
                                Sleep(2000);
                                action = wizard_freeze();
                                w_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_knight_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n", player2);
                                }
                                else
                                {
                                    wizard_vs_knight_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player2);
                                    knight_life -= action;
                                    if_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player2);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_knight_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player2);
                                    }
                                    else
                                    {
                                        wizard_vs_knight_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                        knight_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player2);
                                Sleep(2000);
                                w_heal--;
                                wizard_vs_knight_heal();
                                wizard_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player2);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            knight_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }


                    else
                        break;

                }

                turn++;

                if ( turn % 3 == 1 )
                    w_thunder++;
                if ( turn % 4 == 2 )
                    w_freeze++;
                if ( turn % 4 == 3 )
                    w_heal++;
                if ( turn % 3 == 1 )
                    k_lance++;

            }

            if ( wizard_life > 0 )
                printf("Wizard %s has won the battle!\n", player2);

            else if ( knight_life > 0 )
                printf("Knight %s has won the battle!\n", player1);

        }
    }

    void battle_wizard_archer(int player)/// +++ +++ Here some detailed expectations. All battle functions are same logic except int names.
    {
        int r;                  /// random number for which player starting first
        int action;             /// for damage
        int movement;           /// for abilities
        int wizard_life = 40;
        int archer_life = 70;
        int error = 0;          /// in case of error. when error = 1, there is a problem
        int turn = 0;           /// for adding special abilities

        /// Wizard abilities
        int w_freeze = 0;       /// wizard freeze ability
        int if_freeze = 10;     /// when uses freeze, pass player 2
        int w_thunder = 0;      /// wizard thunder ability
        int w_heal = 0;         /// wizard heal ability

        /// Archer abilities
        int a_triarrow = 0;     /// archer triple arrow ability
        int a_farrow = 0;       /// archer fire arrow ability

        system("cls");

        printf("Wizard %s versus Archer %s\n\n", player1, player2);
        Sleep(1000);

        r = 1 + rand() % 2;

        if ( r == 1 ) /// player 1 starts
        {
            random_player1();
            printf("Wizard %s is going to start first\n", player1);
            Sleep(1000);

            while ( wizard_life > 0 && archer_life > 0 ) /// both players alive
            {


                while (wizard_life > 0 ) /// while for in case of error
                {

                /// Wizard action ---------------------------

                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Archer %s life = %d\n\n", player1, wizard_life, player2, archer_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w_heal);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player1);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_archer_nothit();
                                printf("Wizard %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                wizard_vs_archer_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                archer_life -= action;
                            }
                            break;

                        case 2:

                            if ( w_freeze <= 0 )        /// if freeze ability = 0 ( no uses ) add error = 1, so there is a problem
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player1);
                                Sleep(2000);
                                action = wizard_freeze();
                                w_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_archer_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n", player1);
                                }
                                else
                                {
                                    wizard_vs_archer_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player1);
                                    archer_life -= action;
                                    if_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player1);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_archer_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player1);
                                    }
                                    else
                                    {
                                        wizard_vs_archer_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                        archer_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player1);
                                Sleep(2000);
                                w_heal--;
                                wizard_vs_archer_heal();
                                wizard_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player1);
                            }

                            break;

                        case 666:           /// for trying game. Quickly winning battle
                            printf("Wizard cheated!\nGame over\n\n");
                            archer_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  something wrong, such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                /// Archer Action ------------------------------------------------------------------

                while ( archer_life > 0 ) /// in case of error
                {
                    if ( if_freeze == 100 ){ /// if wizard uses freeze, pass archer
                        if_freeze = 10;
                        break;
                    }


                    error = 0;

                    printf("\n");
                    printf("    Wizard %s life = %d         Archer %s life = %d\n\n", player1, wizard_life, player2, archer_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a_triarrow);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(a_farrow, a_triarrow, 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement ) /// archer action choice menu
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player2);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_wizard_nothit();
                                printf("Archer %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                archer_vs_wizard_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                wizard_life -= action;
                            }
                            break;

                        case 2:

                            if ( a_farrow <= 0 )    /// if fire arrow ability = 0 ( no uses ) add error = 1, so there is a problem
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_farrow();
                                a_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_wizard_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_wizard_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    wizard_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_wizard_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_wizard_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    wizard_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  something wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                turn++;

                if ( turn % 3 == 1 )
                    w_thunder++;
                if ( turn % 4 == 2 )
                    w_freeze++;
                if ( turn % 4 == 3 )
                    w_heal++;
                if ( turn % 3 == 1 )
                    a_farrow++;
                if ( turn % 4 == 2 )
                    a_triarrow++;

            }
            if ( wizard_life > 0 )
                printf("Wizard %s has won the battle!\n", player1);

            else if ( archer_life > 0 )
                printf("Archer %s has won the battle!\n", player2);

        }

        /// player two starts is same logic and same codes. just firstly start archer instead of wizard.

        else if ( r == 2 ) /// player 2 starts
        {
            random_player2();
            printf("Archer %s is going to start first\n", player2);
            Sleep(1000);

            while ( wizard_life > 0 && archer_life > 0 ) /// both players alive
            {

                /// Archer Action -------------------------------

                while ( archer_life > 0 ) /// in case of error
                {
                    if ( if_freeze == 100 ){ /// if wizard uses freeze, pass archer
                        if_freeze = 10;
                        break;
                    }


                    error = 0;

                    printf("\n");
                    printf("    Wizard %s life = %d         Archer %s life = %d\n\n", player1, wizard_life, player2, archer_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a_triarrow);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(a_farrow, a_triarrow, 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player2);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_wizard_nothit();
                                printf("Archer %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                archer_vs_wizard_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                wizard_life -= action;
                            }
                            break;

                        case 2:

                            if ( a_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_farrow();
                                a_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_wizard_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_wizard_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    wizard_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_wizard_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_wizard_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    wizard_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                        if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                        {
                            system("cls");
                            printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                        }

                        else
                            break;
            }


            while (wizard_life > 0 ) /// while for in case of error
            {

                /// Wizard action ---------------------------

                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Archer %s life = %d\n\n", player1, wizard_life, player2, archer_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w_heal);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player1);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_archer_nothit();
                                printf("Wizard %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                wizard_vs_archer_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                archer_life -= action;
                            }
                            break;

                        case 2:

                            if ( w_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player1);
                                Sleep(2000);
                                action = wizard_freeze();
                                w_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_archer_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n", player1);
                                }
                                else
                                {
                                    wizard_vs_archer_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player1);
                                    archer_life -= action;
                                    if_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player1);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_archer_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player1);
                                    }
                                    else
                                    {
                                        wizard_vs_archer_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player1, action);
                                        archer_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player1);
                                Sleep(2000);
                                w_heal--;
                                wizard_vs_archer_heal();
                                wizard_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player1);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            archer_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                turn++;

                if ( turn % 3 == 1 )
                    w_thunder++;
                if ( turn % 4 == 2 )
                    w_freeze++;
                if ( turn % 4 == 3 )
                    w_heal++;
                if ( turn % 3 == 1 )
                    a_farrow++;
                if ( turn % 4 == 2 )
                    a_triarrow++;

            }

                if ( wizard_life > 0 )
                printf("Wizard %s has won the battle!\n", player1);

                else if ( archer_life > 0 )
                printf("Archer %s has won the battle!\n", player2);

        }
    }

    void battle_archer_wizard(int player)/// +++ +++
    {
        int r;
        int action;
        int movement;
        int wizard_life = 40;
        int archer_life = 70;
        int error = 0;
        int turn = 0;

        /// Wizard abilities
        int w_freeze = 0;
        int if_freeze = 10;
        int w_thunder = 0;
        int w_heal = 0;

        /// Archer abilities
        int a_triarrow = 0;
        int a_farrow = 0;

        system("cls");

        printf("Wizard %s versus Archer %s\n\n", player2, player1);
        Sleep(1000);

        r = 1 + rand() % 2;

        if ( r == 1 ) /// player 2 starts
        {
            random_player2();
            printf("Wizard %s is going to start first\n", player2);
            Sleep(1000);

            while ( wizard_life > 0 && archer_life > 0 ) /// both players alive
            {


                while (wizard_life > 0 ) /// while for in case of error
                {

                /// Wizard action ---------------------------

                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Archer %s life = %d\n\n", player2, wizard_life, player1, archer_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w_heal);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(w_freeze, w_thunder, w_heal);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player2);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_archer_nothit();
                                printf("Wizard %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                wizard_vs_archer_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                archer_life -= action;
                            }
                            break;

                        case 2:

                            if ( w_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player2);
                                Sleep(2000);
                                action = wizard_freeze();
                                w_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_archer_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n", player2);
                                }
                                else
                                {
                                    wizard_vs_archer_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player2);
                                    archer_life -= action;
                                    if_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player2);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_archer_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player2);
                                    }
                                    else
                                    {
                                        wizard_vs_archer_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                        archer_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player2);
                                Sleep(2000);
                                w_heal--;
                                wizard_vs_archer_heal();
                                wizard_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player2);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            archer_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                /// Archer Action ------------------------------------------------------------------

                while ( archer_life > 0 ) /// in case of error
                {
                    if ( if_freeze == 100 ){ /// if wizard uses freeze, pass archer
                        if_freeze = 10;
                        break;
                    }


                    error = 0;

                    printf("\n");
                    printf("    Wizard %s life = %d         Archer %s life = %d\n\n", player2, wizard_life, player1, archer_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a_triarrow);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player1);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_wizard_nothit();
                                printf("Archer %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                archer_vs_wizard_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                wizard_life -= action;
                            }
                            break;

                        case 2:

                            if ( a_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_farrow();
                                a_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_wizard_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_wizard_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    wizard_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_wizard_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_wizard_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    wizard_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                turn++;

                if ( turn % 3 == 1 )
                    w_thunder++;
                if ( turn % 4 == 2 )
                    w_freeze++;
                if ( turn % 4 == 3 )
                    w_heal++;
                if ( turn % 3 == 1 )
                    a_farrow++;
                if ( turn % 4 == 2 )
                    a_triarrow++;

            }
            if ( wizard_life > 0 )
                printf("Wizard %s has won the battle!\n", player2);

            else if ( archer_life > 0 )
                printf("Archer %s has won the battle!\n", player1);

        }

        else if ( r == 2 ) /// player 1 starts
        {
            random_player1();
            printf("Archer %s is going to start first\n", player1);
            Sleep(1000);

            while ( wizard_life > 0 && archer_life > 0 ) /// both players alive
            {

                /// Archer Action -------------------------------

                while ( archer_life > 0 ) /// in case of error
                {
                    if ( if_freeze == 100 ){ /// if wizard uses freeze, pass archer
                        if_freeze = 10;
                        break;
                    }


                    error = 0;

                    printf("\n");
                    printf("    Wizard %s life = %d         Archer %s life = %d\n\n", player2, wizard_life, player1, archer_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a_triarrow);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player1);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_wizard_nothit();
                                printf("Archer %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                archer_vs_wizard_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                wizard_life -= action;
                            }
                            break;

                        case 2:

                            if ( a_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_farrow();
                                a_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_wizard_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_wizard_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    wizard_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_wizard_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_wizard_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    wizard_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                        if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                        {
                            system("cls");
                            printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                        }

                        else
                            break;
            }


            while (wizard_life > 0 ) /// while for in case of error
            {

                /// Wizard action ---------------------------

                    error = 0;
                    printf("\n");
                    printf("    Wizard %s life = %d         Archer %s life = %d\n\n", player2, wizard_life, player1, archer_life);
                    Sleep(500);
                    printf("Wizard %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Fireball (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Freeze (%d left)\n", w_freeze);
                    Sleep(200);
                    printf("Enter 3 to use Thunder (%d left)\n", w_thunder);
                    Sleep(200);
                    printf("Enter 4 to use Heal (%d left)\n\n", w_heal);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(w_freeze, w_thunder, w_heal);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement ) /// wizard action choice menu
                    {
                        case 1:
                            printf("Wizard %s is using Fireball\n\n", player2);
                            Sleep(2000);
                            action = wizard_fire();

                            if ( action == 0 )
                            {
                                wizard_vs_archer_nothit();
                                printf("Wizard %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                wizard_vs_archer_hit();
                                printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                archer_life -= action;
                            }
                            break;

                        case 2:

                            if ( w_freeze <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Freeze\n\n", player2);
                                Sleep(2000);
                                action = wizard_freeze();
                                w_freeze--;

                                if ( action == 0 )
                                {
                                    wizard_vs_archer_nothit();
                                    printf("Wizard %s could not hit and freeze his opponent\n", player2);
                                }
                                else
                                {
                                    wizard_vs_archer_hit();
                                    printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                    printf("Wizard %s frozen his opponent for one turn\n", player2);
                                    archer_life -= action;
                                    if_freeze = 100;
                                }
                            }

                                break;

                            case 3:

                                if ( w_thunder <= 0 )
                                {
                                    error = 1;
                                    break;
                                }

                                else
                                {
                                    printf("Wizard %s is using Thunder\n\n", player2);
                                    Sleep(2000);
                                    action = wizard_thunder();
                                    w_thunder--;

                                    if ( action == 0 )
                                    {
                                        wizard_vs_archer_nothit();
                                        printf("Wizard %s could not hit his opponent\n", player2);
                                    }
                                    else
                                    {
                                        wizard_vs_archer_hit();
                                        printf("Wizard %s hit his opponent and damaged %d\n", player2, action);
                                        archer_life -= action;
                                    }
                                }


                            break;

                        case 4:

                            if ( w_heal <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Wizard %s is using Heal potion\n\n", player2);
                                Sleep(2000);
                                w_heal--;
                                wizard_vs_archer_heal();
                                wizard_life += wizard_heal();
                                printf("Wizard %s healed himself +20\n", player2);
                            }

                            break;

                        case 666:
                            printf("Wizard cheated!\nGame over\n\n");
                            archer_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

                turn++;

                if ( turn % 3 == 1 )
                    w_thunder++;
                if ( turn % 4 == 2 )
                    w_freeze++;
                if ( turn % 4 == 3 )
                    w_heal++;
                if ( turn % 3 == 1 )
                    a_farrow++;
                if ( turn % 4 == 2 )
                    a_triarrow++;

            }

                if ( wizard_life > 0 )
                printf("Wizard %s has won the battle!\n", player2);

                else if ( archer_life > 0 )
                printf("Archer %s has won the battle!\n", player1);

        }
    }

    void battle_knight_knight(int player)/// +++ +++
    {
        int r;
        int action;
        int movement;
        int knight1_life = 100;
        int knight2_life = 100;
        int error = 0;
        int turn = 0;

        int k1_lance = 0;
        int k2_lance = 0;

        system("cls");

        printf("Knight %s versus Knight %s\n\n", player1, player2);
        Sleep(1000);

        r = 1 + rand() % 2;

        if ( r == 1 ) /// player 1 starts
        {
            random_player1();
            printf("Knight %s is going to start first\n", player1);
            Sleep(1000);

            while ( knight1_life > 0 && knight2_life > 0 ) /// both players alive
            {

                /// Knight 1 Action ------------------------------------------------------------------

                while ( knight1_life > 0 ) /// in case of error
                {
                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Knight %s life = %d\n\n", player1, knight1_life, player2, knight2_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k1_lance);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player1);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_knight();
                            printf("Knight %s hit his opponent and damaged %d\n", player1, action);
                            knight2_life -= action;

                            break;

                        case 2:

                            if ( k1_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player1);
                                Sleep(2000);
                                k1_lance--;
                                action = knight_lance();

                                knight_vs_knight();
                                printf("Knight %s hit his opponent and damaged %d", player1, action);
                                knight2_life -= action;

                                break;
                            }

                        case 666:
                            printf("Knight 1 cheated!\nGame over\n\n");
                            knight2_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }


                /// Knight 2 Action ------------------------------------------------------------------

                while ( knight2_life > 0 ) /// in case of error
                {
                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Knight %s life = %d\n\n", player1, knight1_life, player2, knight2_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k2_lance);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(k2_lance,0 , 0);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player2);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_knight();
                            printf("Knight %s hit his opponent and damaged %d\n", player2, action);
                            knight1_life -= action;

                            break;

                        case 2:

                            if ( k2_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player2);
                                Sleep(2000);
                                k2_lance--;
                                action = knight_lance();

                                knight_vs_knight();
                                printf("Knight %s hit his opponent and damaged %d", player2, action);
                                knight1_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                turn++;

                if ( turn % 3 == 1 )
                {
                    k1_lance++;
                    k2_lance++;
                }

            }
            if ( knight1_life > 0 )
                printf("Knight %s has won the battle!\n", player1);

            else if ( knight2_life > 0 )
                printf("Knight %s has won the battle!\n", player2);

        }

        else if ( r == 2 ) /// player 2 starts
        {
            random_player2();
            printf("Knight %s is going to start first\n", player2);
            Sleep(1000);

            while ( knight1_life > 0 && knight2_life > 0 ) /// both players alive
            {

                /// Knight 2 Action ------------------------------------------------------------------

                while ( knight2_life > 0 ) /// in case of error
                {
                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Knight %s life = %d\n\n", player1, knight1_life, player2, knight2_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k2_lance);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(k2_lance,0 , 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player2);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_knight();
                            printf("Knight %s hit his opponent and damaged %d\n", player2, action);
                            knight1_life -= action;

                            break;

                        case 2:

                            if ( k2_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player2);
                                Sleep(2000);
                                k2_lance--;
                                action = knight_lance();

                                knight_vs_knight();
                                printf("Knight %s hit his opponent and damaged %d", player2, action);
                                knight1_life -= action;

                                break;
                            }

                        case 666:
                            printf("Knight 2 cheated!\nGame over\n\n");
                            knight1_life -= 1000;
                            Sleep(2000);
                            break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }


                /// Knight 1 Action ------------------------------------------------------------------

                while ( knight1_life > 0 ) /// in case of error
                {
                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Knight %s life = %d\n\n", player1, knight1_life, player2, knight2_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k1_lance);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player1);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_knight();
                            printf("Knight %s hit his opponent and damaged %d\n", player1, action);
                            knight1_life -= action;

                            break;

                        case 2:

                            if ( k1_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player1);
                                Sleep(2000);
                                k1_lance--;
                                action = knight_lance();

                                knight_vs_knight();
                                printf("Knight %s hit his opponent and damaged %d", player1, action);
                                knight1_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                turn++;

                if ( turn % 3 == 1 )
                {
                    k1_lance++;
                    k2_lance++;
                }

            }
            if ( knight1_life > 0 )
                printf("Wizard %s has won the battle!\n", player1);

            else if ( knight2_life > 0 )
                printf("Knight %s has won the battle!\n", player2);

        }
    }

    void battle_archer_knight(int player)/// +++ +++
    {
        int r;
        int action;
        int movement;
        int knight_life = 100;
        int archer_life = 70;
        int error = 0;
        int turn = 0;

        /// Knight abilities
        int k_lance = 0;

        /// Archer abilities
        int a_farrow = 0;
        int a_triarrow = 0;

        system("cls");

        printf("Knight %s versus Archer %s\n\n", player2, player1);
        Sleep(1000);

        r = 1 + rand() % 2;

        if ( r == 1 ) /// player 2 starts
        {
            random_player2();
            printf("Knight %s is going to start first\n", player2);
            Sleep(1000);

            while ( knight_life > 0 && archer_life > 0 ) /// both players alive
            {
                /// Knight Action ------------------------------------------------------------------

                while ( knight_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Archer %s life = %d\n\n", player2, knight_life, player1, archer_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k_lance);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(k_lance,0 , 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player2);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_archer();
                            printf("Knight %s hit his opponent and damaged %d\n", player2, action);
                            archer_life -= action;

                            break;

                        case 2:

                            if ( k_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player2);
                                Sleep(2000);
                                k_lance--;
                                action = knight_lance();

                                knight_vs_archer();
                                printf("Knight %s hit his opponent and damaged %d\n", player2, action);
                                archer_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;
            }

            /// Archer Action ------------------------------------------------------------------

                while ( archer_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Archer %s life = %d\n\n", player2, knight_life, player1, archer_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a_triarrow);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player1);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_knight_nothit();
                                printf("Archer %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                archer_vs_knight_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                knight_life -= action;
                            }
                            break;

                        case 2:

                            if ( a_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_farrow();
                                a_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_knight_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_knight_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    knight_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_knight_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_knight_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    knight_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                turn++;

                if ( turn % 3 == 1 )
                    a_farrow++;
                if ( turn % 4 == 2 )
                    a_triarrow++;
                if ( turn % 3 == 1 )
                    k_lance++;
            }


            if ( knight_life > 0 )
                printf("Knight %s has won the battle!\n", player2);

            else if ( archer_life > 0 )
                printf("Archer %s has won the battle!\n", player1);

        }


        else if ( r == 2 ) /// player 1 starts
        {
            random_player1();
            printf("Archer %s is going to start first\n", player1);
            Sleep(1000);

            while ( knight_life > 0 && archer_life > 0 ) /// both players alive
            {
                while ( archer_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Archer %s life = %d\n\n", player2, knight_life, player1, archer_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a_triarrow);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player1);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_knight_nothit();
                                printf("Archer %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                archer_vs_knight_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                knight_life -= action;
                            }
                            break;

                        case 2:

                            if ( a_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_farrow();
                                a_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_knight_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_knight_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    knight_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_knight_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_knight_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    knight_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                /// Knight Action ------------------------------------------------------------------

                while ( knight_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Archer %s life = %d\n\n", player2, knight_life, player1, archer_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k_lance);
                    Sleep(200);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(k_lance,0 , 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player2);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_archer();
                            printf("Knight %s hit his opponent and damaged %d\n", player2, action);
                            archer_life -= action;

                            break;

                        case 2:

                            if ( k_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player2);
                                Sleep(2000);
                                k_lance--;
                                action = knight_lance();

                                knight_vs_archer();
                                printf("Knight %s hit his opponent and damaged %d\n", player2, action);
                                archer_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;
            }
                turn++;

                if ( turn % 3 == 1 )
                    a_farrow++;
                if ( turn % 4 == 2 )
                    a_triarrow++;
                if ( turn % 3 == 1 )
                    k_lance++;

            }

            if ( knight_life > 0 )
                printf("Knight %s has won the battle!\n", player2);

            else if ( archer_life > 0 )
                printf("Archer %s has won the battle!\n", player1);

        }

    }

    void battle_knight_archer(int player)/// +++ +++
    {
        int r;
        int action;
        int movement;
        int knight_life = 100;
        int archer_life = 70;
        int error = 0;
        int turn = 0;

        /// Knight abilities
        int k_lance = 0;

        /// Archer abilities
        int a_farrow = 0;
        int a_triarrow = 0;

        system("cls");

        printf("Knight %s versus Archer %s\n\n", player1, player2);
        Sleep(1000);

        r = 1 + rand() % 2;

        if ( r == 1 ) /// player 1 starts
        {
            random_player1();
            printf("Knight %s is going to start first\n", player1);
            Sleep(1000);

            while ( knight_life > 0 && archer_life > 0 ) /// both players alive
            {
                /// Knight Action ------------------------------------------------------------------

                while ( knight_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Archer %s life = %d\n\n", player1, knight_life, player2, archer_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k_lance);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player1);
                            action = knight_sword();
                            Sleep(2000);

                            knight_vs_archer();
                            printf("Knight %s hit his opponent and damaged %d\n", player1, action);
                            archer_life -= action;

                            break;

                        case 2:

                            if ( k_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player1);
                                Sleep(2000);
                                k_lance--;
                                action = knight_lance();

                                knight_vs_archer();
                                printf("Knight %s hit his opponent and damaged %d\n", player1, action);
                                archer_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;
            }

            /// Archer Action ------------------------------------------------------------------

                while ( archer_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Archer %s life = %d\n\n", player1, knight_life, player2, archer_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a_triarrow);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(a_farrow, a_triarrow, 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player2);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_knight_nothit();
                                printf("Archer %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                archer_vs_knight_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                knight_life -= action;
                            }
                            break;

                        case 2:

                            if ( a_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_farrow();
                                a_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_knight_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_knight_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    knight_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_knight_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_knight_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    knight_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                turn++;

                if ( turn % 3 == 1 )
                    a_farrow++;
                if ( turn % 4 == 2 )
                    a_triarrow++;
                if ( turn % 3 == 1 )
                    k_lance++;
            }


            if ( knight_life > 0 )
                printf("Knight %s has won the battle!\n", player1);

            else if ( archer_life > 0 )
                printf("Archer %s has won the battle!\n", player2);

        }


        else if ( r == 2 ) /// player 2 starts
        {
            random_player2();
            printf("Archer %s is going to start first\n", player2);
            Sleep(1000);

            while ( knight_life > 0 && archer_life > 0 ) /// both players alive
            {
                while ( archer_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Archer %s life = %d\n\n", player1, knight_life, player2, archer_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a_triarrow);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(a_farrow, a_triarrow, 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player2);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_knight_nothit();
                                printf("Archer %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                archer_vs_knight_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                knight_life -= action;
                            }
                            break;

                        case 2:

                            if ( a_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_farrow();
                                a_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_knight_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_knight_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    knight_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_knight_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_knight_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    knight_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                /// Knight Action ------------------------------------------------------------------

                while ( knight_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Archer %s life = %d\n\n", player1, knight_life, player2, archer_life);
                    Sleep(500);
                    printf("Knight %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to use Sword Attack (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to use Lance Attack (%d left)\n", k_lance);
                    Sleep(200);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Knight %s is using Sword Attack\n\n", player1);
                            Sleep(2000);
                            action = knight_sword();

                            knight_vs_archer();
                            printf("Knight %s hit his opponent and damaged %d\n", player1, action);
                            archer_life -= action;

                            break;

                        case 2:

                            if ( k_lance <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Knight %s is using Lance Attack\n\n", player1);
                                Sleep(2000);
                                k_lance--;
                                action = knight_lance();

                                knight_vs_archer();
                                printf("Knight %s hit his opponent and damaged %d\n", player1, action);
                                archer_life -= action;

                                break;
                            }

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;
            }
                turn++;

                if ( turn % 3 == 1 )
                    a_farrow++;
                if ( turn % 4 == 2 )
                    a_triarrow++;
                if ( turn % 3 == 1 )
                    k_lance++;

            }/// while brace

            if ( knight_life > 0 )
                printf("Knight %s has won the battle!\n", player1);

            else if ( archer_life > 0 )
                printf("Archer %s has won the battle!\n", player2);

        }/// if else brace


    }

    void battle_archer_archer(int player)/// +++ +++
    {
        int r;
        int action;
        int movement;
        int archer1_life = 70;
        int archer2_life = 70;
        int error = 0;
        int turn = 0;

        /// Archer1 abilities
        int a1_farrow = 0;
        int a1_triarrow = 0;

        /// Archer2 abilities
        int a2_farrow = 0;
        int a2_triarrow = 0;

        system("cls");

        printf("Archer %s versus Archer %s\n\n", player2, player1);
        Sleep(1000);

        r = 1 + rand() % 2;
        r=2;

        if ( r == 1 ) /// player 1 starts
        {
            random_player1();
            printf("Archer %s is going to start first\n", player1);
            Sleep(1000);

            while ( archer1_life > 0 && archer2_life > 0 ) /// both players alive
            {
                /// Archer 1 Action ------------------------------------------------------------------

                while ( archer1_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Archer %s life = %d         Archer %s life = %d\n\n", player1, archer1_life, player2, archer2_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a1_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a1_triarrow);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player1);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_archer_nothit();
                                printf("Archer %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                archer_vs_archer_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                archer2_life -= action;
                            }
                            break;

                        case 2:

                            if ( a1_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_farrow();
                                a1_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_archer_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_archer_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    archer2_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a1_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a1_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_archer_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_archer_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    archer2_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }

            /// Archer 2  Action ------------------------------------------------------------------

                while ( archer2_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Archer %s life = %d         Archer %s life = %d\n\n", player1, archer1_life, player2, archer2_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a2_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a2_triarrow);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(a2_farrow, a2_triarrow, 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player2);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_archer_nothit();
                                printf("Archer %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                archer_vs_archer_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                archer1_life -= action;
                            }
                            break;

                        case 2:

                            if ( a2_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_farrow();
                                a2_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_archer_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_archer_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    archer1_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a2_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a2_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_archer_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_archer_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    archer1_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                turn++;

                if ( turn % 3 == 1 )
                    a1_farrow++;
                if ( turn % 4 == 2 )
                    a1_triarrow++;
                if ( turn % 3 == 1 )
                    a2_farrow++;
                if ( turn % 4 == 2 )
                    a2_triarrow++;

            }


            if ( archer1_life > 0 )
                printf("Archer %s has won the battle!\n", player1);

            else if ( archer2_life > 0 )
                printf("Archer %s has won the battle!\n", player2);

        }


        else if ( r == 2 ) /// player 2 starts
        {
            random_player2();
            printf("Archer %s is going to start first\n", player2);
            Sleep(1000);

            while ( archer1_life > 0 && archer2_life > 0 ) /// both players alive
            {
                /// Archer 2  Action ------------------------------------------------------------------

                while ( archer2_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Knight %s life = %d         Archer %s life = %d\n\n", player1, archer1_life, player2, archer2_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player2);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a2_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a2_triarrow);

                    if ( player == 2 )
                        scanf("%d", &movement);

                    else if ( player == 1 ){
                        movement = computer_random(a2_farrow, a2_triarrow, 0);
                        printf("%d\n", movement);
                        Sleep(1500);
                    }


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player2);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_archer_nothit();
                                printf("Archer %s could not hit his opponent\n", player2);
                            }
                            else
                            {
                                archer_vs_archer_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                archer1_life -= action;
                            }
                            break;

                        case 2:

                            if ( a2_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_farrow();
                                a2_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_archer_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_archer_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    archer1_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a2_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player2);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a2_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_archer_nothit();
                                    printf("Archer %s could not hit his opponent\n", player2);
                                }
                                else
                                {
                                    archer_vs_archer_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player2, action);
                                    archer1_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;


                }

                while ( archer1_life > 0 ) /// in case of error
                {

                    error = 0;

                    printf("\n");
                    printf("    Archer %s life = %d         Archer %s life = %d\n\n", player1, archer1_life, player2, archer2_life);
                    Sleep(500);
                    printf("Archer %s, make your move!\n", player1);
                    Sleep(500);
                    printf("Enter 1 to throw Arrow (Infinitive left)\n");
                    Sleep(200);
                    printf("Enter 2 to throw Fire Arrow (%d left)\n", a1_farrow);
                    Sleep(200);
                    printf("Enter 3 to throw Triple Arrow (%d left)\n", a1_triarrow);
                    scanf("%d", &movement);


                    switch ( movement )
                    {
                        case 1:
                            printf("Archer %s is throwing Arrow\n\n", player1);
                            Sleep(2000);
                            action = archer_arrow();

                            if ( action == 0 )
                            {
                                archer_vs_archer_nothit();
                                printf("Archer %s could not hit his opponent\n", player1);
                            }
                            else
                            {
                                archer_vs_archer_hit();
                                printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                archer2_life -= action;
                            }
                            break;

                        case 2:

                            if ( a1_farrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Fire Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_farrow();
                                a1_farrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_archer_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_archer_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    archer2_life -= action;
                                }
                            }

                                break;

                        case 3:

                            if ( a1_triarrow <= 0 )
                            {
                                error = 1;
                                break;
                            }

                            else
                            {
                                printf("Archer %s is throwing Triple Arrow\n\n", player1);
                                Sleep(2000);
                                action = archer_triarrow();
                                Sleep(2500);
                                a1_triarrow--;

                                if ( action == 0 )
                                {
                                    archer_vs_archer_nothit();
                                    printf("Archer %s could not hit his opponent\n", player1);
                                }
                                else
                                {
                                    archer_vs_archer_hit();
                                    printf("Archer %s hit his opponent and damaged %d\n", player1, action);
                                    archer2_life -= action;
                                }
                            }

                                break;

                        default:
                            error = 1;
                            break;

                    }

                    if ( error == 1 ) /// if  sth wrong such as entered 6 as action or tried to use special ability second times
                    {
                        system("cls");
                        printf("\n  \aYou have done something wrong. Please enter again!\n\n");
                    }

                    else
                        break;

                }
                turn++;

                if ( turn % 3 == 1 )
                    a1_farrow++;
                if ( turn % 4 == 2 )
                    a1_triarrow++;
                if ( turn % 3 == 1 )
                    a2_farrow++;
                if ( turn % 4 == 2 )
                    a2_triarrow++;

            }

            if ( archer1_life > 0 )
                printf("Archer %s has won the battle!\n", player1);

            else if ( archer2_life > 0 )
                printf("Archer %s has won the battle!\n", player2);

        }
    }




    void wizard_vs_wizard_hit()
    {
        system("cls");
        puts("");
        puts("    @ |     | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @ |o    | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ | o   | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |  o  | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |   o | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |    o| @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |     o @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |     |o@    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(1500);
        system("cls");
    }
    void wizard_vs_knight_hit()
    {
        system("cls");
        puts("");
        puts("    @ |       @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @ |o      @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ | o     @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |  o    @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |   o   @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |    o  @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |     o @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |      o@    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");
    }
    void wizard_vs_archer_hit()
    {
        system("cls");
        puts("");
        puts("    @ |       @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @ |o      @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ | o     @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |  o    @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |   o   @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |    o  @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |     o @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |      o@    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");
    }
    void wizard_vs_wizard_nothit()
    {
        system("cls");
        puts("");
        puts("    @ |     | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @ |o    | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ | o   | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("                   ");
        puts("    @ |  o  | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("                   ");
        puts("    @ |   o | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("           o       ");
        puts("    @ |     | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("            o      ");
        puts("    @ |     | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(250);
        system("cls");

        puts("             o     ");
        puts("    @ |     | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(1500);
        system("cls");
    }
    void wizard_vs_knight_nothit()
    {
        system("cls");
        puts("");
        puts("    @ |       @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @ |o      @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ | o     @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |  o    @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("                   ");
        puts("    @ |   o   @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("           o       ");
        puts("    @ |       @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("            o      ");
        puts("    @ |       @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("             o     ");
        puts("    @ |       @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");
    }
    void wizard_vs_archer_nothit()
    {
        system("cls");
        puts("");
        puts("    @ |       @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @ |o      @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ | o     @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |  o    @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @ |   o   @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("           o       ");
        puts("    @ |       @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("            o         ");
        puts("    @ |       @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(250);
        system("cls");

        puts("             o     ");
        puts("    @ |       @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");
    }
    void wizard_vs_wizard_heal()
    {
        system("cls");
        puts("");
        puts("    @ |     | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    :D|     | @    ");
        puts("   ++++ +20 ****   ");
        puts("  + + | +20 | * *  ");
        puts("   + +| +20 |* *   ");
        puts("   + +|     |* *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @ |     | @    ");
        puts("   ****     ****   ");
        puts("  * * |     | * *  ");
        puts("   * *|     |* *   ");
        puts("   * *|     |* *   ");
        Sleep(1500);
        system("cls");
    }
    void wizard_vs_knight_heal()
    {
        system("cls");
        puts("");
        puts("    @ |       @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    :D|       @    ");
        puts("   ++++ +20  ***   ");
        puts("  + + |   --+ * *  ");
        puts("   + +| +20  * *   ");
        puts("   + +|      * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @ |       @    ");
        puts("   ****      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * *|      * *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");
    }
    void wizard_vs_archer_heal()
    {
        system("cls");
        puts("");
        puts("    @ |       @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    :D|       @    ");
        puts("   ++++ +20 /***   ");
        puts("  + + | +20 | * *  ");
        puts("   + +| +20 \\* *   ");
        puts("   + +|      * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @ |       @    ");
        puts("   ****     /***   ");
        puts("  * * |     | * *  ");
        puts("   * *|     \\* *   ");
        puts("   * *|      * *   ");
        Sleep(1500);
        system("cls");
    }
    /// one day will be thunder function. 6 more...

    void knight_vs_knight()
    {
        system("cls");
        puts("");
        puts("    @         @    ");
        puts("   ***     [ ***   ");
        puts("  * * +--  [* * *  ");
        puts("   * *     [ * *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("     @        @    ");
        puts("    ***    [ ***   ");
        puts("   * * +-- [* * *  ");
        puts("    * *    [ * *   ");
        puts("    * *      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("      @       @    ");
        puts("     ***   [ ***   ");
        puts("    * * +--[* * *  ");
        puts("     * *   [ * *   ");
        puts("     * *     * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("       @      @    ");
        puts("      ***  [ ***   ");
        puts("     * * +--* * *  ");
        puts("      * *  [ * *   ");
        puts("      * *    * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("        @     @    ");
        puts("       *** [ ***   ");
        puts("      * * +-- * *  ");
        puts("       * * [ * *   ");
        puts("       * *   * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("         @    @    ");
        puts("        ***[ ***   ");
        puts("       * * +--* *  ");
        puts("        * *[ * *   ");
        puts("        * *  * *   ");
        Sleep(1500);
        system("cls");


    }
    void knight_vs_wizard()
    {
        system("cls");
        puts("");
        puts("    @       | @    ");
        puts("   ***      ****   ");
        puts("  * * +--   | * *  ");
        puts("   * *      |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("     @      | @    ");
        puts("    ***     ****   ");
        puts("   * * +--  | * *  ");
        puts("    * *     |* *   ");
        puts("    * *     |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("      @     | @    ");
        puts("     ***    ****   ");
        puts("    * * +-- | * *  ");
        puts("     * *    |* *   ");
        puts("     * *    |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("       @    | @    ");
        puts("      ***   ****   ");
        puts("     * * +--| * *  ");
        puts("      * *   |* *   ");
        puts("      * *   |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("        @   | @    ");
        puts("       ***  ****   ");
        puts("      * * +-- * *  ");
        puts("       * *  |* *   ");
        puts("       * *  |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("         @  | @    ");
        puts("        *** ****   ");
        puts("       * * +--* *  ");
        puts("        * * |* *   ");
        puts("        * * |* *   ");
        Sleep(1500);
        system("cls");

    }
    void knight_vs_archer()
    {
        system("cls");
        puts("");
        puts("    @         @    ");
        puts("   ***      /***   ");
        puts("  * * +--   | * *  ");
        puts("   * *      \\* *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("     @        @    ");
        puts("    ***     /***   ");
        puts("   * * +--  | * *  ");
        puts("    * *     \\* *   ");
        puts("    * *      * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("      @       @    ");
        puts("     ***    /***   ");
        puts("    * * +-- | * *  ");
        puts("     * *    \\* *   ");
        puts("     * *     * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("       @      @    ");
        puts("      ***   /***   ");
        puts("     * * +--| * *  ");
        puts("      * *   \\* *   ");
        puts("      * *    * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("        @     @    ");
        puts("       ***  /***   ");
        puts("      * * +-- * *  ");
        puts("       * *  \\* *   ");
        puts("       * *   * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("         @    @    ");
        puts("        *** /***   ");
        puts("       * * +--* *  ");
        puts("        * * \\* *   ");
        puts("        * *  * *   ");
        Sleep(1500);
        system("cls");
    }

    /**void knight_vs_knight_lance();
    void knight_vs_wizard_lance();
    void knight_vs_archer_lance();*/

    /// one day will be lance function. 3 more...

    void archer_vs_archer_hit()
    {
        system("cls");
        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |     | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |-    | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * | -   | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |  -  | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |   - | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |    -| * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |     - * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |      -* *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");
    }
    void archer_vs_wizard_hit()
    {
        system("cls");
        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |     | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |-    | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * | -   | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |  -  | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |   - | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |    -| * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |     - * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |      -* *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(1500);
        system("cls");
    }
    void archer_vs_knight_hit()
    {
        system("cls");
        puts("");
        puts("    @         @    ");
        puts("   ***\\      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\      ***   ");
        puts("  * * |-  --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\      ***   ");
        puts("  * * | - --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\ -    ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\  -   ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\   -  ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\    - ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     -***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");
    }
    void archer_vs_archer_nothit()
    {
        system("cls");
        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |     | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |-    | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * | -   | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\ -   /***   ");
        puts("  * * |     | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\  -  /***   ");
        puts("  * * |     | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @      -  @    ");
        puts("   ***\\     /***   ");
        puts("  * * |     | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       - @    ");
        puts("   ***\\     /***   ");
        puts("  * * |     | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("             -     ");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |     | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("              -    ");
        puts("    @         @    ");
        puts("   ***\\     /***   ");
        puts("  * * |     | * *  ");
        puts("   * */     \\* *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");
    }
    void archer_vs_wizard_nothit()
    {
        system("cls");
        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |     | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |-    | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * | -   | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\ -   ****   ");
        puts("  * * |     | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       | @    ");
        puts("   ***\\  -  ****   ");
        puts("  * * |     | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @      -| @    ");
        puts("   ***\\     ****   ");
        puts("  * * |     | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       - @    ");
        puts("   ***\\     ****   ");
        puts("  * * |     | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("             -     ");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |     | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(250);
        system("cls");

        puts("              -    ");
        puts("    @       | @    ");
        puts("   ***\\     ****   ");
        puts("  * * |     | * *  ");
        puts("   * */     |* *   ");
        puts("   * *      |* *   ");
        Sleep(1500);
        system("cls");
    }
    void archer_vs_knight_nothit()
    {
        system("cls");
        puts("");
        puts("    @         @    ");
        puts("   ***\\      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\      ***   ");
        puts("  * * |-  --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\      ***   ");
        puts("  * * | - --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\ -    ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @         @    ");
        puts("   ***\\  -   ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @      -  @    ");
        puts("   ***\\      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("");
        puts("    @       - @    ");
        puts("   ***\\      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("             -     ");
        puts("    @         @    ");
        puts("   ***\\      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(250);
        system("cls");

        puts("              -    ");
        puts("    @         @    ");
        puts("   ***\\      ***   ");
        puts("  * * |   --+ * *  ");
        puts("   * */      * *   ");
        puts("   * *       * *   ");
        Sleep(1500);
        system("cls");
    }
    /// one day will be triple arrow function. 6 more...


    /// Wizard action functions

    int wizard_fire()
    {
        int damage;
        int hit = 1 + rand() % 4;

        if ( hit == 4 )
            return 0;
        else
        {
            damage = 11 + rand() % 25;
            return damage;
        }

    }
    int wizard_thunder()
    {
        int damage;
        int hit = rand() % 2;

        if ( hit == 0 )
            return 0;
        else
        {
            damage = 24 + rand() % 33;
            return damage;
        }
    }
    int wizard_heal()
    {
        return 20;
    }
    int wizard_freeze()
    {
        int damage;
        int hit = rand() % 2;

        if ( hit == 0 )
            return 0;
        else
        {
            damage = 4 + rand() % 3;
            return damage;
        }
    }

    /// Knight action functions

    int knight_sword()
    {
        return 6 + rand() % 3;
    }
    int knight_lance()
    {
        return 10 + rand() % 5;
    }

    int archer_arrow()
    {
        int damage;
        int hit = 1 + rand() % 4;

        if ( hit == 4 )
            return 0;
        else
        {
            damage = 8 + rand() % 5;
            return damage;
        }
    }

    /// Archer action functions

    int archer_farrow()
    {
        int damage;
        int hit = 1 + rand() % 4;

        if ( hit == 4 )
            return 0;
        else
        {
            damage = 14 + rand() % 7;
            return damage;
        }
    }
    int archer_triarrow()
    {
        int arrow[4];
        int counter = 0;

        for ( int i = 1 ; i <= 3 ; i++ )
        {
            int damage;
            int hit = 1 + rand() % 2;

            if ( hit == 1 )
                arrow[i] = 0;

            else
                {
                damage = 8 + rand() % 5;
                arrow[i] = damage;
                counter++;
                }
        }

        system("cls");
        printf("You could hit %d of 3\n", counter);
        Sleep(500);
        printf("First Shot = %d damage\nSecond shot = %d damage\nThird shot = %d damage\n", arrow[1], arrow[2], arrow[3]);
        Sleep(1000);
        return arrow[1] + arrow[2] + arrow[3];

    }



















