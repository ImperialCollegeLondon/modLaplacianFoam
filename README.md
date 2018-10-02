# modInterFoam

Reads a field `T` and doubles it to form a second field `modT`.

## Installation

1. Install Docker (see https://docs.docker.com/install).

2. Run the following:

   ```shell
   ./bin/docker_build.sh
   ./bin/docker_run.sh
   
   (cd modLaplacianFoam && wmake)
   ./Allrun.pre
   ./Allrun
   ```


