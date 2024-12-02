```mermaid
graph TD
    A[Start] --> B[Input File Size in bytes]
    B --> C[Transmission Rate = 960 characters/second]
    C --> D[Calculate Transmission Time = File Size / Transmission Rate]
    D --> E[Output Transmission Time in seconds]
    E --> F[Convert Transmission Time to days, hours, minutes, and seconds]
    F --> G[Output Converted Time]
    G --> H[Another File?]
    H --> I{Yes}
    H --> J{No}
    I --> B
    J --> K[End]
