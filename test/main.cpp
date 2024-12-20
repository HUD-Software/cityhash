
#define CATCH_CONFIG_RUNNER
#include <catch2/catch_all.hpp>

int main(int argc, char *argv[])
{
    Catch::Session session;

    // Définir une configuration personnalisée
    session.configData().showSuccessfulTests = true; // (Optionnel) Affiche tous les tests réussis
    session.configData().abortAfter = 1;             // Arrêter après le premier échec

    // Exécuter les tests
    int result = session.run(argc, argv);

    return result;
}