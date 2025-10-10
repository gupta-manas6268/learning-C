from fpdf import FPDF # pyright: ignore[reportMissingModuleSource]
import pandas as pd # pyright: ignore[reportMissingModuleSource]

pdf = FPDF(orientation="P", unit="mm", format="A4") # mm => milimeter
pdf.set_auto_page_break(auto=False, margin=0) 
# i.e. Pages should not be broken automatically, because if whole-Page
#       is used.

df = pd.read_csv("topics.csv")
for index, row in df.iterrows(): # .iterrows() => Iterate rows.
    pdf.add_page()

    pdf.set_font(family="Times", style="B", size=24)
    pdf.set_text_color(100, 100, 100) # R, G, B
    # (↑)  (R, G, B)(100, 100, 100) => Gray.

    pdf.cell(w=0, h=12, txt=row["Topic"], align="L", ln=1) 
    # I remove 'border' variable. 

    pdf.line(x1=10, y1=21, x2=200, y2=21) # Line b/w (x1, y1) & (x2, y2)
    Line_Depth = 31
    while Line_Depth < 285:
        pdf.line(x1=10, y1=Line_Depth, x2=200, y2=Line_Depth) # Line b/w (x1, y1) & (x2, y2)
        Line_Depth += 10

    # Footer
    pdf.ln(265) # (265mm-Break lines => 'mm' from Line-4.)
    # To get to bottom of Page for Footer

    pdf.set_font(family="Times", style="I", size=8)
    pdf.set_text_color(180, 180, 180)
    pdf.cell(w=0, h=10, txt=row["Topic"], align="R")


    # Range => range(5): 0, 1, 2, 3, 4
    #       => range(2, 6): 2, 3, 4, 5
    for i in range(row["Pages"] - 1):
        pdf.add_page()
        Line_Depth = 21
        while Line_Depth < 285:
            pdf.line(x1=10, y1=Line_Depth, x2=200, y2=Line_Depth) # Line b/w (x1, y1) & (x2, y2)
            Line_Depth += 10

        # Footer
        pdf.ln(265+12) # 12 => From height of Line-17.
        # To get to bottom of Page for Footer

        pdf.set_font(family="Times", style="I", size=8)
        pdf.set_text_color(180, 180, 180)
        pdf.cell(w=0, h=10, txt=row["Topic"], align="R")


pdf.output("output-2.pdf")