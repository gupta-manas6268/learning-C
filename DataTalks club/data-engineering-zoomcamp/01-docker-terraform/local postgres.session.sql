-- Open Docker
-- To go to Postgres in browser, in VScode:
-- docker compose up -d
-- docker start pgadmin
-- Run in browser: http:localhost:8085/browser/
-- email: admin@admin.com, password: root



-- From Lecture-03, [08:30].

-- Run
-- SELECT * FROM yellow_taxi_trips_2021_1 LIMIT 100;
SELECT * FROM yellow_taxi_data LIMIT 100;

-- -- Run
-- SELECT * FROM zones

-- -- Run
-- SELECT COUNT(*) FROM zones;

-- -- Run 
-- SELECT *
-- FROM yellow_taxi_trips_2021_1 t,
--      zones zpu,
--      zones zdo
-- WHERE t."PULocationID" = zpu.locationID
--   AND t."DOLocationID" = zdo.locationID
-- LIMIT 100;

-- -- Run
-- SELECT
--     tpep_pickup_datetime,
--     tpep_dropoff_datetime,
--     total_amount,
--     CONCAT(zpu.borough, ' / ', zpu.zone) AS pickup_loc,
--     CONCAT(zdo.borough, ' / ', zdo.zone) AS dropoff_loc
-- FROM yellow_taxi_trips_2021_1 t
-- JOIN zones zpu
--   ON t."PULocationID" = zpu.locationID
-- JOIN zones zdo
--   ON t."DOLocationID" = zdo.locationID
-- LIMIT 100;


-- -- Run
-- SELECT
--   tpep_pickup_datetime,
--   tpep_dropoff_datetime,
--   total_amount,
--   CONCAT(zpu.borough , ' / ' , zpu.zone) AS "pickup_loc",
--   CONCAT(zdo.borough , ' / ' , zpu.zone) AS "dropoff_loc"
-- FROM
--   yellow_taxi_trips_2021_1 t JOIN zones zpu
--     ON t."PULocationID" = zpu.locationID
--   JOIN zones zdo
--     ON t."DOLocationID" = zdo.locationID
-- LIMIT 100;

-- -- Run
-- SELECT
--     tpep_pickup_datetime,
--     tpep_dropoff_datetime,
--     total_amount,
--     "PULocationID",
--     "DOLocationID"
-- FROM yellow_taxi_trips_2021_1 t
-- WHERE "PULocationID" NOT IN (
--     SELECT locationid
--     FROM zones
--     WHERE locationid IS NOT NULL
-- )
-- LIMIT 100;

-- -- Run
-- SELECT
--     tpep_pickup_datetime,
--     tpep_dropoff_datetime,
--     total_amount,
--     "PULocationID",
--     "DOLocationID"
-- FROM yellow_taxi_trips_2021_1 t
-- LIMIT 100;

-- -- Run
-- COMMIT;