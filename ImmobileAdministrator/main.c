#include "presentation/userInterface.h"

#include "test/test.h"

#include "persistence/repository.h"
#include "business/service.h"
#include "presentation/userInterface.h"
#include "business/service.h"

int main() {
    runAllTests();

    /*
    RepositoryImmobile* repository_immobile = createRepository();
    ServiceImmobile* service_immobile = createService(repository_immobile);
    UserInterfaceImmobile* ui_immobile = createUserInterface(service_immobile);

    runUserInterface(ui_immobile);

    destroyUserInterface(ui_immobile);

    */
    return 0;
}
