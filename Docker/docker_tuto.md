# Les commandes Docker

## Version

```bash
docker -v
docker compose -v
```

## Creer et lancer un container basee sur un image

```bash
docker run [nom_image]
```

## Lister les containers disponible et ou actif

```bash
docker ps
docker ps -a
```

## Lister les images

```bash
docker images
```

## Supprimer un container

```bash
docker rm [id_container]
```

## Supprimer un image

```bash
docker rmi [id_image]
docker image rm [id_image]
```

## Interaction avec un container

```bash
docker run -it [nom_image]:[version]
docker run --rm [nom_image]:[version]
docker run -it --rm [nom_image]:[version]
```

## Demarrer un container Exited()

```bash
docker start [id_container]
```

## Stopper un container Up()

```bash
docker stop [id_container]
```

## Interaction avec un container Exited()

```bash
docker start -ai [id_container]
docker exec -it [id_container] bash
docker exec [id_container] touch [fichier.extension]
```

## Volume Mapper

```bash
docker run -it --rm -v [chemin_absolu_dossier_local]:[chemin_absolu_dossier_container] [nom_image]:[version]
docker volume inspect [nom_volume]
```

## Volume Manager

```bash
docker volume create [nom_volume]
docker volume ls
docker volume rm [nom_volume]
docker run -it --rm -v [nom_volume]:[chemin_absolu_dossier_container] [nom_image]:[version]
```

## Telecharger un image DockerHub

```bash
docker pull [nom_image_dockerhub]
```

## Mapper un port

```bash
docker run --rm -p [port_machine]:[port_container] [nom_image]
```

## Lister les reseaux sur Docker

```bash
docker network ls
```

## Interaction avec un container dans un reseau

```bash
docker run --rm -it --network=[nom_reseau] [nom_image] //bridge ou host ou none
```

## Creer un reseau Docker

```bash
docker network create --driver=[nom_driver] [nom_reseau]
```

## Nommer un container

```bash
docker run --rm -it --network=[nom_reseau] --name=[nom_container] [nom_image]
```

## Relier un container dans un reseau

```bash
docker network connect [nom_reseau] [nom_container]
```

## Visualiser les container dans un reseau

```bash
docker network inspect [nom_reseau]
```

## Deconnection reseau

```bash
docker network disconnect [nom_reseau] [nom_container]
```

## Suppression reseau

```bash
docker network rm [nom_reseau]
```

## Dockerfile

```bash
FROM [nom_image_de_base]:[version]
WORKDIR 
COPY
RUN [commande_pour_installer_des_programmes] //C\'est possible d\'avoir plusieurs RUN
CMD
```

## Builder un image

```bash
docker build -t [nom_image_personnalise] [chemin_du_dockerfile]
```

## Pusher un image sur DockerHub

```bash
docker tag [nom_image_pers] [nom_repository]
docker push [nom_repository]
```

## Docker compose

```bash
services:
    [nom_servive]:
        image: [nom_image]
        container_name: [nom_container]
        stdin_open: true
        tty: true
        volumes:
            -[nom_dossier_local]:[nom_dossier_container]
            -[nom_volume]:[nom_dossier_container]
        networks:
            - [nom_reseau]

volumes:
    [nom_volume]:

networks:
    [nom_reseau]:
        driver: [nom_driver]
```

## Lancer avec un docker compose

```bash
docker compose up
docker compose up -d
docker compose down
docker compose rm
```