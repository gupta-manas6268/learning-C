from fpdf import FPDF # pyright: ignore[reportMissingModuleSource]

pdf = FPDF(orientation="P", unit="mm", format="A4") # mm => milimeter
print(type(pdf)) # => 'fpdf.fpdf.FPDF'

pdf.add_page()

# Change below line variable values, like 'family', 'h', etc. for better understanding.
pdf.set_font(family="Times", style="B", size=12)
pdf.cell(w=0, h=12, txt="Hello There!", align="L", ln=1, border=1) 
# align="L => (Left-Alignment of Text.)
# ln => break-line, (ln=1: 1-line break.)

pdf.set_font(family="Times", style="B", size=12)
pdf.cell(w=0, h=12, txt="Hi There!", align="L", ln=1, border=0)

pdf.output("output.pdf")