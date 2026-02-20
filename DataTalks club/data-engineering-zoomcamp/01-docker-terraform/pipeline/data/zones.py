# Import 'zones.csv' in postgres database 'ny_taxi'

import os
import pandas as pd
from sqlalchemy import create_engine
from dotenv import load_dotenv # pyright: ignore
from pathlib import Path

# load .env from project root
load_dotenv()

DB_USER = os.getenv("POSTGRES_USER")
DB_PASS = os.getenv("POSTGRES_PASSWORD")
DB_HOST = os.getenv("POSTGRES_HOST", "localhost")
DB_PORT = os.getenv("POSTGRES_PORT", "5432")
DB_NAME = os.getenv("POSTGRES_DB", "ny_taxi")

engine = create_engine(
    f"postgresql://{DB_USER}:{DB_PASS}@{DB_HOST}:{DB_PORT}/{DB_NAME}"
)

csv_path = Path(__file__).resolve().parent / "zones.csv"
df = pd.read_csv(csv_path)

df.columns = df.columns.str.lower()

df.to_sql(
    name="zones",
    con=engine,
    if_exists="replace",
    index=False
)

print("zones table imported successfully")
