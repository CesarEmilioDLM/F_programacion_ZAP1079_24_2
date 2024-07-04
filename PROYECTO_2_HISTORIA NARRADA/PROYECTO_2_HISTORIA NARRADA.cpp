#include <iostream>
#include <string>
#include <locale>
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "HOLA, bienvenido al juego: ESCAPA DE LA TORRE\n";
    std::cout << "En esta historia TU llevas el control de lo que sucedera\n";
    std::cout << "¡Lograras escapar del lugar? o ¿moriras rapido y de la forma mas triste que te imaginas?\n";
    std::cout << "¿Quieres empezar? (si/no)\n";

    std::string respuesta;
    while (true) {
        std::cin >> respuesta;
        if (respuesta == "si" || respuesta == "SI" || respuesta == "Si") {
            break;
        }
        else if (respuesta == "no" || respuesta == "NO" || respuesta == "No") {
            std::cout << "¡Hasta luego! No has querido jugar.\n";
            return 0;
        }
        else {
            std::cout << "Opción inválida. Inténtalo de nuevo.\n";
        }
    }

    std::cout << "Despiertas y sigues tu rutina de siempre, te das un baño, desayunas, te lavas los dientes y te dispones a salir de casa\n";
    std::cout << "Abres la puerta y sales de casa, pero te das cuenta que no es la calle\n";
    std::cout << "Estas en una habitacion rara, sin nada en las las paredes tratas de abrir la puerta pero ya no esta, desaparecio, que sigue?\n";
    std::cout << "a. analizar la habitacion\n";
    std::cout << "b. gritar por ayuda\n";

    std::string opcion;
    while (true) {
        std::cin >> opcion;
        if (opcion == "a" || opcion == "b") {
            break;   
        }
        else {
            std::cout << "Opción inválida. Inténtalo de nuevo.\n";
        }
    }

    if (opcion == "a") {
        std::cout << "Analizas la habitacion, la unica puerta no tiene manija una pequeña mesa es iluminada por un foco en el techo la cual parpadea, el piso de madera se ve viejo y desgastado con un tablon levantado y por ultimo ves una trampilla en el suelo debajo de la mesa la cual esta bloqueado con un candado que se puede abrir con un codigo o una llave\n";
        std::cout << "¿Qué haces ahora?\n";
        std::cout << "a. analizar la luz\n";
        std::cout << "b. buscar debajo del tablon\n";

        std::string respuesta;
        while (true) {
            std::cin >> respuesta;
            if (respuesta == "a" || respuesta == "b") {
                break;
            }
            else {
                std::cout << "Opción inválida. Inténtalo de nuevo.\n";
            }
        }

        if (respuesta == "a") {
            std::cout << "al prestar atencion a la luz te das cuenta que en codigo morse escribe se repiten los numeros: 2595, los introduces en el candado con el codigo y logras salir\n";
            std::cout << "mientras bajas por la escalera se escucha una voz que te dice:SI BUSCAS LA GLORIA SUBE REGRESA A LA HABITACION, ESTA SERÁ DIFERENTE, PERO SI QUIERES REGRESAR A TU MISERABLE VIDA SIGUE BAJANDO\n";
            std::cout << "a. regresar a la habitacion\n";
            std::cout << "b. salir\n";

            std::string camino1;
            while (true) {
                std::cin >> camino1;
                if (camino1 == "a" || camino1 == "A" || camino1 == "B" || camino1 == "b") {
                    break;
                }
                else {
                    std::cout << "Opción inválida. Inténtalo de nuevo.\n";
                }
            }

            if (camino1 == "a" || camino1 == "A") {
                std::cout << "decides regresar a la habitacion\n";
                std::cout << "La habitacion no es como la recuerdas, en ella una gran escultura de un ulfhedinn (hombre lobo) con una cabeza de candado\n";
                std::cout << "Se acerca y te dice:\n";
                std::cout << "Veo que tu falta de habilidad fisica te ah llevado a escojer algo tan conveniente como una luz que parpadea, ahora tendras que superar esta prueba\n";
                std::cout << "Entonces te doy dos ultimas opciones, o decides pelear contra mi y tener todo lo que deseas y mas o resulves una simple pregunta y te doy un deseo adeas de salir de aqui\n";
                std::cout << "¿Que decides?\n";
                std::cout << "a. pelear\n";
                std::cout << "b. pregunta\n";
                std::string ulfhedinn;
                std::cin >> ulfhedinn;
                if (ulfhedinn == "a" || ulfhedinn == "A") {
                    std::cout << "Excelente, ya tenia tiempo que no me divertia\n";
                    std::cout << "la estatua explota y de ella sale el ulfhedinn\n";
                    std::cout << "un set de armas cae sale del piso,espada de acero, una ballesta y una bola negra que parece ser una bomba\n";
                    std::cout << "a. espada de acero\n";
                    std::cout << "b. ballesta\n";
                    std::cout << "c. bomba\n";

                    std::string pelea1;
                    while (true) {
                        std::cin >> pelea1;
                        if (pelea1 == "a" || pelea1 == "A") {
                            std::cout << "tomas la espada y tras esquivar un atque de la bestia le te colocas detras de el y le cortas una pierna\n";
                            std::cout << "mientras se encuentra en el piso te lanzas sobre el cortando su cabeza\n";
                            std::cout << "una luz te ciega y apareces afuera de tu casa pero ahora tienes la super fuerza y agilidad de la bestia\n";
                            break;
                        }
                        else if (pelea1 == "b" || pelea1 == "B") {
                            std::cout << "la bestia te arranca el arma de la mano\n";
                            std::cout << "terminas desarmado en el piso y empieza a rasguñar tu pecho\n";
                            break;
                        }
                        else if (pelea1 == "c" || pelea1 == "C") {
                            std::cout << "lanzas la bomba y explota en el aire, la bestia cae al piso\n";
                            std::cout << "pero la explosion te lanza hacia atras y te golpeas la cabeza\n";
                            break;
                        }
                        else {
                            std::cout << "Opción inválida. Inténtalo de nuevo.\n";
                        }
                    }

                    std::cout << "¿Quieres jugar de nuevo? (si/no)\n";
                    std::string respuesta2;
                    while (true) {
                        std::cin >> respuesta2;
                        if (respuesta2 == "si" || respuesta2 == "SI" || respuesta2 == "Si") {
                            // Reiniciar el juego
                            main();
                        }
                        else if (respuesta2 == "no" || respuesta2 == "NO" || respuesta2 == "No") {
                            std::cout << "¡Hasta luego! No has querido jugar de nuevo.\n";
                            return 0;
                        }
                        else {
                            std::cout << "Opción inválida. Inténtalo de nuevo.\n";
                        }
                    }
                }
                else if (ulfhedinn == "b") {
                    std::cout << "bueno, una respuesta cobarde, pero soy alguien de palabra\n";
                    std::cout << "Esta es la pregunta que decidira si vives o mueres\n";
                    std::cout << "En el cielo me encuentro, brillando con esplendor,\n";
                    std::cout << "Un punto de luz, un misterio sin fin.\n";
                    std::cout << "Los astrónomos me estudian, los poetas me cantan,\n";
                    std::cout << "¿Qué soy yo? Adivina, amigo mío.\n";

                    std::string adivinanza;
                    while (true) {
                        std::cin >> adivinanza;
                        if (adivinanza == "estrella" || adivinanza == "Estrella" || adivinanza == "ESTRELLA") {
                            std::cout << "creo que fue muy facil, bueno, ahora te vas, a y el deseo no te lo voy a dar, me das pena\n";
                            std::cout << "una luz te ciega y terminas en el piso de la calle fuera de tu casa, nada pasó\n";
                            break;
                        }
                        else {
                            std::cout << "bueno no eras tan inteligente al parecer\n";
                            std::cout << "simplemente te voy a desaparecer, adios\n";
                            std::cout << "simplemente desapareces\n";
                            break;
                        }
                    }

                    std::cout << "¿Quieres jugar de nuevo? (si/no)\n";
                    std::string respuesta2;
                    while (true) {
                        std::cin >> respuesta2;
                        if (respuesta2 == "si" || respuesta2 == "SI" || respuesta2 == "Si") {
                            // Reiniciar el juego
                            main();
                        }
                        else if (respuesta2 == "no" || respuesta2 == "NO" || respuesta2 == "No") {
                            std::cout << "¡Hasta luego! No has querido jugar de nuevo.\n";
                            return 0;
                        }
                        else {
                            std::cout << "Opción inválida. Inténtalo de nuevo.\n";
                        }
                    }
                }
            }
            else if (camino1 == "b") {

            }
        }
        else if (respuesta == "b") {
            std::cout << "metes tu mano por debajo del tablon y sacas una llave, la metes en el candado y bajas por la trampilla\n";
            std::cout << "mientras bajas por la escalera se escucha una voz que te dice:SI BUSCAS LA GLORIA SUBE REGRESA A LA HABITACION, ESTA SERÁ DIFERENTE, PERO SI QUIERES REGRESAR A TU MISERABLE VIDA SIGUE BAJANDO\n";
            std::cout << "a. regresar a la habitacion\n"; 
            std::cout << "b. salir\n";

            std::string camino2;
            while (true) {
                std::cin >> camino2;
                if (camino2 == "a" || camino2 == "b") {
                    break;
                }
                else {
                    std::cout << "Opción inválida. Inténtalo de nuevo.\n";
                }
            }

            if (camino2 == "a") {
                std::cout << " decides regresar a la habitacion\n";
                std::cout << "La habitacion no es como la recuerdas, en ella está una armadura sin cabeza,la cabeza está en sus brazos\n";
                std::cout << "Se acerca y te dice:\n";
                std::cout << "Veo que tu falta de inteligencia te ah llevado a escojer algo tan simple como levantar una tabla, ahora tendras que superar esta prueba\n";
                std::cout << "Entonces te doy dos ultimas opciones, o decides pelear contra mi y tener todo lo que deseas y mas o resulves una simple pregunta y te doy un deseo adeas de salir de aqui\n";
                std::cout << "¿Que decides?\n";
                std::cout << "a. pelear\n";
                std::cout << "b. pregunta\n";
                std::string armadura;
                std::cin >> armadura;
                if (armadura == "a" || armadura == "A") {
                    std::cout << "Excelente, ya tenia tiempo que no me divertia\n";
                    std::cout << "la armadura toma saca su espada de la funda\n";
                    std::cout << "un set de armas cae sale del piso,espada de acero, una ballesta y una bola negra que parece ser una bomba\n";
                    std::cout << "a. bomba\n";
                    std::cout << "b. ballesta\n";
                    std::cout << "c. espada de acero\n";

                    std::string pelea2;
                    while (true) {
                        std::cin >> pelea2;
                        if (pelea2 == "a" || pelea2 == "A") {
                            std::cout << "lanzas la bomba y la armadura se separa\n";
                            std::cout << "mientras te encuentras en el piso por la explosion tomas su cabeza y desaparec\n";
                            std::cout << "una luz te ciega y apareces afuera de tu casa pero ahora tienes la habilidad de desaparecer y aparecer donde quiaras\n";
                            break;
                        }
                        else if (pelea2 == "b" || pelea2 == "B") {
                            std::cout << "la bestia te arranca el arma de la mano\n";
                            std::cout << "terminas desarmado en el piso y te decapita\n";
                            break;
                        }
                        else if (pelea2 == "c" || pelea2 == "C") {
                            std::cout << "las habilidades del espadachin son muy superiores a las tuyas\n";
                            std::cout << "te corta parte del brazo con la espada y despues te decapita\n";
                            break;
                        }
                        else {
                            std::cout << "Opción inválida. Inténtalo de nuevo.\n";
                        }
                    }

                    std::cout << "¿Quieres jugar de nuevo? (si/no)\n";
                    std::string respuesta2;
                    while (true) {
                        std::cin >> respuesta2;
                        if (respuesta2 == "si" || respuesta2 == "SI" || respuesta2 == "Si") {
                            // Reiniciar el juego
                            main();
                        }
                        else if (respuesta2 == "no" || respuesta2 == "NO" || respuesta2 == "No") {
                            std::cout << "¡Hasta luego! No has querido jugar de nuevo.\n";
                            return 0;
                        }
                        else {
                            std::cout << "Opción inválida. Inténtalo de nuevo.\n";
                        }
                    }
                }
                else if (armadura == "b" || armadura == "B") {
                    std::cout << "bueno, una respuesta cobarde, pero soy alguien de palabra\n";
                    std::cout << "Esta es la pregunta que decidira si vives o mueres\n";
                    std::cout << "En cuatro patas galopan,\n";
                    std::cout << "su crin al viento ondea sin par.\n";
                    std::cout << " En la pradera o en la ciudad,\n";
                    std::cout << "¿qué noble animal es este, dime ya ?\n";
                    
                    std::string adivinanza2;
                    while (true) {
                        std::cin >> adivinanza2;
                        if (adivinanza2 == "caballo" || adivinanza2 == "Caballo" || adivinanza2 == "CABALLO") {
                            std::cout << "creo que fue muy facil, bueno, ahora te vas, a y el deseo no te lo voy a dar, me das pena\n";
                            std::cout << "una luz te ciega y terminas en el piso de la calle fuera de tu casa, nada pasó\n";
                            break;
                        }
                        else {
                            std::cout << "bueno no eras tan inteligente al parecer\n";
                            std::cout << "simplemente te voy a desaparecer, adios\n";
                            std::cout << "simplemente desapareces\n";
                            break;
                        }
                    }

                    std::cout << "¿Quieres jugar de nuevo? (si/no)\n";
                    std::string respuesta3;
                    while (true) {
                        std::cin >> respuesta3;
                        if (respuesta3 == "si" || respuesta3 == "SI" || respuesta3 == "Si") {
                            // Reiniciar el juego
                            main();
                        }
                        else if (respuesta3 == "no" || respuesta3 == "NO" || respuesta3 == "No") {
                            std::cout << "¡Hasta luego! No has querido jugar de nuevo.\n";
                            return 0;
                        }
                        else {
                            std::cout << "Opción inválida. Inténtalo de nuevo.\n";
                        }
                    }
                        
                       
                       


                }

            }
            else if (camino2 == "b") {
                

            }
        }
    }
    else if (opcion == "b") {
        std::cout << "Gritas con todas tus fuerzas, pero no parece que nadie te escuche. Sin embargo, justo después de gritar, escuchas un ruido leve que viene de afuera de la habitación. Parece que alguien o algo se acerca.\n";
        std::cout << "¿Qué haces ahora?\n";
        std::cout << "a. Esperar a ver qué pasa\n";
        std::cout << "b. Intentar abrir la puerta\n";
        std::cout << "c. Prepararte para defenderse\n";

        std::string opcion2;
        while (true) {
            std::cin >> opcion2;
            if (opcion2 == "a" || opcion2 == "b" || opcion2 == "c") {
                break;
            }
            else {
                std::cout << "Opción inválida. Inténtalo de nuevo.\n";
            }
        }

        if (opcion2 == "a") {
            std::cout << "Decides esperar a ver qué pasa. La puerta se abre sola y una figura sombría entra en la habitación. detras de esa cosa una neblina invade toda la habitacion, sin darte cuenta la figura esta un par de centimetros de ti, sintes frio en el pecho, te ah apuñalado y MUERES mientras ves los ojos del monstruo\n";
        }
        else if (opcion2 == "b") {
            std::cout << "Intentas abrir la puerta, pero no puedes. La figura sombría entra en la habitación y te golpea al abrir la puerta, caes al suelo, mientras estas algo aturdido la figura se acerca a tu cabeza y la aplasta, dejando solo un charco de sangre y pelo en el piso donde iba tu cabeza, MUERES\n";
        }
        else if (opcion2 == "c") {
            std::cout << "Te preparas para defenderte, pero la figura sombría al entrar te arroja a la pared y empieza a desmembrate mientras gritas y tratas de soltarte \n";
        }
    }

    std::cout << "¿Quieres jugar de nuevo? (si/no)\n";
    std::string respuesta2;
    while (true) {
        std::cin >> respuesta2;
        if (respuesta2 == "si" || respuesta2 == "SI" || respuesta2 == "Si") {
            // Reiniciar el juego
            main();
        }
        else if (respuesta2 == "no" || respuesta2 == "NO" || respuesta2 == "No") {
            std::cout << "¡Hasta luego! No has querido jugar de nuevo.\n";
            return 0;
        }
        else {
            std::cout << "Opción inválida. Inténtalo de nuevo.\n";
        }
    }

    return 0;
}