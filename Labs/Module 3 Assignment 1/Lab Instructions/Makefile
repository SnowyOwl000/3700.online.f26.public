BASENAME = template-instructions
COMMONLOC = $(HOME)/School/Support/LaTeX/doc-common.tex

$(BASENAME).pdf: $(BASENAME).tex $(COMMONLOC)
	pdflatex "\def\doccommon{$(COMMONLOC)}\input{$(BASENAME)}"
	pdflatex "\def\doccommon{$(COMMONLOC)}\input{$(BASENAME)}"

clean:
	rm *.aux *.log
