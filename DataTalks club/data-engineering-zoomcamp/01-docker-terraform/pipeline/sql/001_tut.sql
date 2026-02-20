-- @block
-- Watch GCP-Lecture & then Terraform 2nd Lecture.








-- Open Docker
-- To go to Postgres in browser, in VScode:
-- docker compose up -d
-- docker start pgadmin
-- Run in browser: http:localhost:8085/browser/
-- email: admin@admin.com, password: root
-- 
-- In 'sqltools' extension, put password from Password-Manager of postgresql.


-- @block
-- SELECT * FROM yellow_taxi_trips_2021_1 LIMIT 100;
SELECT * FROM yellow_taxi_data LIMIT 100;

-- @block
-- SELECT * FROM zones;
SELECT
    ROW_NUMBER() OVER (ORDER BY locationid) AS row_num,
    *
FROM zones;


-- @block
SELECT COUNT(*) FROM zones;

-- @block
SELECT
    tpep_pickup_datetime,
    tpep_dropoff_datetime,
    total_amount,
    CONCAT(zpu.borough, ' / ', zpu.zone) AS pickup_loc,
    CONCAT(zdo.borough, ' / ', zdo.zone) AS dropoff_loc
FROM yellow_taxi_data t
JOIN zones zpu
  ON t."PULocationID" = zpu.locationID
JOIN zones zdo
  ON t."DOLocationID" = zdo.locationID
LIMIT 100;


-- @block
SELECT
  tpep_pickup_datetime,
  tpep_dropoff_datetime,
  total_amount,
  CONCAT(zpu.borough , ' / ' , zpu.zone) AS "pickup_loc",
  CONCAT(zdo.borough , ' / ' , zpu.zone) AS "dropoff_loc"
FROM
  yellow_taxi_data t JOIN zones zpu
    ON t."PULocationID" = zpu.locationID
  JOIN zones zdo
    ON t."DOLocationID" = zdo.locationID
LIMIT 100;

-- @block
SELECT
    tpep_pickup_datetime,
    tpep_dropoff_datetime,
    total_amount,
    "PULocationID",
    "DOLocationID"
FROM yellow_taxi_data t
WHERE "PULocationID" NOT IN (
    SELECT locationid
    FROM zones
    WHERE locationid IS NOT NULL
)
LIMIT 100;

-- @block
SELECT
    tpep_pickup_datetime,
    tpep_dropoff_datetime,
    total_amount,
    "PULocationID",
    "DOLocationID"
FROM yellow_taxi_data t
LIMIT 100;

-- @block
DELETE FROM zones WHERE "locationid" = 142;

-- @block
SELECT
  tpep_pickup_datetime,
  tpep_dropoff_datetime,
  total_amount
FROM
  -- yellow_taxi_data t LEFT JOIN zones zpu
  -- yellow_taxi_data t RIGHT JOIN zones zpu
  -- yellow_taxi_data t LEFT OUTER JOIN zones zpu
  -- yellow_taxi_data t RIGHT OUTER JOIN zones zpu
  yellow_taxi_data t FULL OUTER JOIN zones zpu
    ON t."PULocationID" = zpu.locationID
  LEFT JOIN zones zdo
    ON t."DOLocationID" = zdo.locationID
LIMIT 100;

-- @block
SELECT
  CAST(tpep_dropoff_datetime AS DATE) as "day",
  COUNT(1) as "count",
  MAX(total_amount),
  MAX(passenger_count)
FROM
  yellow_taxi_data t
GROUP BY
  CAST(tpep_dropoff_datetime AS DATE)
-- ORDER BY "day" ASC;
ORDER BY "count" DESC;

-- @block
SELECT
  CAST(tpep_dropoff_datetime AS DATE) as "day",
  "DOLocationID",
  COUNT(1) as "count",
  MAX(total_amount),
  MAX(passenger_count)
FROM
  yellow_taxi_data t
GROUP BY
  1, 2
ORDER BY 
  "day" ASC,
  "DOLocationID" ASC;

-- @block
COMMIT;