FROM python:3.13.11-slim

COPY --from=ghcr.io/astral-sh/uv:latest /uv /usr/local/bin/uv

WORKDIR /code

COPY pyproject.toml .python-version uv.lock ./
RUN uv sync --locked

# 🔑 THIS LINE IS THE FIX
ENV PATH="/code/.venv/bin:$PATH"

COPY ingest_data.py .

ENTRYPOINT ["python", "ingest_data.py"]
