# From [03:09] of this Lecture-3.






# Docker => Used for isolated containerization.

# Run in terminal.
docker run -d --rm --name pgdatabase --network=pg-network --env-file .env -v ny_taxi_postgres_data:/var/lib/postgresql/data -p 5432:5432 postgres:16

docker run -it --rm --network=pg-network taxi_ingest:v001 --pg-user=postgres --pg-pass=root --pg-host=pgdatabase --pg-port=5432 --pg-db=ny_taxi --target-table=yellow_taxi_trips_2021_1 --chunksize=10000


# In another terminal, run pgAdmin on the same network
docker run -d --name pgadmin --network=pg-network -e PGADMIN_DEFAULT_EMAIL=admin@admin.com -e PGADMIN_DEFAULT_PASSWORD=root -v pgadmin_data:/var/lib/pgadmin -p 8085:80 dpage/pgadmin4


