-- From Lecture-03, [08:00].

-- Run
SELECT
  *
FROM
  yellow_taxi_trips_2021_1
LIMIT 100;


-- Run
SELECT * FROM zones

-- Run
SELECT COUNT(*) FROM zones;

-- Run 
SELECT
  *
FROM
  yellow_taxi_trips_2021_1 t,
  zones zpu,
  zones zdo
WHERE
  t."PULocationID" = zpu.locationID AND
  t."DOLocationID" = zdo.locationID
  -- PULocationID => PickUpLoc...
  -- DOLocationID => DropOffLoc...
LIMIT 100;

-- Run
SELECT
  tpep_pickup_datetime,
  tpep_dropoff_datetime,
  total_amount,
  CONCAT(zpu.borough , ' / ' , zpu.zone) AS "pickup_loc",
  CONCAT(zdo.borough , ' / ' , zpu.zone) AS "dropoff_loc"
FROM
  yellow_taxi_trips_2021_1 t,
  zones zpu,
  zones zdo
WHERE
  t."PULocationID" = zpu.locationID AND
  t."DOLocationID" = zdo.locationID
LIMIT 100;

-- Run
SELECT
  tpep_pickup_datetime,
  tpep_dropoff_datetime,
  total_amount,
  CONCAT(zpu.borough , ' / ' , zpu.zone) AS "pickup_loc",
  CONCAT(zdo.borough , ' / ' , zpu.zone) AS "dropoff_loc"
FROM
  yellow_taxi_trips_2021_1 t JOIN zones zpu
    ON t."PULocationID" = zpu.locationID
  JOIN zones zdo
    ON t."DOLocationID" = zdo.locationID
LIMIT 100;

-- Run
SELECT
  tpep_pickup_datetime,
  tpep_dropoff_datetime,
  total_amount,
  "PULocationID",
  "DOLocationID"
FROM
  yellow_taxi_trips_2021_1 t
WHERE
  -- "PULocationID" is NULL -- UR
  -- "DOLocationID" is NULL -- UR
  -- "DOLocationID" NOT IN (SELECT "locationid" FROM zones) -- UR
  "PULocationID" NOT IN (SELECT "locationid" FROM zones)
LIMIT 100;

-- Run
COMMIT;