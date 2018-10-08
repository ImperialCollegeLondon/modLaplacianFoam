FROM hfdresearch/swak4foamandpyfoam:latest-v5.0

USER root
RUN apt-get update && apt-get -y install gmsh git sudo

RUN chmod -R 777 /home/openfoam/platforms


RUN mkdir /opt/gmsh && \
    cd /opt/gmsh && \
    wget http://gmsh.info/bin/Linux/gmsh-3.0.6-Linux64.tgz && \
    tar -xvzf gmsh-3.0.6-Linux64.tgz && \
    ln -sf /opt/gmsh/gmsh-3.0.6-Linux64/bin/gmsh /usr/bin/gmsh

USER openfoam
WORKDIR /home/openfoam/run


